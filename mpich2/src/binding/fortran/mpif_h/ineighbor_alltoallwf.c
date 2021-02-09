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
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INEIGHBOR_ALLTOALLW = PMPI_INEIGHBOR_ALLTOALLW
#pragma weak mpi_ineighbor_alltoallw__ = PMPI_INEIGHBOR_ALLTOALLW
#pragma weak mpi_ineighbor_alltoallw_ = PMPI_INEIGHBOR_ALLTOALLW
#pragma weak mpi_ineighbor_alltoallw = PMPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw__
#pragma weak mpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw__
#pragma weak mpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw__
#pragma weak mpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw_
#pragma weak mpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw_
#pragma weak mpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw_
#pragma weak mpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw
#pragma weak mpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw
#pragma weak mpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw
#pragma weak mpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_INEIGHBOR_ALLTOALLW = PMPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INEIGHBOR_ALLTOALLW  MPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallw__  mpi_ineighbor_alltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallw  mpi_ineighbor_alltoallw
#else
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoallw_  mpi_ineighbor_alltoallw_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INEIGHBOR_ALLTOALLW as PMPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoallw__ as pmpi_ineighbor_alltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoallw as pmpi_ineighbor_alltoallw
#else
#pragma _CRI duplicate mpi_ineighbor_alltoallw_ as pmpi_ineighbor_alltoallw_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ineighbor_alltoallw__ = MPI_INEIGHBOR_ALLTOALLW
#pragma weak mpi_ineighbor_alltoallw_ = MPI_INEIGHBOR_ALLTOALLW
#pragma weak mpi_ineighbor_alltoallw = MPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLW = mpi_ineighbor_alltoallw__
#pragma weak mpi_ineighbor_alltoallw_ = mpi_ineighbor_alltoallw__
#pragma weak mpi_ineighbor_alltoallw = mpi_ineighbor_alltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALLW = mpi_ineighbor_alltoallw_
#pragma weak mpi_ineighbor_alltoallw__ = mpi_ineighbor_alltoallw_
#pragma weak mpi_ineighbor_alltoallw = mpi_ineighbor_alltoallw_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALLW = mpi_ineighbor_alltoallw
#pragma weak mpi_ineighbor_alltoallw__ = mpi_ineighbor_alltoallw
#pragma weak mpi_ineighbor_alltoallw_ = mpi_ineighbor_alltoallw
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ineighbor_alltoallw__ = PMPI_INEIGHBOR_ALLTOALLW
#pragma weak pmpi_ineighbor_alltoallw_ = PMPI_INEIGHBOR_ALLTOALLW
#pragma weak pmpi_ineighbor_alltoallw = PMPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw__
#pragma weak pmpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw__
#pragma weak pmpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw_
#pragma weak pmpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw_
#pragma weak pmpi_ineighbor_alltoallw = pmpi_ineighbor_alltoallw_
#else
#pragma weak PMPI_INEIGHBOR_ALLTOALLW = pmpi_ineighbor_alltoallw
#pragma weak pmpi_ineighbor_alltoallw__ = pmpi_ineighbor_alltoallw
#pragma weak pmpi_ineighbor_alltoallw_ = pmpi_ineighbor_alltoallw
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALLW( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw__( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoallw_( void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], void*, MPI_Fint [], MPI_Aint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoallw")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoallw_ PMPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoallw_ pmpi_ineighbor_alltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoallw_ pmpi_ineighbor_alltoallw
#else
#define mpi_ineighbor_alltoallw_ pmpi_ineighbor_alltoallw_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ineighbor_alltoallw
#define MPI_Ineighbor_alltoallw PMPI_Ineighbor_alltoallw 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoallw_ MPI_INEIGHBOR_ALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoallw_ mpi_ineighbor_alltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoallw_ mpi_ineighbor_alltoallw
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoallw_ ( void*v1, MPI_Fint v2[], MPI_Aint v3[], MPI_Fint v4[], void*v5, MPI_Fint v6[], MPI_Aint v7[], MPI_Fint v8[], MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v5 == MPIR_F_MPI_BOTTOM) v5 = MPI_BOTTOM;
    *ierr = MPI_Ineighbor_alltoallw( v1, v2, v3, (MPI_Datatype *)(v4), v5, v6, v7, (MPI_Datatype *)(v8), (MPI_Comm)(*v9), (MPI_Request *)(v10) );
}
