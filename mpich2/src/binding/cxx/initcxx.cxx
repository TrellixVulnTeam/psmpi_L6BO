/* -*- Mode: C++; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface -nosep
 * DO NOT EDIT
 */
/* style: c++ header */

#include "mpi.h"
#include <stdarg.h>
#include "mpichconf.h"

// #define MPIX_TRACE_MEMORY
#ifdef MPIX_TRACE_MEMORY
int _mpi_lineno = __LINE__;
// We need stdlib.h for size_t.  But that can cause problems if the
// header isn't C++ clean.  Instead, we just include a definition
// for size_t.  If this is not the correct size, then edit this line
// (Note that this is needed only when memory tracing is enabled)
typedef unsigned int size_t;
extern "C" void *MPIU_trmalloc( unsigned int, int, const char [] );
extern "C" void MPIU_trfree( void *, int, const char [] );
extern "C" void MPIU_trdump( void *, int );
void *operator new(size_t size) {
    void *p = MPIU_trmalloc( (unsigned int) size, _mpi_lineno, __FILE__ );
    return p;}
void operator delete(void *p) {
    MPIU_trfree( p, _mpi_lineno, __FILE__ );}
void *operator new[]( size_t size) {
    void *p = MPIU_trmalloc( (unsigned int) size, _mpi_lineno, __FILE__ );
    return p;}
void operator delete[](void *p) {
    MPIU_trfree( p, _mpi_lineno, __FILE__ );}
#define MPIX_TRSummary() MPIU_trdump( 0, -1 )
#define MPIX_SetLineno _mpi_lineno = __LINE__ + 1
#else
#define MPIX_TRSummary()
#define MPIX_SetLineno
#endif
namespace MPI {
Datatype CHAR(MPI_CHAR);
Datatype UNSIGNED_CHAR(MPI_UNSIGNED_CHAR);
Datatype BYTE(MPI_BYTE);
Datatype SHORT(MPI_SHORT);
Datatype UNSIGNED_SHORT(MPI_UNSIGNED_SHORT);
Datatype INT(MPI_INT);
Datatype UNSIGNED(MPI_UNSIGNED);
Datatype LONG(MPI_LONG);
Datatype UNSIGNED_LONG(MPI_UNSIGNED_LONG);
Datatype FLOAT(MPI_FLOAT);
Datatype DOUBLE(MPI_DOUBLE);
Datatype LONG_DOUBLE(MPI_LONG_DOUBLE);
Datatype LONG_LONG_INT(MPI_LONG_LONG_INT);
Datatype LONG_LONG(MPI_LONG_LONG);
Datatype PACKED(MPI_PACKED);
Datatype LB(MPI_LB);
Datatype UB(MPI_UB);
Datatype FLOAT_INT(MPI_FLOAT_INT);
Datatype DOUBLE_INT(MPI_DOUBLE_INT);
Datatype LONG_INT(MPI_LONG_INT);
Datatype SHORT_INT(MPI_SHORT_INT);
Datatype LONG_DOUBLE_INT(MPI_LONG_DOUBLE_INT);
Datatype REAL4(MPI_REAL4);
Datatype REAL8(MPI_REAL8);
Datatype REAL16(MPI_REAL16);
Datatype COMPLEX8(MPI_COMPLEX8);
Datatype COMPLEX16(MPI_COMPLEX16);
Datatype COMPLEX32(MPI_COMPLEX32);
Datatype INTEGER1(MPI_INTEGER1);
Datatype INTEGER2(MPI_INTEGER2);
Datatype INTEGER4(MPI_INTEGER4);
Datatype INTEGER8(MPI_INTEGER8);
Datatype INTEGER16(MPI_INTEGER16);
Datatype WCHAR(MPI_WCHAR);
Datatype SIGNED_CHAR(MPI_SIGNED_CHAR);
Datatype UNSIGNED_LONG_LONG(MPI_UNSIGNED_LONG_LONG);
Datatype TWOINT(MPI_2INT);
Datatype BOOL(MPIR_CXX_BOOL);
Datatype COMPLEX(MPIR_CXX_COMPLEX);
Datatype DOUBLE_COMPLEX(MPIR_CXX_DOUBLE_COMPLEX);
Datatype LONG_DOUBLE_COMPLEX(MPIR_CXX_LONG_DOUBLE_COMPLEX);
Datatype DATATYPE_NULL;

#ifdef HAVE_FORTRAN_BINDING
Datatype INTEGER(MPI_INTEGER);
Datatype REAL(MPI_REAL);
Datatype DOUBLE_PRECISION(MPI_DOUBLE_PRECISION);
Datatype F_COMPLEX(MPI_COMPLEX);
Datatype F_DOUBLE_COMPLEX(MPI_DOUBLE_COMPLEX);
Datatype LOGICAL(MPI_LOGICAL);
Datatype CHARACTER(MPI_CHARACTER);
Datatype TWOREAL(MPI_2REAL);
Datatype TWODOUBLE_PRECISION(MPI_2DOUBLE_PRECISION);
Datatype TWOINTEGER(MPI_2INTEGER);
#endif
const Op MAX(MPI_MAX);
const Op MIN(MPI_MIN);
const Op SUM(MPI_SUM);
const Op PROD(MPI_PROD);
const Op LAND(MPI_LAND);
const Op BAND(MPI_BAND);
const Op LOR(MPI_LOR);
const Op BOR(MPI_BOR);
const Op LXOR(MPI_LXOR);
const Op BXOR(MPI_BXOR);
const Op MINLOC(MPI_MINLOC);
const Op MAXLOC(MPI_MAXLOC);
const Op REPLACE(MPI_REPLACE);
const Op OP_NULL;
Intracomm COMM_WORLD(MPI_COMM_WORLD);
Intracomm COMM_SELF(MPI_COMM_SELF);
const Group GROUP_EMPTY(MPI_GROUP_EMPTY);
const Nullcomm COMM_NULL;
const Group GROUP_NULL;
const Request REQUEST_NULL;
const Errhandler ERRHANDLER_NULL;
const Errhandler ERRORS_RETURN(MPI_ERRORS_RETURN);
const Errhandler ERRORS_ARE_FATAL(MPI_ERRORS_ARE_FATAL);
const Errhandler ERRORS_THROW_EXCEPTIONS(MPIR_ERRORS_THROW_EXCEPTIONS);
const Info INFO_NULL;
const Win WIN_NULL;
 File FILE_NULL;
const int BSEND_OVERHEAD= MPI_BSEND_OVERHEAD;
const int KEYVAL_INVALID= MPI_KEYVAL_INVALID;
const int CART= MPI_CART;
const int GRAPH= MPI_GRAPH;
const int IDENT= MPI_IDENT;
const int SIMILAR= MPI_SIMILAR;
const int CONGRUENT= MPI_CONGRUENT;
const int UNEQUAL= MPI_UNEQUAL;
const int PROC_NULL= MPI_PROC_NULL;
const int ANY_TAG= MPI_ANY_TAG;
const int ANY_SOURCE= MPI_ANY_SOURCE;
const int ROOT= MPI_ROOT;
const int TAG_UB= MPI_TAG_UB;
const int IO= MPI_IO;
const int HOST= MPI_HOST;
const int WTIME_IS_GLOBAL= MPI_WTIME_IS_GLOBAL;
const int UNIVERSE_SIZE= MPI_UNIVERSE_SIZE;
const int LASTUSEDCODE= MPI_LASTUSEDCODE;
const int APPNUM= MPI_APPNUM;
const int MAX_PROCESSOR_NAME= MPI_MAX_PROCESSOR_NAME;
const int MAX_ERROR_STRING= MPI_MAX_ERROR_STRING;
const int MAX_PORT_NAME= MPI_MAX_PORT_NAME;
const int MAX_OBJECT_NAME= MPI_MAX_OBJECT_NAME;
const int MAX_INFO_VAL= MPI_MAX_INFO_VAL;
const int MAX_INFO_KEY= MPI_MAX_INFO_KEY;
const int UNDEFINED= MPI_UNDEFINED;
const int LOCK_EXCLUSIVE= MPI_LOCK_EXCLUSIVE;
const int LOCK_SHARED= MPI_LOCK_SHARED;
const int WIN_BASE= MPI_WIN_BASE;
const int WIN_DISP_UNIT= MPI_WIN_DISP_UNIT;
const int WIN_SIZE= MPI_WIN_SIZE;
const int SUCCESS= MPI_SUCCESS;
const int ERR_BUFFER= MPI_ERR_BUFFER;
const int ERR_COUNT= MPI_ERR_COUNT;
const int ERR_TYPE= MPI_ERR_TYPE;
const int ERR_TAG= MPI_ERR_TAG;
const int ERR_COMM= MPI_ERR_COMM;
const int ERR_RANK= MPI_ERR_RANK;
const int ERR_REQUEST= MPI_ERR_REQUEST;
const int ERR_ROOT= MPI_ERR_ROOT;
const int ERR_GROUP= MPI_ERR_GROUP;
const int ERR_OP= MPI_ERR_OP;
const int ERR_TOPOLOGY= MPI_ERR_TOPOLOGY;
const int ERR_DIMS= MPI_ERR_DIMS;
const int ERR_ARG= MPI_ERR_ARG;
const int ERR_UNKNOWN= MPI_ERR_UNKNOWN;
const int ERR_TRUNCATE= MPI_ERR_TRUNCATE;
const int ERR_OTHER= MPI_ERR_OTHER;
const int ERR_INTERN= MPI_ERR_INTERN;
const int ERR_PENDING= MPI_ERR_PENDING;
const int ERR_IN_STATUS= MPI_ERR_IN_STATUS;
const int ERR_LASTCODE= MPI_ERR_LASTCODE;
const int ERR_FILE= MPI_ERR_FILE;
const int ERR_ACCESS= MPI_ERR_ACCESS;
const int ERR_AMODE= MPI_ERR_AMODE;
const int ERR_BAD_FILE= MPI_ERR_BAD_FILE;
const int ERR_FILE_EXISTS= MPI_ERR_FILE_EXISTS;
const int ERR_FILE_IN_USE= MPI_ERR_FILE_IN_USE;
const int ERR_NO_SPACE= MPI_ERR_NO_SPACE;
const int ERR_NO_SUCH_FILE= MPI_ERR_NO_SUCH_FILE;
const int ERR_IO= MPI_ERR_IO;
const int ERR_READ_ONLY= MPI_ERR_READ_ONLY;
const int ERR_CONVERSION= MPI_ERR_CONVERSION;
const int ERR_DUP_DATAREP= MPI_ERR_DUP_DATAREP;
const int ERR_UNSUPPORTED_DATAREP= MPI_ERR_UNSUPPORTED_DATAREP;
const int ERR_INFO= MPI_ERR_INFO;
const int ERR_INFO_KEY= MPI_ERR_INFO_KEY;
const int ERR_INFO_VALUE= MPI_ERR_INFO_VALUE;
const int ERR_INFO_NOKEY= MPI_ERR_INFO_NOKEY;
const int ERR_NAME= MPI_ERR_NAME;
const int ERR_NO_MEM= MPI_ERR_NO_MEM;
const int ERR_NOT_SAME= MPI_ERR_NOT_SAME;
const int ERR_PORT= MPI_ERR_PORT;
const int ERR_QUOTA= MPI_ERR_QUOTA;
const int ERR_SERVICE= MPI_ERR_SERVICE;
const int ERR_SPAWN= MPI_ERR_SPAWN;
const int ERR_UNSUPPORTED_OPERATION= MPI_ERR_UNSUPPORTED_OPERATION;
const int ERR_WIN= MPI_ERR_WIN;
const int ERR_BASE= MPI_ERR_BASE;
const int ERR_LOCKTYPE= MPI_ERR_LOCKTYPE;
const int ERR_KEYVAL= MPI_ERR_KEYVAL;
const int ERR_RMA_CONFLICT= MPI_ERR_RMA_CONFLICT;
const int ERR_RMA_SYNC= MPI_ERR_RMA_SYNC;
const int ERR_SIZE= MPI_ERR_SIZE;
const int ERR_DISP= MPI_ERR_DISP;
const int ERR_ASSERT= MPI_ERR_ASSERT;
const int TYPECLASS_REAL= MPI_TYPECLASS_REAL;
const int TYPECLASS_INTEGER= MPI_TYPECLASS_INTEGER;
const int TYPECLASS_COMPLEX= MPI_TYPECLASS_COMPLEX;
#if defined(MPI_SEEK_SET) && !defined(MPICH_IGNORE_CXX_SEEK) && !defined(SEEK_SET)
const int SEEK_SET = MPI_SEEK_SET;
const int SEEK_END = MPI_SEEK_END;
const int SEEK_CUR = MPI_SEEK_CUR;
#endif
const int DISTRIBUTE_BLOCK = MPI_DISTRIBUTE_BLOCK;
const int DISTRIBUTE_CYCLIC = MPI_DISTRIBUTE_CYCLIC;
const int DISTRIBUTE_DFLT_DARG = MPI_DISTRIBUTE_DFLT_DARG;
const int DISTRIBUTE_NONE = MPI_DISTRIBUTE_NONE;
const int ORDER_C = MPI_ORDER_C;
const int ORDER_FORTRAN = MPI_ORDER_FORTRAN;
// Include these only if MPI-IO is available
#ifdef MPI_MODE_RDONLY
const int MAX_DATAREP_STRING = MPI_MAX_DATAREP_STRING;
const MPI_Offset DISPLACEMENT_CURRENT = MPI_DISPLACEMENT_CURRENT;
const int MODE_APPEND = MPI_MODE_APPEND;
const int MODE_CREATE = MPI_MODE_CREATE;
const int MODE_DELETE_ON_CLOSE = MPI_MODE_DELETE_ON_CLOSE;
const int MODE_EXCL = MPI_MODE_EXCL;
const int MODE_RDONLY = MPI_MODE_RDONLY;
const int MODE_RDWR = MPI_MODE_RDWR;
const int MODE_SEQUENTIAL = MPI_MODE_SEQUENTIAL;
const int MODE_UNIQUE_OPEN = MPI_MODE_UNIQUE_OPEN;
const int MODE_WRONLY = MPI_MODE_WRONLY;
#endif // IO
const int MODE_NOCHECK = MPI_MODE_NOCHECK;
const int MODE_NOPRECEDE = MPI_MODE_NOPRECEDE;
const int MODE_NOPUT = MPI_MODE_NOPUT;
const int MODE_NOSTORE = MPI_MODE_NOSTORE;
const int MODE_NOSUCCEED = MPI_MODE_NOSUCCEED;
const int COMBINER_CONTIGUOUS = MPI_COMBINER_CONTIGUOUS;
const int COMBINER_DARRAY = MPI_COMBINER_DARRAY;
const int COMBINER_DUP = MPI_COMBINER_DUP;
const int COMBINER_F90_COMPLEX = MPI_COMBINER_F90_COMPLEX;
const int COMBINER_F90_INTEGER = MPI_COMBINER_F90_INTEGER;
const int COMBINER_F90_REAL = MPI_COMBINER_F90_REAL;
const int COMBINER_HINDEXED_INTEGER = MPI_COMBINER_HINDEXED_INTEGER;
const int COMBINER_HINDEXED = MPI_COMBINER_HINDEXED;
const int COMBINER_HVECTOR_INTEGER = MPI_COMBINER_HVECTOR_INTEGER;
const int COMBINER_HVECTOR = MPI_COMBINER_HVECTOR;
const int COMBINER_INDEXED_BLOCK = MPI_COMBINER_INDEXED_BLOCK;
const int COMBINER_INDEXED = MPI_COMBINER_INDEXED;
const int COMBINER_NAMED = MPI_COMBINER_NAMED;
const int COMBINER_RESIZED = MPI_COMBINER_RESIZED;
const int COMBINER_STRUCT_INTEGER = MPI_COMBINER_STRUCT_INTEGER;
const int COMBINER_STRUCT = MPI_COMBINER_STRUCT;
const int COMBINER_SUBARRAY = MPI_COMBINER_SUBARRAY;
const int COMBINER_VECTOR = MPI_COMBINER_VECTOR;
const int THREAD_FUNNELED = MPI_THREAD_FUNNELED;
const int THREAD_MULTIPLE = MPI_THREAD_MULTIPLE;
const int THREAD_SERIALIZED = MPI_THREAD_SERIALIZED;
const int THREAD_SINGLE = MPI_THREAD_SINGLE;
const char ** const ARGV_NULL = 0;
const char *** const ARGVS_NULL = 0;
void * const BOTTOM = MPI_BOTTOM;
void * const IN_PLACE = MPI_IN_PLACE;
void Init( void ){
    MPI_Init( 0, 0 );
}
void Init( int &argc, char **&argv )
{
    MPI_Init( &argc, &argv );
}
int Init_thread( int v1 ){
    int provided;
    MPI_Init_thread( 0, 0, v1, &provided );

    return provided;
}
int Init_thread( int &argc, char **&argv, int req )
{
    int provided;
    MPI_Init_thread( &argc, &argv, req, &provided );
    return provided;
}
void Finalize( void ){
    MPIX_TRSummary();
    MPI_Finalize( );
}
bool Is_initialized(void)
    { 
	int flag;

	MPI_Initialized( &flag );

	return (flag != 0);
    }
void Compute_dims( int nnodes, int ndims, int dims[] )
    {

	MPIX_CALL( MPI_Dims_create( nnodes, ndims, dims ) );

    }
void Attach_buffer( void *buffer, int size )
    {

	MPIX_CALL( MPI_Buffer_attach( buffer, size ) );

    }
int Detach_buffer( void *&buffer )
    {
	int size;

	MPIX_CALL( MPI_Buffer_detach( &buffer, &size ) );

	return size;
    }
void Get_processor_name( char *name, int &resultlen ) 
    {

    MPIX_CALL( MPI_Get_processor_name( name, &resultlen ) );

    }
void Pcontrol( const int v, ... )
    {
	va_list ap;
        va_start(ap,v);

	MPIX_CALL( MPI_Pcontrol( (int)v, ap ) );

    }
int Get_error_class( int errcode ) 
    {
    int errclass;

    MPIX_CALL( MPI_Error_class( errcode, &errclass ) );

    return errclass;
    }
void Get_error_string( int errcode, char *name, int &resultlen ) 
    {

    MPIX_CALL( MPI_Error_string( errcode, name, &resultlen ) );

    }
Aint Get_address( void *ptr )
    {
    MPI_Aint a;

    MPI_Get_address( ptr, &a );

    return (Aint)a;
    }
void *Alloc_mem( Aint size, const Info &info )
    {
        void *result;

        MPIX_CALL( MPI_Alloc_mem( size, (MPI_Info)info, &result ) );

        return result;
    }
void Free_mem( void * base )
    {

     MPIX_CALL( MPI_Free_mem( base ) );

    }

    extern "C" {
typedef void (*mpircallback)(void);
}
extern "C" void MPIR_Op_set_cxx( MPI_Op, void (*)(void) );
extern "C" 
void MPIR_Call_op_fn( void *invec, void *outvec, int len, MPI_Datatype dtype,
		     User_function *uop )
{
    MPI::Datatype cxxdtype = dtype;
    (*uop)( invec, outvec, len, cxxdtype );
}
void Op::Init( User_function *f, bool commute )
    {

	MPIX_CALL( MPI_Op_create( (MPI_User_function *)f, 
				 (int) commute, &the_real_op ) ); 
	MPIR_Op_set_cxx( the_real_op, (mpircallback) MPIR_Call_op_fn );

    }
#include "mpi_attr.h"
#include "mpi_lang.h"
static
int
MPIR_Comm_delete_attr_cxx_proxy(
    MPI_Comm_delete_attr_function* user_function,
    MPI_Comm comm,
    int keyval,
    MPIR_AttrType attrib_type,
    void* attrib,
    void* extra_state
    )
{
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }
    MPI::Comm::Delete_attr_function* f = (MPI::Comm::Delete_attr_function*)user_function;
    
    int ttype;
    MPI_Topo_test( comm, &ttype );
    if (ttype == MPI_UNDEFINED)
    {
        MPI_Comm_test_inter( comm, &ttype );
        if (ttype)
        {
            MPI::Intercomm c = comm;
            return f( c, keyval, value, extra_state );
        }
        else
        {
            MPI::Intracomm c = comm;
            return f( c, keyval, value, extra_state );
        }
    }
    else if (ttype == MPI_CART)
    {
        MPI::Cartcomm c = comm;
        return f( c, keyval, value, extra_state );
    }
    else
    {
        MPI::Graphcomm c = comm;
        return f( c, keyval, value, extra_state );
    }
}

static
int
MPIR_Comm_copy_attr_cxx_proxy(
    MPI_Comm_copy_attr_function* user_function,
    MPI_Comm comm,
    int keyval,
    void* extra_state,
    MPIR_AttrType attrib_type,
    void* attrib,
    void** new_value,
    int* flag
    )
{
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }

    *flag = 0;
    MPI::Comm::Copy_attr_function* f = (MPI::Comm::Copy_attr_function*)user_function;
    
    int ttype;
    MPI_Topo_test( comm, &ttype );
    if (ttype == MPI_UNDEFINED)
    {
        MPI_Comm_test_inter( comm, &ttype );
        if (ttype)
        {
            MPI::Intercomm c = comm;
            return f( c, keyval, extra_state, value, new_value, *(bool*)flag );
        }
        else
        {
            MPI::Intracomm c = comm;
            return f( c, keyval, extra_state, value, new_value, *(bool*)flag );
        }
    }
    else if (ttype == MPI_CART)
    {
        MPI::Cartcomm c = comm;
        return f( c, keyval, extra_state, value, new_value, *(bool*)flag );
    }
    else
    {
        MPI::Graphcomm c = comm;
        return f( c, keyval, extra_state, value, new_value, *(bool*)flag );
    }
}


int Comm::Create_keyval( Copy_attr_function *cf, Delete_attr_function *df, void *extra_state )
{
    int keyval;

    if (cf == MPI::Comm::NULL_COPY_FN) cf = 0;
    if (df == MPI::Comm::NULL_DELETE_FN) df = 0;
    MPIX_CALL( MPI_Comm_create_keyval( (MPI_Comm_copy_attr_function *)cf, 
				       (MPI_Comm_delete_attr_function *)df,
				      &keyval, extra_state ) );
    MPIR_Keyval_set_proxy( keyval, MPIR_Comm_copy_attr_cxx_proxy, MPIR_Comm_delete_attr_cxx_proxy );
    return keyval;
}

static
int
MPIR_Type_delete_attr_cxx_proxy(
    MPI_Type_delete_attr_function* user_function,
    MPI_Datatype datatype,
    int keyval,
    MPIR_AttrType attrib_type,
    void* attrib,
    void* extra_state
    )
{
    MPI::Datatype d = datatype;
    MPI::Datatype::Delete_attr_function* f = (MPI::Datatype::Delete_attr_function*)user_function;
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }
    return f( d, keyval, value, extra_state );
}

static
int
MPIR_Type_copy_attr_cxx_proxy(
    MPI_Type_copy_attr_function* user_function,
    MPI_Datatype datatype,
    int keyval,
    void* extra_state,
    MPIR_AttrType attrib_type,
    void* attrib,
    void** new_value,
    int* flag
    )
{
    *flag = 0;
    MPI::Datatype d = datatype;
    MPI::Datatype::Copy_attr_function* f = (MPI::Datatype::Copy_attr_function*)user_function;
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }
    return f( d, keyval, extra_state, value, new_value, *(bool*)flag );
}

int Datatype::Create_keyval( Copy_attr_function *cf, Delete_attr_function *df, void *extra_state )
{
    int keyval;

    if (cf == MPI::Datatype::NULL_COPY_FN) cf = 0;
    if (df == MPI::Datatype::NULL_DELETE_FN) df = 0;
    MPIX_CALL( MPI_Type_create_keyval( (MPI_Type_copy_attr_function *)cf, 
				       (MPI_Type_delete_attr_function *)df,
				      &keyval, extra_state ) );
    MPIR_Keyval_set_proxy( keyval, MPIR_Type_copy_attr_cxx_proxy, MPIR_Type_delete_attr_cxx_proxy );
    return keyval;
}

static
int
MPIR_Win_delete_attr_cxx_proxy(
    MPI_Win_delete_attr_function* user_function,
    MPI_Win win,
    int keyval,
    MPIR_AttrType attrib_type,
    void* attrib,
    void* extra_state
    )
{
    MPI::Win w = win;
    MPI::Win::Delete_attr_function* f = (MPI::Win::Delete_attr_function*)user_function;
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }
    return f( w, keyval, value, extra_state );
}

static
int
MPIR_Win_copy_attr_cxx_proxy(
    MPI_Win_copy_attr_function* user_function,
    MPI_Win win,
    int keyval,
    void* extra_state,
    MPIR_AttrType attrib_type,
    void* attrib,
    void** new_value,
    int* flag
    )
{
    *flag = 0;
    MPI::Win w = win;
    MPI::Win::Copy_attr_function* f = (MPI::Win::Copy_attr_function*)user_function;
    void *value = NULL;
    /* Make sure that the attribute value is delivered as a pointer */
    if(MPIR_ATTR_KIND(attrib_type) == MPIR_ATTR_KIND(MPIR_ATTR_INT)){
        value = &attrib;
    }
    else{
        value = attrib;
    }
    return f( w, keyval, extra_state, value, new_value, *(bool*)flag );
}

int Win::Create_keyval( Copy_attr_function *cf, Delete_attr_function *df, void *extra_state )
{
    int keyval;

    if (cf == MPI::Win::NULL_COPY_FN) cf = 0;
    if (df == MPI::Win::NULL_DELETE_FN) df = 0;
    MPIX_CALL( MPI_Win_create_keyval( (MPI_Win_copy_attr_function *)cf, 
				       (MPI_Win_delete_attr_function *)df,
				      &keyval, extra_state ) );
    MPIR_Keyval_set_proxy( keyval, MPIR_Win_copy_attr_cxx_proxy, MPIR_Win_delete_attr_cxx_proxy );
    return keyval;
}

// Provide a C routine that can call the C++ error handler, handling
// any calling-sequence change.  
extern "C" void MPIR_Errhandler_set_cxx( MPI_Errhandler, void (*)(void) );
extern "C" 
void MPIR_Call_errhandler_function( int kind, int *handle, int *errcode, 
			      void (*cxxfn)(void) )
{
    // Use horrible casts to get the correct routine signature
    switch (kind) {
    case 0: // comm
	    {
		MPI_Comm *ch = (MPI_Comm *)handle;
		int flag;
		MPI::Comm::Errhandler_function *f = (MPI::Comm::Errhandler_function *)cxxfn;
		// Make an actual Comm (inter or intra-comm)
		MPI_Comm_test_inter( *ch, &flag );
		if (flag) {
		    MPI::Intercomm ic(*ch);
		    (*f)( ic, errcode );
		}
		else {
		    MPI::Intracomm ic(*ch);
		    (*f)( ic, errcode );
		}
	    }
	    break;
#ifdef MPI_MODE_RDONLY
    case 1: // file
	    {
		MPI::File fh = (MPI_File)*(MPI_File*)handle;
		MPI::File::Errhandler_function *f = (MPI::File::Errhandler_function *)cxxfn;
		(*f)( fh, errcode );
	    }
	    break;
#endif // IO
    case 2: // win
	    {
		MPI::Win fh = (MPI_Win)*(MPI_Win*)handle;
		MPI::Win::Errhandler_function *f = (MPI::Win::Errhandler_function *)cxxfn;
		(*f)( fh, errcode );
	    }
	    break;
    }
}
#ifdef MPI_MODE_RDONLY
Errhandler File::Create_errhandler( Errhandler_function *f )
{
    MPI_Errhandler eh;
    MPI::Errhandler e1;
    MPI_File_create_errhandler( (MPI_File_errhandler_function *)f, &eh );
    MPIR_Errhandler_set_cxx( eh, 
			     (mpircallback)MPIR_Call_errhandler_function );
    e1.the_real_errhandler = eh;
    return e1;
}
#endif // IO
Errhandler Comm::Create_errhandler( Errhandler_function *f )
{
    MPI_Errhandler eh;
    MPI::Errhandler e1;
    MPI_Comm_create_errhandler( (MPI_Comm_errhandler_function *)f, &eh );
    MPIR_Errhandler_set_cxx( eh, 
			     (mpircallback)MPIR_Call_errhandler_function );
    e1.the_real_errhandler = eh;
    return e1;
}
Errhandler Win::Create_errhandler( Errhandler_function *f )
{
    MPI_Errhandler eh;
    MPI::Errhandler e1;
    MPI_Win_create_errhandler( (MPI_Win_errhandler_function *)f, &eh );
    MPIR_Errhandler_set_cxx( eh, 
			     (mpircallback)MPIR_Call_errhandler_function );
    e1.the_real_errhandler = eh;
    return e1;
}


// Call_errhandler implementations.  These sadly must contain a bit of logic to
// cover the ERRORS_THROW_EXCEPTIONS case.
void Comm::Call_errhandler( int errorcode ) const
{
    // we must free the Errhandler object returned from Get_errhandler because
    // Get_errhandler adds a reference (the MPI Standard says as though a new
    // object were created)
    Errhandler current = Get_errhandler();
    if (current == ERRORS_THROW_EXCEPTIONS) {
        current.Free();
        throw Exception(errorcode); // throw by value, catch by reference
    }
    else {
        current.Free();
    }
    MPIX_CALL( MPI_Comm_call_errhandler( (MPI_Comm) the_real_comm, errorcode ));
}

void Win::Call_errhandler( int errorcode ) const
{
    // we must free the Errhandler object returned from Get_errhandler because
    // Get_errhandler adds a reference (the MPI Standard says as though a new
    // object were created)
    Errhandler current = Get_errhandler();
    if (current == ERRORS_THROW_EXCEPTIONS) {
        current.Free();
        throw Exception(errorcode); // throw by value, catch by reference
    }
    else {
        current.Free();
    }
    MPIX_CALL( MPI_Win_call_errhandler( (MPI_Win) the_real_win, errorcode ));
}

#ifdef MPI_MODE_RDONLY
void File::Call_errhandler( int errorcode ) const
{
    // we must free the Errhandler object returned from Get_errhandler because
    // Get_errhandler adds a reference (the MPI Standard says as though a new
    // object were created)
    Errhandler current = Get_errhandler();
    if (current == ERRORS_THROW_EXCEPTIONS) {
        current.Free();
        throw Exception(errorcode); // throw by value, catch by reference
    }
    else {
        current.Free();
    }
    MPIX_CALL( MPI_File_call_errhandler( (MPI_File) the_real_file, errorcode ));
}
#endif // IO


#ifdef MPI_MODE_RDONLY

extern "C" {
//
// Rather than use a registered interposer, instead we interpose, taking 
// advantage of the extra_data field, similar to the handling of Grequest.
typedef struct { 
    Datarep_conversion_function *read_fn;
    Datarep_conversion_function *write_fn;
    Datarep_extent_function *extent_fn;
    void *orig_extra_state;
    } MPIR_Datarep_data;
int MPIR_Call_datarep_read_fn( void *userbuf, MPI_Datatype datatype, 
			       int count, 
			       void *filebuf, MPI_Offset position, 
			       void *extra_state )
{
    MPIR_Datarep_data *ldata = (MPIR_Datarep_data *)extra_state;
    Datatype dtype = (Datatype)datatype;
    return (ldata->read_fn)( userbuf, dtype, count, filebuf,
			    position, ldata->orig_extra_state);
}
int MPIR_Call_datarep_write_fn( void *userbuf, MPI_Datatype datatype, 
			       int count, 
			       void *filebuf, MPI_Offset position, 
			       void *extra_state )
{
    MPIR_Datarep_data *ldata = (MPIR_Datarep_data *)extra_state;
    Datatype dtype = (Datatype)datatype;
    return (ldata->write_fn)( userbuf, dtype, count, filebuf,
			     position, ldata->orig_extra_state);
}
int MPIR_Call_datarep_extent_fn( MPI_Datatype datatype, MPI_Aint *extent,
				 void *extra_state ) {
    MPIR_Datarep_data *ldata = (MPIR_Datarep_data *)extra_state;
    Aint myextent;
    int err;
    err =  (ldata->extent_fn)( (Datatype)datatype, myextent, 
			       ldata->orig_extra_state);
    *extent = myextent;
    return err;
}
} /* extern C */
void Register_datarep( const char *datarep, 
		       Datarep_conversion_function *read_fn,
		       Datarep_conversion_function *write_fn,
		       Datarep_extent_function *extent_fn,
		       void *orig_extra_state )
{
    MPIR_Datarep_data *ldata = new(MPIR_Datarep_data);
    ldata->read_fn          = read_fn;
    ldata->write_fn         = write_fn;
    ldata->extent_fn        = extent_fn;
    ldata->orig_extra_state = orig_extra_state;
    MPIX_CALL(MPI_Register_datarep( (char *)datarep, 
				MPIR_Call_datarep_read_fn,
				MPIR_Call_datarep_write_fn, 
				MPIR_Call_datarep_extent_fn, (void *)ldata ));
    /* Because datareps are never freed, the space allocated in this
       routine for ldata will never be freed */
}
#endif

void Datatype::Pack( const void *inbuf, int incount, void *outbuf, 
		     int outsize, int &position, const Comm &comm ) const {

	MPIX_CALL( MPI_Pack( (void *)inbuf, incount, the_real_datatype, outbuf, 
			    outsize, &position, comm.the_real_comm ) );

    }

int Datatype::Pack_size( int count, const Comm &comm ) const {

        int size;
	MPIX_CALL( MPI_Pack_size( count, the_real_datatype, comm.the_real_comm, &size ) );

	return size;
    }

void Datatype::Unpack( const void *inbuf, int insize, void *outbuf,
                       int outcount, int &position, const Comm &comm ) const {

	MPIX_CALL( MPI_Unpack( (void *)inbuf, insize, &position, outbuf, outcount, 
			      the_real_datatype, comm.the_real_comm ) );

    }
double Wtime(void) { return MPI_Wtime(); }
double Wtick(void) { return MPI_Wtick(); }

    Cartcomm Intracomm::Create_cart( int v2, const int * v3, const bool v4[], bool v5 ) const
    {
        Cartcomm v6;
        int *l4 = new int[v2];
        int l5;
        { 
            int i4; 
            for (i4=0;i4<v2;i4++) {
                l4[i4] = v4[i4] == true ? 1 : 0;
            }
        }
         l5 = (v5 == true) ? 1 : 0;

        MPIX_CALL( MPI_Cart_create( (MPI_Comm) the_real_comm, v2, (int *)v3, l4, l5, &(v6.the_real_comm) ));

            delete[] l4;
        return v6;
    }

    Graphcomm Intracomm::Create_graph( int v2, const int * v3, const int * v4, bool v5 ) const
    {
        Graphcomm v6;
        int l5;
         l5 = (v5 == true) ? 1 : 0;

        MPIX_CALL( MPI_Graph_create( (MPI_Comm) the_real_comm, v2, (int *)v3, (int *)v4, l5, &(v6.the_real_comm) ));

        return v6;
    }

    Intracomm Intercomm::Merge( bool v2 ) const
    {
        Intracomm v3;
        int l2;
         l2 = (v2 == true) ? 1 : 0;

        MPIX_CALL( MPI_Intercomm_merge( (MPI_Comm) the_real_comm, l2, &(v3.the_real_comm) ));

        return v3;
    }

bool Is_finalized( void )
    {
    int flag;
    MPIX_CALL( MPI_Finalized( &flag ) );
    return (flag != 0);
}

int Query_thread( void )
    {
    int provided;
    MPIX_CALL( MPI_Query_thread( &provided ) );
    return provided;
}

bool Is_thread_main( void )
    {
    int flag;
    MPIX_CALL( MPI_Is_thread_main( &flag ) );
    return (flag != 0);
}

void Get_version( int &v, int&sv )
    {
    
    MPIX_CALL( MPI_Get_version( &v,&sv ) );
}

int Add_error_class( void )
    {
    int eclass;
    MPIX_CALL( MPI_Add_error_class( &eclass ) );
    return eclass;
}

int Add_error_code( int eclass )
    {
    int ecode;
    MPIX_CALL( MPI_Add_error_code( eclass, &ecode ) );
    return ecode;
}

void Add_error_string( int ecode, const char *estring )
    {
    
    MPIX_CALL( MPI_Add_error_string( ecode, (char *)estring ) );
}

void Lookup_name( const char *sn, const Info &info, char *pn )
    {
    
    MPIX_CALL( MPI_Lookup_name( (char *)sn, (MPI_Info)info, pn ) );
}

void Publish_name( const char *sn, const Info &info, const char *pn )
    {
    
    MPIX_CALL( MPI_Publish_name( (char *)sn, (MPI_Info)info, (char *)pn ) );
}

void Unpublish_name( const char *sn, const Info &info, const char *pn )
    {
    
    MPIX_CALL( MPI_Unpublish_name( (char *)sn, (MPI_Info)info, (char *)pn ) );
}

Intercomm Comm::Get_parent( void )
    {
    MPI::Intercomm v;MPI_Comm vv;
    MPIX_CALL( MPI_Comm_get_parent( &vv ) );
    return (v = (Intercomm)vv, v);
}

Intercomm Comm::Join( const int fd )
    {
    MPI::Intercomm v;MPI_Comm vv;
    MPIX_CALL( MPI_Comm_join( fd,&vv ) );
    return (v = (Intercomm)vv,v);
}

void Close_port( const char *pn )
    {
    
    MPIX_CALL( MPI_Close_port( (char *)pn ) );
}

void Open_port( const Info &info, char *portname )
    {
    
    MPIX_CALL( MPI_Open_port( (MPI_Info)info, portname ) );
}

//
// Rather than use a registered interposer, instead we interpose taking 
// advantage of the extra_data field
typedef struct { 
    MPI::Grequest::Query_function  *query_fn;
    MPI::Grequest::Free_function   *free_fn;
    MPI::Grequest::Cancel_function *cancel_fn;
    void *orig_extra_data; } MPIR_Grequest_data;
extern "C" int MPIR_Grequest_call_query_fn( void *extra_data, 
					    MPI_Status *status )
{
    int err;
    MPI::Status s;
    MPIR_Grequest_data *d = (MPIR_Grequest_data *)extra_data;
    
    err = (d->query_fn)( d->orig_extra_data, s );
    *status = s;

    return err;
}
extern "C" int MPIR_Grequest_call_free_fn( void *extra_data )
{
    int err;
    MPIR_Grequest_data *d = (MPIR_Grequest_data *)extra_data;
    
    err = (d->free_fn)( d->orig_extra_data );

    // Recover the storage that we used for the extra_data item.
    delete d;
    return err;
}
extern "C" int MPIR_Grequest_call_cancel_fn( void *extra_data, int done )
{
    int err;
    MPI::Status s;
    MPIR_Grequest_data *d = (MPIR_Grequest_data *)extra_data;
    
    // Pass a C++ bool to the C++ version of the cancel function
    err = (d->cancel_fn)( d->orig_extra_data, done ? true : false );
    return err;
}
Grequest Grequest::Start( Grequest::Query_function  *query_fn,
                          Grequest::Free_function   *free_fn,
                          Grequest::Cancel_function *cancel_fn,
                          void *extra_state ) 
{
    MPI::Grequest req;
    MPIR_Grequest_data *d = new MPIR_Grequest_data;
    d->query_fn        = query_fn;
    d->free_fn         = free_fn;
    d->cancel_fn       = cancel_fn;
    d->orig_extra_data = extra_state;
    MPI_Grequest_start( MPIR_Grequest_call_query_fn,
			MPIR_Grequest_call_free_fn,
			MPIR_Grequest_call_cancel_fn,
			(void *)d, &req.the_real_request );
    return req;
}

/* MT FIXME: this is not thread-safe */
void MPIR_CXX_InitDatatypeNames( void )
{
    static int _isInit = 1; 
    if (_isInit) { 
	_isInit=0; 
	PMPI_Type_set_name( MPI::BOOL, (char *)"MPI::BOOL" );
	PMPI_Type_set_name( MPI::COMPLEX, (char *)"MPI::COMPLEX" );
	PMPI_Type_set_name( MPI::DOUBLE_COMPLEX, (char *)"MPI::DOUBLE_COMPLEX" );
#if defined(HAVE_LONG_DOUBLE)
	PMPI_Type_set_name( MPI::LONG_DOUBLE_COMPLEX, (char *)"MPI::LONG_DOUBLE_COMPLEX" );
#endif
    }
}
} // namespace MPI
