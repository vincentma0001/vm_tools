// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CBitStr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 14:16:00                                               == //
// ==   Modify Time          : 2020-11-16 08:40:57                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBITSTR_HPP_INL__
#define  __CBITSTR_HPP_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CBitStr<CBitType> Construct && Destruct realization                                 == //
// ================================================================================================ //
// [ Class CBitStr<CBitType> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : typename<CBitType>::CBitStr()                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< typename CBitType >
inline vm::CBitStr< CBitType >::CBitStr( const CBitType &obj ) : mBitType(obj), mszBuf{0x00}
// {{{
{
}
// }}} End of func CBitStr<CBitType>::CBitStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CBitStr<CBitType>::CBitStr()                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct 
template< typename CBitType >
inline vm::CBitStr<CBitType>::~CBitStr(  )
// {{{
{
}
// }}} End of func CBitStr<CBitType>::~CBitStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::CBitStr()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< typename CBitType >
inline vm::CBitStr<CBitType>::CBitStr( const CBitStr &obj ) : mBitType(obj.mBitType),mszBuf{0x00}
// {{{
{
}
// }}} End of func CBitStr<CBitType>::CBitStr()
// ================================================================================================ //

// }}} ![ Class CBitStr<CBitType> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CBitStr<CBitType> operator realization                                              == //
// ================================================================================================ //
// [ Class typename<CBitType> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::operator = ()                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CBitStr<CBitType>& - [O] this object
template< typename CBitType >
inline vm::CBitStr<CBitType>& vm::CBitStr<CBitType>::operator = ( const CBitStr &obj )
// {{{
{
    return *this;
}
// }}} End of func CBitStr<CBitType>::operator=()
// ================================================================================================ //

// }}} ![ Class CBitStr<CBitType> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class typename<CBitType> Functional realization                                           == //
// ================================================================================================ //
// [ Class CBitStr<CBitType> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toBin(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by bin string
// ==  Return  : tchar*           - [O] bin string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toBin(  )
// {{{ 
{
    vMemZero(mszBuf);
    tchar* lpPos = mszBuf;
    for ( int i = (mBitType.size()*8-1); i >= 0; i--)
    {
        (*lpPos) = ((mBitType.mBit >> i) & 1) ? '1' : '0';
        lpPos++;
    }
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toBin(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toOct04(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by oct string
// ==  Return  : inline tchar*    - [O] oct string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toOct( const tchar* const cpStrFmt )
// {{{
{
    vMemZero(mszBuf);
    bool lbRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), cpStrFmt, mBitType.mBit);
    vCheckStrFmtRet( lbRet, mllErrCode );

    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toOct04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toDec(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by dec string
// ==  Return  : tchar*           - [O] dec string
// ==  Params  : 
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toDec( const tchar* const cpStrFmt )
// {{{ 
{
    vMemZero(mszBuf);
    bool lbRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), cpStrFmt, mBitType.mBit);
    vCheckStrFmtRet( lbRet, mllErrCode );

    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toDec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHex02(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHex( const tchar* const cpStrFmt )
// {{{ 
{
    vMemZero(mszBuf);
    bool lbRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), cpStrFmt, mBitType.mBit);
    vCheckStrFmtRet( lbRet, mllErrCode );

    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHex02(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHex02(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHex( const tchar* const cpStrFmt )
// {{{ 
{
    vMemZero(mszBuf);
    bool lbRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x")cpStrFmt, mBitType.mBit);
    vCheckStrFmtRet( lbRet, mllErrCode );

    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHex02(...)
// ================================================================================================ //

// }}} ![ Class CBitStr<CBitType> Functional realization ]
// ================================================================================================ //


#endif // ! __CBITSTR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
