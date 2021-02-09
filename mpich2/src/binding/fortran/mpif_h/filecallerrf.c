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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_CALL_ERRHANDLER = PMPI_FILE_CALL_ERRHANDLER
#pragma weak mpi_file_call_errhandler__ = PMPI_FILE_CALL_ERRHANDLER
#pragma weak mpi_file_call_errhandler_ = PMPI_FILE_CALL_ERRHANDLER
#pragma weak mpi_file_call_errhandler = PMPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler__
#pragma weak mpi_file_call_errhandler__ = pmpi_file_call_errhandler__
#pragma weak mpi_file_call_errhandler_ = pmpi_file_call_errhandler__
#pragma weak mpi_file_call_errhandler = pmpi_file_call_errhandler__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler_
#pragma weak mpi_file_call_errhandler__ = pmpi_file_call_errhandler_
#pragma weak mpi_file_call_errhandler_ = pmpi_file_call_errhandler_
#pragma weak mpi_file_call_errhandler = pmpi_file_call_errhandler_
#else
#pragma weak MPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler
#pragma weak mpi_file_call_errhandler__ = pmpi_file_call_errhandler
#pragma weak mpi_file_call_errhandler_ = pmpi_file_call_errhandler
#pragma weak mpi_file_call_errhandler = pmpi_file_call_errhandler
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_CALL_ERRHANDLER = PMPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_call_errhandler__ = pmpi_file_call_errhandler__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_call_errhandler = pmpi_file_call_errhandler
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_call_errhandler_ = pmpi_file_call_errhandler_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_CALL_ERRHANDLER  MPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_call_errhandler__  mpi_file_call_errhandler__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_call_errhandler  mpi_file_call_errhandler
#else
#pragma _HP_SECONDARY_DEF pmpi_file_call_errhandler_  mpi_file_call_errhandler_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_CALL_ERRHANDLER as PMPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_call_errhandler__ as pmpi_file_call_errhandler__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_call_errhandler as pmpi_file_call_errhandler
#else
#pragma _CRI duplicate mpi_file_call_errhandler_ as pmpi_file_call_errhandler_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_call_errhandler__ = MPI_FILE_CALL_ERRHANDLER
#pragma weak mpi_file_call_errhandler_ = MPI_FILE_CALL_ERRHANDLER
#pragma weak mpi_file_call_errhandler = MPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_CALL_ERRHANDLER = mpi_file_call_errhandler__
#pragma weak mpi_file_call_errhandler_ = mpi_file_call_errhandler__
#pragma weak mpi_file_call_errhandler = mpi_file_call_errhandler__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_CALL_ERRHANDLER = mpi_file_call_errhandler_
#pragma weak mpi_file_call_errhandler__ = mpi_file_call_errhandler_
#pragma weak mpi_file_call_errhandler = mpi_file_call_errhandler_
#else
#pragma weak MPI_FILE_CALL_ERRHANDLER = mpi_file_call_errhandler
#pragma weak mpi_file_call_errhandler__ = mpi_file_call_errhandler
#pragma weak mpi_file_call_errhandler_ = mpi_file_call_errhandler
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CALL_ERRHANDLER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_call_errhandler__ = PMPI_FILE_CALL_ERRHANDLER
#pragma weak pmpi_file_call_errhandler_ = PMPI_FILE_CALL_ERRHANDLER
#pragma weak pmpi_file_call_errhandler = PMPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler__
#pragma weak pmpi_file_call_errhandler_ = pmpi_file_call_errhandler__
#pragma weak pmpi_file_call_errhandler = pmpi_file_call_errhandler__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler_
#pragma weak pmpi_file_call_errhandler__ = pmpi_file_call_errhandler_
#pragma weak pmpi_file_call_errhandler = pmpi_file_call_errhandler_
#else
#pragma weak PMPI_FILE_CALL_ERRHANDLER = pmpi_file_call_errhandler
#pragma weak pmpi_file_call_errhandler__ = pmpi_file_call_errhandler
#pragma weak pmpi_file_call_errhandler_ = pmpi_file_call_errhandler
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CALL_ERRHANDLER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CALL_ERRHANDLER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_call_errhandler_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_call_errhandler")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_call_errhandler_ PMPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_call_errhandler_ pmpi_file_call_errhandler__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_call_errhandler_ pmpi_file_call_errhandler
#else
#define mpi_file_call_errhandler_ pmpi_file_call_errhandler_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_call_errhandler
#define MPI_File_call_errhandler PMPI_File_call_errhandler 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_call_errhandler_ MPI_FILE_CALL_ERRHANDLER
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_call_errhandler_ mpi_file_call_errhandler__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_call_errhandler_ mpi_file_call_errhandler
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_call_errhandler_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_File_call_errhandler( MPI_File_f2c(*v1), (int)*v2 );
}
