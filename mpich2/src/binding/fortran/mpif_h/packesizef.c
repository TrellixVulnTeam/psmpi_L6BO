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
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_PACK_EXTERNAL_SIZE = PMPI_PACK_EXTERNAL_SIZE
#pragma weak mpi_pack_external_size__ = PMPI_PACK_EXTERNAL_SIZE
#pragma weak mpi_pack_external_size_ = PMPI_PACK_EXTERNAL_SIZE
#pragma weak mpi_pack_external_size = PMPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size__
#pragma weak mpi_pack_external_size__ = pmpi_pack_external_size__
#pragma weak mpi_pack_external_size_ = pmpi_pack_external_size__
#pragma weak mpi_pack_external_size = pmpi_pack_external_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size_
#pragma weak mpi_pack_external_size__ = pmpi_pack_external_size_
#pragma weak mpi_pack_external_size_ = pmpi_pack_external_size_
#pragma weak mpi_pack_external_size = pmpi_pack_external_size_
#else
#pragma weak MPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size
#pragma weak mpi_pack_external_size__ = pmpi_pack_external_size
#pragma weak mpi_pack_external_size_ = pmpi_pack_external_size
#pragma weak mpi_pack_external_size = pmpi_pack_external_size
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_PACK_EXTERNAL_SIZE = PMPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_pack_external_size__ = pmpi_pack_external_size__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_pack_external_size = pmpi_pack_external_size
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_pack_external_size_ = pmpi_pack_external_size_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_PACK_EXTERNAL_SIZE  MPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_pack_external_size__  mpi_pack_external_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_pack_external_size  mpi_pack_external_size
#else
#pragma _HP_SECONDARY_DEF pmpi_pack_external_size_  mpi_pack_external_size_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_PACK_EXTERNAL_SIZE as PMPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_pack_external_size__ as pmpi_pack_external_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_pack_external_size as pmpi_pack_external_size
#else
#pragma _CRI duplicate mpi_pack_external_size_ as pmpi_pack_external_size_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_pack_external_size__ = MPI_PACK_EXTERNAL_SIZE
#pragma weak mpi_pack_external_size_ = MPI_PACK_EXTERNAL_SIZE
#pragma weak mpi_pack_external_size = MPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PACK_EXTERNAL_SIZE = mpi_pack_external_size__
#pragma weak mpi_pack_external_size_ = mpi_pack_external_size__
#pragma weak mpi_pack_external_size = mpi_pack_external_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PACK_EXTERNAL_SIZE = mpi_pack_external_size_
#pragma weak mpi_pack_external_size__ = mpi_pack_external_size_
#pragma weak mpi_pack_external_size = mpi_pack_external_size_
#else
#pragma weak MPI_PACK_EXTERNAL_SIZE = mpi_pack_external_size
#pragma weak mpi_pack_external_size__ = mpi_pack_external_size
#pragma weak mpi_pack_external_size_ = mpi_pack_external_size
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_PACK_EXTERNAL_SIZE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_pack_external_size__ = PMPI_PACK_EXTERNAL_SIZE
#pragma weak pmpi_pack_external_size_ = PMPI_PACK_EXTERNAL_SIZE
#pragma weak pmpi_pack_external_size = PMPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size__
#pragma weak pmpi_pack_external_size_ = pmpi_pack_external_size__
#pragma weak pmpi_pack_external_size = pmpi_pack_external_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size_
#pragma weak pmpi_pack_external_size__ = pmpi_pack_external_size_
#pragma weak pmpi_pack_external_size = pmpi_pack_external_size_
#else
#pragma weak PMPI_PACK_EXTERNAL_SIZE = pmpi_pack_external_size
#pragma weak pmpi_pack_external_size__ = pmpi_pack_external_size
#pragma weak pmpi_pack_external_size_ = pmpi_pack_external_size
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_PACK_EXTERNAL_SIZE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_PACK_EXTERNAL_SIZE( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pack_external_size_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_pack_external_size")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_pack_external_size_ PMPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_pack_external_size_ pmpi_pack_external_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_pack_external_size_ pmpi_pack_external_size
#else
#define mpi_pack_external_size_ pmpi_pack_external_size_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Pack_external_size
#define MPI_Pack_external_size PMPI_Pack_external_size 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_pack_external_size_ MPI_PACK_EXTERNAL_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_pack_external_size_ mpi_pack_external_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_pack_external_size_ mpi_pack_external_size
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_pack_external_size_ ( char *v1 FORT_MIXED_LEN(d1), MPI_Fint *v2, MPI_Fint *v3, MPI_Aint * v4, MPI_Fint *ierr FORT_END_LEN(d1) ){
    char *p1;

    {char *p = v1 + d1 - 1;
     int  li;
        while (*p == ' ' && p > v1) p--;
        p++;
        p1 = (char *)MPL_malloc( p-v1 + 1, MPL_MEM_OTHER );
        for (li=0; li<(p-v1); li++) { p1[li] = v1[li]; }
        p1[li] = 0; 
    }
    *ierr = MPI_Pack_external_size( p1, (int)*v2, (MPI_Datatype)(*v3), v4 );
    MPL_free( p1 );
}
