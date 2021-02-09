/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FETCH_AND_OP = PMPI_FETCH_AND_OP
#pragma weak mpi_fetch_and_op__ = PMPI_FETCH_AND_OP
#pragma weak mpi_fetch_and_op_ = PMPI_FETCH_AND_OP
#pragma weak mpi_fetch_and_op = PMPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FETCH_AND_OP = pmpi_fetch_and_op__
#pragma weak mpi_fetch_and_op__ = pmpi_fetch_and_op__
#pragma weak mpi_fetch_and_op_ = pmpi_fetch_and_op__
#pragma weak mpi_fetch_and_op = pmpi_fetch_and_op__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FETCH_AND_OP = pmpi_fetch_and_op_
#pragma weak mpi_fetch_and_op__ = pmpi_fetch_and_op_
#pragma weak mpi_fetch_and_op_ = pmpi_fetch_and_op_
#pragma weak mpi_fetch_and_op = pmpi_fetch_and_op_
#else
#pragma weak MPI_FETCH_AND_OP = pmpi_fetch_and_op
#pragma weak mpi_fetch_and_op__ = pmpi_fetch_and_op
#pragma weak mpi_fetch_and_op_ = pmpi_fetch_and_op
#pragma weak mpi_fetch_and_op = pmpi_fetch_and_op
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FETCH_AND_OP = PMPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_fetch_and_op__ = pmpi_fetch_and_op__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_fetch_and_op = pmpi_fetch_and_op
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_fetch_and_op_ = pmpi_fetch_and_op_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FETCH_AND_OP  MPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_fetch_and_op__  mpi_fetch_and_op__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_fetch_and_op  mpi_fetch_and_op
#else
#pragma _HP_SECONDARY_DEF pmpi_fetch_and_op_  mpi_fetch_and_op_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FETCH_AND_OP as PMPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_fetch_and_op__ as pmpi_fetch_and_op__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_fetch_and_op as pmpi_fetch_and_op
#else
#pragma _CRI duplicate mpi_fetch_and_op_ as pmpi_fetch_and_op_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_fetch_and_op__ = MPI_FETCH_AND_OP
#pragma weak mpi_fetch_and_op_ = MPI_FETCH_AND_OP
#pragma weak mpi_fetch_and_op = MPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FETCH_AND_OP = mpi_fetch_and_op__
#pragma weak mpi_fetch_and_op_ = mpi_fetch_and_op__
#pragma weak mpi_fetch_and_op = mpi_fetch_and_op__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FETCH_AND_OP = mpi_fetch_and_op_
#pragma weak mpi_fetch_and_op__ = mpi_fetch_and_op_
#pragma weak mpi_fetch_and_op = mpi_fetch_and_op_
#else
#pragma weak MPI_FETCH_AND_OP = mpi_fetch_and_op
#pragma weak mpi_fetch_and_op__ = mpi_fetch_and_op
#pragma weak mpi_fetch_and_op_ = mpi_fetch_and_op
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FETCH_AND_OP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_fetch_and_op__ = PMPI_FETCH_AND_OP
#pragma weak pmpi_fetch_and_op_ = PMPI_FETCH_AND_OP
#pragma weak pmpi_fetch_and_op = PMPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FETCH_AND_OP = pmpi_fetch_and_op__
#pragma weak pmpi_fetch_and_op_ = pmpi_fetch_and_op__
#pragma weak pmpi_fetch_and_op = pmpi_fetch_and_op__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FETCH_AND_OP = pmpi_fetch_and_op_
#pragma weak pmpi_fetch_and_op__ = pmpi_fetch_and_op_
#pragma weak pmpi_fetch_and_op = pmpi_fetch_and_op_
#else
#pragma weak PMPI_FETCH_AND_OP = pmpi_fetch_and_op
#pragma weak pmpi_fetch_and_op__ = pmpi_fetch_and_op
#pragma weak pmpi_fetch_and_op_ = pmpi_fetch_and_op
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FETCH_AND_OP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FETCH_AND_OP( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_fetch_and_op_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_fetch_and_op")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_fetch_and_op_ PMPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_fetch_and_op_ pmpi_fetch_and_op__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_fetch_and_op_ pmpi_fetch_and_op
#else
#define mpi_fetch_and_op_ pmpi_fetch_and_op_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Fetch_and_op
#define MPI_Fetch_and_op PMPI_Fetch_and_op 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_fetch_and_op_ MPI_FETCH_AND_OP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_fetch_and_op_ mpi_fetch_and_op__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_fetch_and_op_ mpi_fetch_and_op
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_fetch_and_op_ ( void*v1, void*v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Aint * v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_Fetch_and_op( v1, v2, (MPI_Datatype)(*v3), (int)*v4, *v5, (MPI_Op)*v6, (MPI_Win)*v7 );
}
