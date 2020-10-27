// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CErrPtr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 09:44:45                                               == //
// ==   Modify Time          : 2020-10-27 20:04:55                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERRPTR_H_INL__
#define  __CERRPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "CErrPtr_def.inl"
// }}}

// ================================================================================================ //
// ==  Class CErrPtr Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CErrPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CErrPtr::CErrPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CErrPtr::CErrPtr(const long long cllErrCode, tchar* const pBuf, const size_t csztBufSize)
                           :mllErrCode( cllErrCode ), mpBuf(pBuf), msztBufSize( csztBufSize )
// {{{
{
}
// }}} End of func CErrPtr::CErrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::~CErrPtr()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CErrPtr::~CErrPtr(  )
// {{{
{
}
// }}} End of func CErrPtr::~CErrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::CErrPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CErrPtr::CErrPtr( const vm::CErrPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CErrPtr::~CErrPtr()
// ================================================================================================ //

// }}} ![ Class CErrPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErrPtr operator realization                                                        == //
// ================================================================================================ //
// [ Class CErrPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CErrPtr::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CErrPtr&         - [O] this object
inline vm::CErrPtr& vm::CErrPtr::operator = ( const vm::CErrPtr &obj )
// {{{
{
    mllErrCode = obj.mllErrCode;
    vm::v_memcpy(mpBuf, msztBufSize, obj.mpBuf, obj.msztBufSize);
    return *this;
}
// }}} End of func CErrPtr::~CErrPtr()
// ================================================================================================ //

// }}} ![ Class CErrPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErrPtr Functional realization                                                      == //
// ================================================================================================ //
// [ Class CErrPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CErrPtr::toCode(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error code
// ==  Return  : long long    - [O] Error code
// ==  Params  : 
inline long long vm::CErrPtr::toCode(  )
// {{{
{
    return mllErrCode;
}
// }}} end of func vm::CErrPtr::toCode(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::toString(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error message
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : 
inline tchar* vm::CErrPtr::toString(  )
// {{{
{
    size_t lsztStrLen = 0;
    return GetErrStr(mpBuf, msztBufSize, lsztStrLen);
}
// }}} end of func CErrPtr::toString(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::Fmt(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error message    with format
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : cpFmt            - [I] Message format
inline tchar* vm::CErrPtr::Fmt( const tchar* const cpFmt )
// {{{
{
    return mpBuf;
}
// }}} end of func CErrPtr::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::GetErrStr(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get error string
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : pBuf             - [O] Error message buffer address
// ==            csztBufSize      - [I] Error message buffer size
// ==            sztStrLen        - [O] Error message length
inline tchar* vm::CErrPtr::GetErrStr( tchar* const pBuf, const size_t csztBufSize, size_t& sztStrLen )
// {{{
{
    // Init memory buffer
    vm::v_memzero( pBuf, csztBufSize );

#if defined (_MSC_VER) && (_MSC_VER>1200)
    // Get error message string
    vErrno_t leRet = vStrErrNo_s( pBuf, csztBufSize, (int)mllErrCode );
    if( leRet != 0 ) 
    {
        // if can't get error message, return empty string
        vm::v_memzero( pBuf, csztBufSize );
        return pBuf;
    }
#else
    tchar* lpRet = vStrErrNo( (int)mllErrCode );
    if( lpRet == nullptr )
    {
        // if can't get error message, return empty string
        vm::v_memzero( pBuf, csztBufSize );
        return pBuf;
    }

    vm::v_strcpy( pBuf, csztBufSize, lpRet );
#endif

    // Get error message string length
    sztStrLen = vStrlen( pBuf );
    return pBuf;
}
// }}} end of func CErrPtr::GetErrStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::Check(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check has error or not
// ==  Return  : bool             - [O] true  for has error
// ==                                   false for hasn't error
inline bool vm::CErrPtr::Check(  )
// {{{
{
    return mllErrCode == 0 ? true : false;
}
// }}} end of func CErrPtr::Check(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErrPtr::Throw(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check error and throw error string
// ==  Return  : void             - [O] Nothing for return
inline void vm::CErrPtr::Throw(  )
// {{{
{
    if( mllErrCode != 0 )
    {
        tchar  lszErrStr[1024] = {0x00};
        size_t lsztErrStrlen = 0;
        tchar* lpErrStr = vm::CErrPtr::GetErrStr( lszErrStr, sizeof(lszErrStr), lsztErrStrlen );
        vm::v_sprintf( mpBuf, msztBufSize, vT("%lld:%s"), mllErrCode, lpErrStr );
        throw mpBuf;
    } // End of if(...)
}
// }}} end of func CErrPtr::Throw(...)
// ================================================================================================ //

// }}} ![ Class CErrPtr Functional realization ]
// ================================================================================================ //


#endif // ! __CERRPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
