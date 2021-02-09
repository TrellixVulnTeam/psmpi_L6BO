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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_ATTACH = PMPI_WIN_ATTACH
#pragma weak mpi_win_attach__ = PMPI_WIN_ATTACH
#pragma weak mpi_win_attach_ = PMPI_WIN_ATTACH
#pragma weak mpi_win_attach = PMPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_ATTACH = pmpi_win_attach__
#pragma weak mpi_win_attach__ = pmpi_win_attach__
#pragma weak mpi_win_attach_ = pmpi_win_attach__
#pragma weak mpi_win_attach = pmpi_win_attach__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_ATTACH = pmpi_win_attach_
#pragma weak mpi_win_attach__ = pmpi_win_attach_
#pragma weak mpi_win_attach_ = pmpi_win_attach_
#pragma weak mpi_win_attach = pmpi_win_attach_
#else
#pragma weak MPI_WIN_ATTACH = pmpi_win_attach
#pragma weak mpi_win_attach__ = pmpi_win_attach
#pragma weak mpi_win_attach_ = pmpi_win_attach
#pragma weak mpi_win_attach = pmpi_win_attach
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#pragma weak MPI_WIN_ATTACH = PMPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_win_attach__ = pmpi_win_attach__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_win_attach = pmpi_win_attach
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_win_attach_ = pmpi_win_attach_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_ATTACH  MPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_attach__  mpi_win_attach__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_attach  mpi_win_attach
#else
#pragma _HP_SECONDARY_DEF pmpi_win_attach_  mpi_win_attach_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_ATTACH as PMPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_attach__ as pmpi_win_attach__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_attach as pmpi_win_attach
#else
#pragma _CRI duplicate mpi_win_attach_ as pmpi_win_attach_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_attach__ = MPI_WIN_ATTACH
#pragma weak mpi_win_attach_ = MPI_WIN_ATTACH
#pragma weak mpi_win_attach = MPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_ATTACH = mpi_win_attach__
#pragma weak mpi_win_attach_ = mpi_win_attach__
#pragma weak mpi_win_attach = mpi_win_attach__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_ATTACH = mpi_win_attach_
#pragma weak mpi_win_attach__ = mpi_win_attach_
#pragma weak mpi_win_attach = mpi_win_attach_
#else
#pragma weak MPI_WIN_ATTACH = mpi_win_attach
#pragma weak mpi_win_attach__ = mpi_win_attach
#pragma weak mpi_win_attach_ = mpi_win_attach
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_ATTACH")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_attach__ = PMPI_WIN_ATTACH
#pragma weak pmpi_win_attach_ = PMPI_WIN_ATTACH
#pragma weak pmpi_win_attach = PMPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_ATTACH = pmpi_win_attach__
#pragma weak pmpi_win_attach_ = pmpi_win_attach__
#pragma weak pmpi_win_attach = pmpi_win_attach__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_ATTACH = pmpi_win_attach_
#pragma weak pmpi_win_attach__ = pmpi_win_attach_
#pragma weak pmpi_win_attach = pmpi_win_attach_
#else
#pragma weak PMPI_WIN_ATTACH = pmpi_win_attach
#pragma weak pmpi_win_attach__ = pmpi_win_attach
#pragma weak pmpi_win_attach_ = pmpi_win_attach
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_ATTACH")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_ATTACH( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach__( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_attach_( MPI_Fint *, void*, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_attach")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_win_attach_ PMPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_attach_ pmpi_win_attach__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_attach_ pmpi_win_attach
#else
#define mpi_win_attach_ pmpi_win_attach_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_attach
#define MPI_Win_attach PMPI_Win_attach 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_win_attach_ MPI_WIN_ATTACH
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_attach_ mpi_win_attach__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_attach_ mpi_win_attach
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_attach_ ( MPI_Fint *v1, void*v2, MPI_Aint * v3, MPI_Fint *ierr ){
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_Win_attach( (MPI_Win)*v1, v2, *v3 );
}
