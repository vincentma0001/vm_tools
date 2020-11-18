// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CSysErrPtr.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 09:44                                                  == //
// ==   Modify Time          : 2020-11-18 08:56                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>
//.vm's.function.files.inlcuded
#include "CSysErrPtr.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSysErrPtr Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CSysErrPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErrPtr::CSysErrPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CSysErrPtr::CSysErrPtr(const long clErrCode, tchar* const pBuf, const size_t csztBufSize)
    : mpBuf(pBuf), msztBufSize(csztBufSize), mlErrCode(clErrCode)
// {{{
{
}
// }}} End of func CSysErrPtr::CSysErrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErrPtr::~CSysErrPtr()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CSysErrPtr::~CSysErrPtr(  )
// {{{
{
}
// }}} End of func CSysErrPtr::~CSysErrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErrPtr::CSysErrPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CSysErrPtr::CSysErrPtr( const CSysErrPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CSysErrPtr::~CSysErrPtr()
// ================================================================================================ //

// }}} ![ Class CSysErrPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSysErrPtr operator realization                                                     == //
// ================================================================================================ //
// [ Class CSysErrPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErrPtr::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CSysErrPtr&         - [O] this object
inline vm::CSysErrPtr& vm::CSysErrPtr::operator = ( const CSysErrPtr &obj )
// {{{
{
    vm::v_memcpy(mpBuf, msztBufSize, obj.mpBuf, obj.msztBufSize);
    mlErrCode = obj.mlErrCode;
    return *this;
}
// }}} End of func CSysErrPtr::~CSysErrPtr()
// ================================================================================================ //

// }}} ![ Class CSysErrPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSysErrPtr Functional realization                                                   == //
// ================================================================================================ //
// [ Class CSysErrPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErrPtr::toCode(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error code
// ==  Return  : long       - [O] Error code
inline long vm::CSysErrPtr::toCode(  )
// {{{
{
    return mlErrCode;
}
// }}} end of func vm::CSysErrPtr::toCode(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErrPtr::toString(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error message
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : 
inline tchar* vm::CSysErrPtr::toString(  )
// {{{
{
    size_t lsztStrLen = 0;
    return GetErrStr(mpBuf, msztBufSize, lsztStrLen);
}
// }}} end of func CSysErrPtr::toString(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErrPtr::GetErrStr(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get error string
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : pBuf             - [O] Error message buffer address
// ==            csztBufSize      - [I] Error message buffer size
// ==            sztStrLen        - [O] Error message length
inline tchar* vm::CSysErrPtr::GetErrStr( tchar* const pBuf, const size_t csztBufSize, size_t& sztStrLen )
// {{{
{
    // Verify input
    _VERIFY_( vT("vm::CSysErrPtr::GetErrStr()"), pBuf );

    // Convert errno value to string
    vm::v_memzero( pBuf, csztBufSize );
    sztStrLen = vm::v_strerrno( mlErrCode, pBuf, csztBufSize );
    return pBuf;
}
// }}} end of func CSysErrPtr::GetErrStr(...)
// ================================================================================================ //

// }}} ![ Class CSysErrPtr Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
