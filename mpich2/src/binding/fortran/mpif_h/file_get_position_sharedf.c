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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_GET_POSITION_SHARED = PMPI_FILE_GET_POSITION_SHARED
#pragma weak mpi_file_get_position_shared__ = PMPI_FILE_GET_POSITION_SHARED
#pragma weak mpi_file_get_position_shared_ = PMPI_FILE_GET_POSITION_SHARED
#pragma weak mpi_file_get_position_shared = PMPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared__
#pragma weak mpi_file_get_position_shared__ = pmpi_file_get_position_shared__
#pragma weak mpi_file_get_position_shared_ = pmpi_file_get_position_shared__
#pragma weak mpi_file_get_position_shared = pmpi_file_get_position_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared_
#pragma weak mpi_file_get_position_shared__ = pmpi_file_get_position_shared_
#pragma weak mpi_file_get_position_shared_ = pmpi_file_get_position_shared_
#pragma weak mpi_file_get_position_shared = pmpi_file_get_position_shared_
#else
#pragma weak MPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared
#pragma weak mpi_file_get_position_shared__ = pmpi_file_get_position_shared
#pragma weak mpi_file_get_position_shared_ = pmpi_file_get_position_shared
#pragma weak mpi_file_get_position_shared = pmpi_file_get_position_shared
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak MPI_FILE_GET_POSITION_SHARED = PMPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_position_shared__ = pmpi_file_get_position_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_position_shared = pmpi_file_get_position_shared
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_position_shared_ = pmpi_file_get_position_shared_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_GET_POSITION_SHARED  MPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_get_position_shared__  mpi_file_get_position_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_get_position_shared  mpi_file_get_position_shared
#else
#pragma _HP_SECONDARY_DEF pmpi_file_get_position_shared_  mpi_file_get_position_shared_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_GET_POSITION_SHARED as PMPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_get_position_shared__ as pmpi_file_get_position_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_get_position_shared as pmpi_file_get_position_shared
#else
#pragma _CRI duplicate mpi_file_get_position_shared_ as pmpi_file_get_position_shared_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_get_position_shared__ = MPI_FILE_GET_POSITION_SHARED
#pragma weak mpi_file_get_position_shared_ = MPI_FILE_GET_POSITION_SHARED
#pragma weak mpi_file_get_position_shared = MPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_GET_POSITION_SHARED = mpi_file_get_position_shared__
#pragma weak mpi_file_get_position_shared_ = mpi_file_get_position_shared__
#pragma weak mpi_file_get_position_shared = mpi_file_get_position_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_GET_POSITION_SHARED = mpi_file_get_position_shared_
#pragma weak mpi_file_get_position_shared__ = mpi_file_get_position_shared_
#pragma weak mpi_file_get_position_shared = mpi_file_get_position_shared_
#else
#pragma weak MPI_FILE_GET_POSITION_SHARED = mpi_file_get_position_shared
#pragma weak mpi_file_get_position_shared__ = mpi_file_get_position_shared
#pragma weak mpi_file_get_position_shared_ = mpi_file_get_position_shared
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_GET_POSITION_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_get_position_shared__ = PMPI_FILE_GET_POSITION_SHARED
#pragma weak pmpi_file_get_position_shared_ = PMPI_FILE_GET_POSITION_SHARED
#pragma weak pmpi_file_get_position_shared = PMPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared__
#pragma weak pmpi_file_get_position_shared_ = pmpi_file_get_position_shared__
#pragma weak pmpi_file_get_position_shared = pmpi_file_get_position_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared_
#pragma weak pmpi_file_get_position_shared__ = pmpi_file_get_position_shared_
#pragma weak pmpi_file_get_position_shared = pmpi_file_get_position_shared_
#else
#pragma weak PMPI_FILE_GET_POSITION_SHARED = pmpi_file_get_position_shared
#pragma weak pmpi_file_get_position_shared__ = pmpi_file_get_position_shared
#pragma weak pmpi_file_get_position_shared_ = pmpi_file_get_position_shared
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_GET_POSITION_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_GET_POSITION_SHARED( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared__( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_position_shared_( MPI_Fint *, MPI_Offset*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_get_position_shared")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_get_position_shared_ PMPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_get_position_shared_ pmpi_file_get_position_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_get_position_shared_ pmpi_file_get_position_shared
#else
#define mpi_file_get_position_shared_ pmpi_file_get_position_shared_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_get_position_shared
#define MPI_File_get_position_shared PMPI_File_get_position_shared 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_get_position_shared_ MPI_FILE_GET_POSITION_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_get_position_shared_ mpi_file_get_position_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_get_position_shared_ mpi_file_get_position_shared
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_get_position_shared_ ( MPI_Fint *v1, MPI_Offset*v2, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    *ierr = MPI_File_get_position_shared( MPI_File_f2c(*v1), v2 );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
