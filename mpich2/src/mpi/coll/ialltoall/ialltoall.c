/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#include "mpiimpl.h"

/*
=== BEGIN_MPI_T_CVAR_INFO_BLOCK ===

cvars:
    - name        : MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM
      category    : COLLECTIVE
      type        : enum
      default     : auto
      class       : none
      verbosity   : MPI_T_VERBOSITY_USER_BASIC
      scope       : MPI_T_SCOPE_ALL_EQ
      description : |-
        Variable to select ialltoall algorithm
        auto - Internal algorithm selection (can be overridden with MPIR_CVAR_COLL_SELECTION_TUNING_JSON_FILE)
        sched_auto - Internal algorithm selection for sched-based algorithms
        sched_brucks            - Force brucks algorithm
        sched_inplace           - Force inplace algorithm
        sched_pairwise          - Force pairwise algorithm
        sched_permuted_sendrecv - Force permuted sendrecv algorithm
        gentran_ring            - Force generic transport based ring algorithm
        gentran_brucks          - Force generic transport based brucks algorithm
        gentran_scattered       - Force generic transport based scattered algorithm

    - name        : MPIR_CVAR_IALLTOALL_INTER_ALGORITHM
      category    : COLLECTIVE
      type        : enum
      default     : auto
      class       : none
      verbosity   : MPI_T_VERBOSITY_USER_BASIC
      scope       : MPI_T_SCOPE_ALL_EQ
      description : |-
        Variable to select ialltoall algorithm
        auto - Internal algorithm selection (can be overridden with MPIR_CVAR_COLL_SELECTION_TUNING_JSON_FILE)
        sched_auto - Internal algorithm selection for sched-based algorithms
        sched_pairwise_exchange - Force pairwise exchange algorithm

    - name        : MPIR_CVAR_IALLTOALL_DEVICE_COLLECTIVE
      category    : COLLECTIVE
      type        : boolean
      default     : true
      class       : none
      verbosity   : MPI_T_VERBOSITY_USER_BASIC
      scope       : MPI_T_SCOPE_ALL_EQ
      description : >-
        This CVAR is only used when MPIR_CVAR_DEVICE_COLLECTIVES
        is set to "percoll".  If set to true, MPI_Ialltoall will
        allow the device to override the MPIR-level collective
        algorithms.  The device might still call the MPIR-level
        algorithms manually.  If set to false, the device-override
        will be disabled.

=== END_MPI_T_CVAR_INFO_BLOCK ===
*/

/* -- Begin Profiling Symbol Block for routine MPI_Ialltoall */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Ialltoall = PMPI_Ialltoall
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Ialltoall  MPI_Ialltoall
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Ialltoall as PMPI_Ialltoall
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, MPI_Comm comm, MPI_Request * request)
    __attribute__ ((weak, alias("PMPI_Ialltoall")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Ialltoall
#define MPI_Ialltoall PMPI_Ialltoall

/* This is the machine-independent implementation of alltoall. The algorithm is:

   Algorithm: MPI_Alltoall

   We use four algorithms for alltoall. For short messages and
   (comm_size >= 8), we use the algorithm by Jehoshua Bruck et al,
   IEEE TPDS, Nov. 1997. It is a store-and-forward algorithm that
   takes lgp steps. Because of the extra communication, the bandwidth
   requirement is (n/2).lgp.beta.

   Cost = lgp.alpha + (n/2).lgp.beta

   where n is the total amount of data a process needs to send to all
   other processes.

   For medium size messages and (short messages for comm_size < 8), we
   use an algorithm that posts all irecvs and isends and then does a
   waitall. We scatter the order of sources and destinations among the
   processes, so that all processes don't try to send/recv to/from the
   same process at the same time.

   *** Modification: We post only a small number of isends and irecvs
   at a time and wait on them as suggested by Tony Ladd. ***
   *** See comments below about an additional modification that
   we may want to consider ***

   For long messages and power-of-two number of processes, we use a
   pairwise exchange algorithm, which takes p-1 steps. We
   calculate the pairs by using an exclusive-or algorithm:
           for (i=1; i<comm_size; i++)
               dest = rank ^ i;
   This algorithm doesn't work if the number of processes is not a power of
   two. For a non-power-of-two number of processes, we use an
   algorithm in which, in step i, each process  receives from (rank-i)
   and sends to (rank+i).

   Cost = (p-1).alpha + n.beta

   where n is the total amount of data a process needs to send to all
   other processes.

   Possible improvements:

   End Algorithm: MPI_Alltoall
*/

int MPIR_Ialltoall_allcomm_auto(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                MPIR_Comm * comm_ptr, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_Csel_coll_sig_s coll_sig = {
        .coll_type = MPIR_CSEL_COLL_TYPE__IALLTOALL,
        .comm_ptr = comm_ptr,

        .u.ialltoall.sendbuf = sendbuf,
        .u.ialltoall.sendcount = sendcount,
        .u.ialltoall.sendtype = sendtype,
        .u.ialltoall.recvcount = recvcount,
        .u.ialltoall.recvbuf = recvbuf,
        .u.ialltoall.recvtype = recvtype,
    };

    MPII_Csel_container_s *cnt = MPIR_Csel_search(comm_ptr->csel_comm, coll_sig);
    MPIR_Assert(cnt);

    switch (cnt->id) {
        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_gentran_ring:
            mpi_errno =
                MPIR_Ialltoall_intra_gentran_ring(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                                  recvtype, comm_ptr, request);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_gentran_brucks:
            mpi_errno =
                MPIR_Ialltoall_intra_gentran_brucks(sendbuf, sendcount, sendtype, recvbuf,
                                                    recvcount, recvtype, comm_ptr,
                                                    cnt->u.ialltoall.intra_gentran_brucks.k,
                                                    cnt->u.ialltoall.
                                                    intra_gentran_brucks.buffer_per_phase, request);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_gentran_scattered:
            mpi_errno =
                MPIR_Ialltoall_intra_gentran_scattered(sendbuf, sendcount, sendtype, recvbuf,
                                                       recvcount, recvtype, comm_ptr,
                                                       cnt->u.ialltoall.
                                                       intra_gentran_scattered.batch_size,
                                                       cnt->u.ialltoall.
                                                       intra_gentran_scattered.bblock, request);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_sched_auto:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_auto, comm_ptr, request, sendbuf,
                               sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_sched_brucks:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_brucks, comm_ptr, request, sendbuf,
                               sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_sched_inplace:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_inplace, comm_ptr, request, sendbuf,
                               sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_sched_pairwise:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_pairwise, comm_ptr, request, sendbuf,
                               sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_intra_sched_permuted_sendrecv:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_permuted_sendrecv, comm_ptr, request,
                               sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_inter_sched_auto:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_inter_sched_auto, comm_ptr, request, sendbuf,
                               sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        case MPII_CSEL_CONTAINER_TYPE__ALGORITHM__MPIR_Ialltoall_inter_sched_pairwise_exchange:
            MPII_SCHED_WRAPPER(MPIR_Ialltoall_inter_sched_pairwise_exchange, comm_ptr, request,
                               sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype);
            break;

        default:
            MPIR_Assert(0);
    }

  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

int MPIR_Ialltoall_intra_sched_auto(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                    void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                    MPIR_Comm * comm_ptr, MPIR_Sched_t s)
{
    int mpi_errno = MPI_SUCCESS;
    MPI_Aint nbytes, sendtype_size;
    int comm_size;

    comm_size = comm_ptr->local_size;

    MPIR_Datatype_get_size_macro(sendtype, sendtype_size);
    nbytes = sendtype_size * sendcount;

    if (sendbuf == MPI_IN_PLACE) {
        mpi_errno =
            MPIR_Ialltoall_intra_sched_inplace(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                               recvtype, comm_ptr, s);
    } else if ((nbytes <= MPIR_CVAR_ALLTOALL_SHORT_MSG_SIZE) && (comm_size >= 8)) {
        mpi_errno =
            MPIR_Ialltoall_intra_sched_brucks(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                              recvtype, comm_ptr, s);
    } else if (nbytes <= MPIR_CVAR_ALLTOALL_MEDIUM_MSG_SIZE) {
        mpi_errno =
            MPIR_Ialltoall_intra_sched_permuted_sendrecv(sendbuf, sendcount, sendtype, recvbuf,
                                                         recvcount, recvtype, comm_ptr, s);
    } else {
        mpi_errno =
            MPIR_Ialltoall_intra_sched_pairwise(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                                recvtype, comm_ptr, s);
    }
    MPIR_ERR_CHECK(mpi_errno);

  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}


int MPIR_Ialltoall_inter_sched_auto(const void *sendbuf, int sendcount, MPI_Datatype
                                    sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                    MPIR_Comm * comm_ptr, MPIR_Sched_t s)
{
    int mpi_errno = MPI_SUCCESS;

    mpi_errno = MPIR_Ialltoall_inter_sched_pairwise_exchange(sendbuf, sendcount,
                                                             sendtype, recvbuf, recvcount, recvtype,
                                                             comm_ptr, s);

    return mpi_errno;
}

int MPIR_Ialltoall_sched_auto(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, int recvcount, MPI_Datatype recvtype,
                              MPIR_Comm * comm_ptr, MPIR_Sched_t s)
{
    int mpi_errno = MPI_SUCCESS;

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        mpi_errno = MPIR_Ialltoall_intra_sched_auto(sendbuf, sendcount, sendtype,
                                                    recvbuf, recvcount, recvtype, comm_ptr, s);
    } else {
        mpi_errno = MPIR_Ialltoall_inter_sched_auto(sendbuf, sendcount, sendtype,
                                                    recvbuf, recvcount, recvtype, comm_ptr, s);
    }

    return mpi_errno;
}

int MPIR_Ialltoall_impl(const void *sendbuf, int sendcount,
                        MPI_Datatype sendtype, void *recvbuf, int recvcount,
                        MPI_Datatype recvtype, MPIR_Comm * comm_ptr, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;

    *request = NULL;

    /* If the user picks one of the transport-enabled algorithms, branch there
     * before going down to the MPIR_Sched-based algorithms. */
    /* TODO - Eventually the intention is to replace all of the
     * MPIR_Sched-based algorithms with transport-enabled algorithms, but that
     * will require sufficient performance testing and replacement algorithms. */
    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        /* intracommunicator */
        switch (MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM) {
            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_gentran_ring:
                mpi_errno =
                    MPIR_Ialltoall_intra_gentran_ring(sendbuf, sendcount, sendtype, recvbuf,
                                                      recvcount, recvtype, comm_ptr, request);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_gentran_brucks:
                mpi_errno =
                    MPIR_Ialltoall_intra_gentran_brucks(sendbuf, sendcount, sendtype, recvbuf,
                                                        recvcount, recvtype, comm_ptr,
                                                        MPIR_CVAR_IALLTOALL_BRUCKS_KVAL,
                                                        MPIR_CVAR_IALLTOALL_BRUCKS_BUFFER_PER_NBR,
                                                        request);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_gentran_scattered:
                mpi_errno =
                    MPIR_Ialltoall_intra_gentran_scattered(sendbuf, sendcount,
                                                           sendtype, recvbuf,
                                                           recvcount, recvtype, comm_ptr,
                                                           MPIR_CVAR_IALLTOALL_SCATTERED_BATCH_SIZE,
                                                           MPIR_CVAR_IALLTOALL_SCATTERED_OUTSTANDING_TASKS,
                                                           request);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_sched_brucks:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_brucks, comm_ptr, request, sendbuf,
                                   sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_sched_inplace:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_inplace, comm_ptr, request, sendbuf,
                                   sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_sched_pairwise:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_pairwise, comm_ptr, request, sendbuf,
                                   sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_sched_permuted_sendrecv:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_permuted_sendrecv, comm_ptr, request,
                                   sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_sched_auto:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_intra_sched_auto, comm_ptr, request, sendbuf,
                                   sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTRA_ALGORITHM_auto:
                mpi_errno =
                    MPIR_Ialltoall_allcomm_auto(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                                recvtype, comm_ptr, request);
                break;

            default:
                MPIR_Assert(0);
        }
    } else {
        switch (MPIR_CVAR_IALLTOALL_INTER_ALGORITHM) {
            case MPIR_CVAR_IALLTOALL_INTER_ALGORITHM_sched_pairwise_exchange:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_inter_sched_pairwise_exchange, comm_ptr, request,
                                   sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTER_ALGORITHM_sched_auto:
                MPII_SCHED_WRAPPER(MPIR_Ialltoall_inter_sched_auto, comm_ptr, request, sendbuf,
                                   sendcount, sendtype, recvbuf, recvcount, recvtype);
                break;

            case MPIR_CVAR_IALLTOALL_INTER_ALGORITHM_auto:
                mpi_errno =
                    MPIR_Ialltoall_allcomm_auto(sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                                recvtype, comm_ptr, request);
                break;

            default:
                MPIR_Assert(0);
        }
    }

    MPIR_ERR_CHECK(mpi_errno);

  fn_exit:
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

int MPIR_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                   void *recvbuf, int recvcount, MPI_Datatype recvtype,
                   MPIR_Comm * comm_ptr, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;

    if ((MPIR_CVAR_DEVICE_COLLECTIVES == MPIR_CVAR_DEVICE_COLLECTIVES_all) ||
        ((MPIR_CVAR_DEVICE_COLLECTIVES == MPIR_CVAR_DEVICE_COLLECTIVES_percoll) &&
         MPIR_CVAR_IALLTOALL_DEVICE_COLLECTIVE)) {
        mpi_errno =
            MPID_Ialltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm_ptr,
                           request);
    } else {
        mpi_errno = MPIR_Ialltoall_impl(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype,
                                        comm_ptr, request);
    }

    return mpi_errno;
}

#endif /* MPICH_MPI_FROM_PMPI */

/*@
MPI_Ialltoall - Sends data from all to all processes in a nonblocking way

Input Parameters:
+ sendbuf - starting address of the send buffer (choice)
. sendcount - number of elements in send buffer (non-negative integer)
. sendtype - data type of send buffer elements (handle)
. recvcount - number of elements received from any process (non-negative integer)
. recvtype - data type of receive buffer elements (handle)
- comm - communicator (handle)

Output Parameters:
+ recvbuf - starting address of the receive buffer (choice)
- request - communication request (handle)

.N ThreadSafe

.N Fortran

.N Errors
@*/
int MPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                  void *recvbuf, int recvcount, MPI_Datatype recvtype,
                  MPI_Comm comm, MPI_Request * request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr = NULL;
    MPIR_Request *request_ptr = NULL;
    MPIR_FUNC_TERSE_STATE_DECL(MPID_STATE_MPI_IALLTOALL);

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER(MPID_STATE_MPI_IALLTOALL);

    /* Validate parameters, especially handles needing to be converted */
#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            if (sendbuf != MPI_IN_PLACE) {
                MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
                MPIR_ERRTEST_DATATYPE(sendtype, "sendtype", mpi_errno);
            }
            MPIR_ERRTEST_COUNT(recvcount, mpi_errno);
            MPIR_ERRTEST_DATATYPE(recvtype, "recvtype", mpi_errno);
            MPIR_ERRTEST_COMM(comm, mpi_errno);

            /* TODO more checks may be appropriate */
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* Convert MPI object handles to object pointers */
    MPIR_Comm_get_ptr(comm, comm_ptr);

    /* Validate parameters and objects (post conversion) */
#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno != MPI_SUCCESS)
                goto fn_fail;

            if (sendbuf != MPI_IN_PLACE && !HANDLE_IS_BUILTIN(sendtype)) {
                MPIR_Datatype *sendtype_ptr = NULL;
                MPIR_Datatype_get_ptr(sendtype, sendtype_ptr);
                MPIR_Datatype_valid_ptr(sendtype_ptr, mpi_errno);
                if (mpi_errno != MPI_SUCCESS)
                    goto fn_fail;
                MPIR_Datatype_committed_ptr(sendtype_ptr, mpi_errno);
                if (mpi_errno != MPI_SUCCESS)
                    goto fn_fail;
            }

            if (!HANDLE_IS_BUILTIN(recvtype)) {
                MPIR_Datatype *recvtype_ptr = NULL;
                MPIR_Datatype_get_ptr(recvtype, recvtype_ptr);
                MPIR_Datatype_valid_ptr(recvtype_ptr, mpi_errno);
                if (mpi_errno != MPI_SUCCESS)
                    goto fn_fail;
                MPIR_Datatype_committed_ptr(recvtype_ptr, mpi_errno);
                if (mpi_errno != MPI_SUCCESS)
                    goto fn_fail;
            }

            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);

            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM &&
                sendbuf != MPI_IN_PLACE &&
                sendcount == recvcount && sendtype == recvtype && sendcount != 0)
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            /* TODO more checks may be appropriate (counts, in_place, etc) */
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ...  */

    mpi_errno =
        MPIR_Ialltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm_ptr,
                       &request_ptr);
    MPIR_ERR_CHECK(mpi_errno);

    /* create a complete request, if needed */
    if (!request_ptr)
        request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
    /* return the handle of the request to the user */
    *request = request_ptr->handle;

    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT(MPID_STATE_MPI_IALLTOALL);
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLING-- */
#ifdef HAVE_ERROR_CHECKING
    {
        mpi_errno =
            MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                 "**mpi_ialltoall", "**mpi_ialltoall %p %d %D %p %d %D %C %p",
                                 sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm,
                                 request);
    }
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    goto fn_exit;
    /* --END ERROR HANDLING-- */
}
