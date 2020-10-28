// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CErr.hpp.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 11:04:28                                               == //
// ==   Modify Time          : 2020-10-28 11:10:41                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERR_HPP_INL__
#define  __CERR_HPP_INL__

// ================================================================================================ //
// ==  Class CErr Construct && Destruct realization                                              == //
// ================================================================================================ //
// [ Class CErr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CErr::CErr()                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tszBufSize >
inline vm::CErr<tszBufSize>::CErr(  ) : vm::CErrPtr( errno, mBuf, sizeof(mBuf) ),mBuf{0x00}
// {{{
{
}
// }}} End of func CErr::CErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr::CErr(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : # TODO : Add function brief #
// ==  Return  :                  - [O] Nothing for return
// ==  Params  : cllErrCode       - [X] error number
template< size_t tszBufSize >
inline vm::CErr<tszBufSize>::CErr( const long long cllErrCode ) : vm::CErrPtr( cllErrCode, mBuf, sizeof(mBuf) ),mBuf{0x00}
// {{{
{
}
// }}} end of func CErr::CErr(...)
// ================================================================================================ //


// ================================================================================================ //
// ==  Methord : virtual CErr::CErr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tszBufSize >
inline vm::CErr<tszBufSize>::~CErr(  )
// {{{
{
}
// }}} End of func CErr::~CErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr::CErr()                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tszBufSize >
inline vm::CErr<tszBufSize>::CErr( const vm::CErr<tszBufSize> &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CErr::~CErr()
// ================================================================================================ //

// }}} ![ Class CErr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErr operator realization                                                           == //
// ================================================================================================ //
// [ Class CErr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CErr::operator = ()                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CErr&            - [O] this object
template< size_t tszBufSize >
inline vm::CErr<tszBufSize>& vm::CErr<tszBufSize>::operator = ( const vm::CErr<tszBufSize> &obj )
// {{{
{
    mllErrCode = obj.mllErrCode;
    vm::v_memcpy( mBuf, sizeof(mBuf), obj.mBuf, sizeof(obj.mBuf) );
    return *this;
}
// }}} End of func CErr::~CErr()
// ================================================================================================ //

// }}} ![ Class CErr operator realization ]
// ================================================================================================ //

#endif // ! __CERR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
