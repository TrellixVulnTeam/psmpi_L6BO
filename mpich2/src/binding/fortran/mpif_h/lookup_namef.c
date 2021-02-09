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
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_LOOKUP_NAME = PMPI_LOOKUP_NAME
#pragma weak mpi_lookup_name__ = PMPI_LOOKUP_NAME
#pragma weak mpi_lookup_name_ = PMPI_LOOKUP_NAME
#pragma weak mpi_lookup_name = PMPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_LOOKUP_NAME = pmpi_lookup_name__
#pragma weak mpi_lookup_name__ = pmpi_lookup_name__
#pragma weak mpi_lookup_name_ = pmpi_lookup_name__
#pragma weak mpi_lookup_name = pmpi_lookup_name__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_LOOKUP_NAME = pmpi_lookup_name_
#pragma weak mpi_lookup_name__ = pmpi_lookup_name_
#pragma weak mpi_lookup_name_ = pmpi_lookup_name_
#pragma weak mpi_lookup_name = pmpi_lookup_name_
#else
#pragma weak MPI_LOOKUP_NAME = pmpi_lookup_name
#pragma weak mpi_lookup_name__ = pmpi_lookup_name
#pragma weak mpi_lookup_name_ = pmpi_lookup_name
#pragma weak mpi_lookup_name = pmpi_lookup_name
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak MPI_LOOKUP_NAME = PMPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_lookup_name__ = pmpi_lookup_name__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_lookup_name = pmpi_lookup_name
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_lookup_name_ = pmpi_lookup_name_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_LOOKUP_NAME  MPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_lookup_name__  mpi_lookup_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_lookup_name  mpi_lookup_name
#else
#pragma _HP_SECONDARY_DEF pmpi_lookup_name_  mpi_lookup_name_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_LOOKUP_NAME as PMPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_lookup_name__ as pmpi_lookup_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_lookup_name as pmpi_lookup_name
#else
#pragma _CRI duplicate mpi_lookup_name_ as pmpi_lookup_name_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_lookup_name__ = MPI_LOOKUP_NAME
#pragma weak mpi_lookup_name_ = MPI_LOOKUP_NAME
#pragma weak mpi_lookup_name = MPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_LOOKUP_NAME = mpi_lookup_name__
#pragma weak mpi_lookup_name_ = mpi_lookup_name__
#pragma weak mpi_lookup_name = mpi_lookup_name__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_LOOKUP_NAME = mpi_lookup_name_
#pragma weak mpi_lookup_name__ = mpi_lookup_name_
#pragma weak mpi_lookup_name = mpi_lookup_name_
#else
#pragma weak MPI_LOOKUP_NAME = mpi_lookup_name
#pragma weak mpi_lookup_name__ = mpi_lookup_name
#pragma weak mpi_lookup_name_ = mpi_lookup_name
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_LOOKUP_NAME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL mpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_lookup_name__ = PMPI_LOOKUP_NAME
#pragma weak pmpi_lookup_name_ = PMPI_LOOKUP_NAME
#pragma weak pmpi_lookup_name = PMPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_LOOKUP_NAME = pmpi_lookup_name__
#pragma weak pmpi_lookup_name_ = pmpi_lookup_name__
#pragma weak pmpi_lookup_name = pmpi_lookup_name__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_LOOKUP_NAME = pmpi_lookup_name_
#pragma weak pmpi_lookup_name__ = pmpi_lookup_name_
#pragma weak pmpi_lookup_name = pmpi_lookup_name_
#else
#pragma weak PMPI_LOOKUP_NAME = pmpi_lookup_name
#pragma weak pmpi_lookup_name__ = pmpi_lookup_name
#pragma weak pmpi_lookup_name_ = pmpi_lookup_name
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_LOOKUP_NAME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_LOOKUP_NAME( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_lookup_name_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_lookup_name")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_lookup_name_ PMPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_lookup_name_ pmpi_lookup_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_lookup_name_ pmpi_lookup_name
#else
#define mpi_lookup_name_ pmpi_lookup_name_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Lookup_name
#define MPI_Lookup_name PMPI_Lookup_name 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_lookup_name_ MPI_LOOKUP_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_lookup_name_ mpi_lookup_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_lookup_name_ mpi_lookup_name
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_lookup_name_ ( char *v1 FORT_MIXED_LEN(d1), MPI_Fint *v2, char *v3 FORT_MIXED_LEN(d3), MPI_Fint *ierr FORT_END_LEN(d1) FORT_END_LEN(d3) ){
    char *p1;
    char *p3;

    {char *p = v1 + d1 - 1;
     int  li;
        while (*p == ' ' && p > v1) p--;
        p++;
        p1 = (char *)MPL_malloc( p-v1 + 1, MPL_MEM_OTHER );
        for (li=0; li<(p-v1); li++) { p1[li] = v1[li]; }
        p1[li] = 0; 
    }
    p3 = (char *)MPL_malloc( d3 + 1, MPL_MEM_OTHER );
    *ierr = MPI_Lookup_name( p1, (MPI_Info)(*v2), p3 );

    if (!*ierr) {char *p = v3, *pc=p3;
        while (*pc) {*p++ = *pc++;}
        while ((p-v3) < d3) { *p++ = ' '; }
    }
    MPL_free( p1 );
    MPL_free( p3 );
}
