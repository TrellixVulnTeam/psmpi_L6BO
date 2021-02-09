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
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GRAPHDIMS_GET = PMPI_GRAPHDIMS_GET
#pragma weak mpi_graphdims_get__ = PMPI_GRAPHDIMS_GET
#pragma weak mpi_graphdims_get_ = PMPI_GRAPHDIMS_GET
#pragma weak mpi_graphdims_get = PMPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GRAPHDIMS_GET = pmpi_graphdims_get__
#pragma weak mpi_graphdims_get__ = pmpi_graphdims_get__
#pragma weak mpi_graphdims_get_ = pmpi_graphdims_get__
#pragma weak mpi_graphdims_get = pmpi_graphdims_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GRAPHDIMS_GET = pmpi_graphdims_get_
#pragma weak mpi_graphdims_get__ = pmpi_graphdims_get_
#pragma weak mpi_graphdims_get_ = pmpi_graphdims_get_
#pragma weak mpi_graphdims_get = pmpi_graphdims_get_
#else
#pragma weak MPI_GRAPHDIMS_GET = pmpi_graphdims_get
#pragma weak mpi_graphdims_get__ = pmpi_graphdims_get
#pragma weak mpi_graphdims_get_ = pmpi_graphdims_get
#pragma weak mpi_graphdims_get = pmpi_graphdims_get
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GRAPHDIMS_GET = PMPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graphdims_get__ = pmpi_graphdims_get__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graphdims_get = pmpi_graphdims_get
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_graphdims_get_ = pmpi_graphdims_get_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GRAPHDIMS_GET  MPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_graphdims_get__  mpi_graphdims_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_graphdims_get  mpi_graphdims_get
#else
#pragma _HP_SECONDARY_DEF pmpi_graphdims_get_  mpi_graphdims_get_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GRAPHDIMS_GET as PMPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_graphdims_get__ as pmpi_graphdims_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_graphdims_get as pmpi_graphdims_get
#else
#pragma _CRI duplicate mpi_graphdims_get_ as pmpi_graphdims_get_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_graphdims_get__ = MPI_GRAPHDIMS_GET
#pragma weak mpi_graphdims_get_ = MPI_GRAPHDIMS_GET
#pragma weak mpi_graphdims_get = MPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GRAPHDIMS_GET = mpi_graphdims_get__
#pragma weak mpi_graphdims_get_ = mpi_graphdims_get__
#pragma weak mpi_graphdims_get = mpi_graphdims_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GRAPHDIMS_GET = mpi_graphdims_get_
#pragma weak mpi_graphdims_get__ = mpi_graphdims_get_
#pragma weak mpi_graphdims_get = mpi_graphdims_get_
#else
#pragma weak MPI_GRAPHDIMS_GET = mpi_graphdims_get
#pragma weak mpi_graphdims_get__ = mpi_graphdims_get
#pragma weak mpi_graphdims_get_ = mpi_graphdims_get
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GRAPHDIMS_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_graphdims_get__ = PMPI_GRAPHDIMS_GET
#pragma weak pmpi_graphdims_get_ = PMPI_GRAPHDIMS_GET
#pragma weak pmpi_graphdims_get = PMPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GRAPHDIMS_GET = pmpi_graphdims_get__
#pragma weak pmpi_graphdims_get_ = pmpi_graphdims_get__
#pragma weak pmpi_graphdims_get = pmpi_graphdims_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GRAPHDIMS_GET = pmpi_graphdims_get_
#pragma weak pmpi_graphdims_get__ = pmpi_graphdims_get_
#pragma weak pmpi_graphdims_get = pmpi_graphdims_get_
#else
#pragma weak PMPI_GRAPHDIMS_GET = pmpi_graphdims_get
#pragma weak pmpi_graphdims_get__ = pmpi_graphdims_get
#pragma weak pmpi_graphdims_get_ = pmpi_graphdims_get
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GRAPHDIMS_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GRAPHDIMS_GET( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_graphdims_get_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_graphdims_get")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_graphdims_get_ PMPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_graphdims_get_ pmpi_graphdims_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_graphdims_get_ pmpi_graphdims_get
#else
#define mpi_graphdims_get_ pmpi_graphdims_get_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Graphdims_get
#define MPI_Graphdims_get PMPI_Graphdims_get 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_graphdims_get_ MPI_GRAPHDIMS_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_graphdims_get_ mpi_graphdims_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_graphdims_get_ mpi_graphdims_get
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_graphdims_get_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Graphdims_get( (MPI_Comm)(*v1), v2, v3 );
}
