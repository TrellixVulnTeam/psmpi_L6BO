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
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_CART_COORDS = PMPI_CART_COORDS
#pragma weak mpi_cart_coords__ = PMPI_CART_COORDS
#pragma weak mpi_cart_coords_ = PMPI_CART_COORDS
#pragma weak mpi_cart_coords = PMPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_COORDS = pmpi_cart_coords__
#pragma weak mpi_cart_coords__ = pmpi_cart_coords__
#pragma weak mpi_cart_coords_ = pmpi_cart_coords__
#pragma weak mpi_cart_coords = pmpi_cart_coords__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_COORDS = pmpi_cart_coords_
#pragma weak mpi_cart_coords__ = pmpi_cart_coords_
#pragma weak mpi_cart_coords_ = pmpi_cart_coords_
#pragma weak mpi_cart_coords = pmpi_cart_coords_
#else
#pragma weak MPI_CART_COORDS = pmpi_cart_coords
#pragma weak mpi_cart_coords__ = pmpi_cart_coords
#pragma weak mpi_cart_coords_ = pmpi_cart_coords
#pragma weak mpi_cart_coords = pmpi_cart_coords
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#pragma weak MPI_CART_COORDS = PMPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_cart_coords__ = pmpi_cart_coords__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_cart_coords = pmpi_cart_coords
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#pragma weak mpi_cart_coords_ = pmpi_cart_coords_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_CART_COORDS  MPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_coords__  mpi_cart_coords__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_coords  mpi_cart_coords
#else
#pragma _HP_SECONDARY_DEF pmpi_cart_coords_  mpi_cart_coords_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_CART_COORDS as PMPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_cart_coords__ as pmpi_cart_coords__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_cart_coords as pmpi_cart_coords
#else
#pragma _CRI duplicate mpi_cart_coords_ as pmpi_cart_coords_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_cart_coords__ = MPI_CART_COORDS
#pragma weak mpi_cart_coords_ = MPI_CART_COORDS
#pragma weak mpi_cart_coords = MPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_COORDS = mpi_cart_coords__
#pragma weak mpi_cart_coords_ = mpi_cart_coords__
#pragma weak mpi_cart_coords = mpi_cart_coords__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_COORDS = mpi_cart_coords_
#pragma weak mpi_cart_coords__ = mpi_cart_coords_
#pragma weak mpi_cart_coords = mpi_cart_coords_
#else
#pragma weak MPI_CART_COORDS = mpi_cart_coords
#pragma weak mpi_cart_coords__ = mpi_cart_coords
#pragma weak mpi_cart_coords_ = mpi_cart_coords
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_CART_COORDS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_cart_coords__ = PMPI_CART_COORDS
#pragma weak pmpi_cart_coords_ = PMPI_CART_COORDS
#pragma weak pmpi_cart_coords = PMPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_CART_COORDS = pmpi_cart_coords__
#pragma weak pmpi_cart_coords_ = pmpi_cart_coords__
#pragma weak pmpi_cart_coords = pmpi_cart_coords__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_CART_COORDS = pmpi_cart_coords_
#pragma weak pmpi_cart_coords__ = pmpi_cart_coords_
#pragma weak pmpi_cart_coords = pmpi_cart_coords_
#else
#pragma weak PMPI_CART_COORDS = pmpi_cart_coords
#pragma weak pmpi_cart_coords__ = pmpi_cart_coords
#pragma weak pmpi_cart_coords_ = pmpi_cart_coords
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_COORDS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_COORDS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_coords_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_coords")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_cart_coords_ PMPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_coords_ pmpi_cart_coords__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_coords_ pmpi_cart_coords
#else
#define mpi_cart_coords_ pmpi_cart_coords_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Cart_coords
#define MPI_Cart_coords PMPI_Cart_coords 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_cart_coords_ MPI_CART_COORDS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_coords_ mpi_cart_coords__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_coords_ mpi_cart_coords
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_cart_coords_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint v4[], MPI_Fint *ierr ){
    *ierr = MPI_Cart_coords( (MPI_Comm)(*v1), (int)*v2, (int)*v3, v4 );
}
