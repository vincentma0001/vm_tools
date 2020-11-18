// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CString.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 20:35:43                                               == //
// ==   Modify Time          : 2020-11-18 08:51:44                                               == //
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
//.vm's.function.files.inlcuded
#include "CString.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CString<tsztBufSize> Construct && Destruct realization                              == //
// ================================================================================================ //
// [ Class CString<tsztBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize>::CString()                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize>::CString(  ) 
    : CStrPtr( mBuf, sizeof(mBuf) ), mBuf{0x00}
// {{{
{
}
// }}} End of func CString<tsztBufSize>::CString()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize >::CString(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
// ==  Params  : cpStr            - [I] default string
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize >::CString( const tchar* const cpStr ) 
    : CStrPtr( mBuf, sizeof(mBuf) ), mBuf{0x00}
// {{{ 
{
    vm::v_strcpy( mBuf, sizeof(mBuf), cpStr );
}
// }}} end of func CString<tsztBufSize >::CString(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CString<tsztBufSize>::CString()                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize>::~CString(  )
// {{{
{
}
// }}} End of func CString<tsztBufSize>::~CString()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize >::CString(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
// ==  Params  : &Obj             - [I] Src CString object
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize >::CString( const vm::CString<tsztBufSize> &Obj )
    : CStrPtr( mBuf, sizeof(mBuf) ), mBuf{0x00}
// {{{ 
{
    *this = *((vm::CStrPtr*)&Obj);
}
// }}} end of func CString<tsztBufSize >::CString(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize>::CString()                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
// ==  Params  : &Obj             - [I] Src CString object
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize>::CString( const vm::CStrPtr &Obj )
    : CStrPtr( mBuf, sizeof(mBuf) ), mBuf{0x00}
// {{{
{
    *this = Obj;
}
// }}} End of func CString<tsztBufSize>::CString()
// ================================================================================================ //

// }}} ![ Class CString<tsztBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CString<tsztBufSize> operator realization                                           == //
// ================================================================================================ //
// [ Class CString<tsztBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize>::operator = ()                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CString<tsztBufSize>& - [O] this object
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize>& vm::CString<tsztBufSize>::operator = ( const vm::CStrPtr &Obj )
// {{{
{
    *((CStrPtr*)this) = Obj;
    msztBufSize = tsztBufSize;
    return *this;
}
// }}} End of func CString<tsztBufSize>::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CString<tsztBufSize >::operator = (...)                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Params  : cpStr            - [I] New string
template< size_t tsztBufSize >
inline vm::CString<tsztBufSize>& vm::CString<tsztBufSize >::operator = ( const tchar* const cpSrc )
// {{{ 
{
    *((CStrPtr*)this) = cpSrc;
    return *this;
}
// }}} end of func CString<tsztBufSize >::operator = (...)
// ================================================================================================ //

// }}} ![ Class CString<tsztBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CString<tsztBufSize> Functional realization                                         == //
// ================================================================================================ //
// [ Class CString<tsztBufSize> Functional realization ] {{{



// }}} ![ Class CString<tsztBufSize> Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
