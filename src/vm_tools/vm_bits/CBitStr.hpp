// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CBitStr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 14:07:00                                               == //
// ==   Modify Time          : 2020-11-05 08:49:39                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBITSTR_HPP__
#define  __CBITSTR_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CBitStr : This class convert CBitType's valu to string                              == //
// ------------------------------------------------------------------------------------------------ //
//template< typename CBitType, size_t tsztBufSize >
template< typename CBitType >
class CBitStr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    _V_CBITSTR_MAX_BUF_
#   define _V_CBITSTR_MAX_BUF_ 128
#endif // !_V_CBITSTR_MAX_BUF_
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBitStr( const CBitType &obj );
    // Destruct define
    inline virtual ~CBitStr();

private:
    // Copy construct define
    inline CBitStr             ( const CBitStr &obj );
    // Assignment operation
    inline CBitStr& operator = ( const CBitStr &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    const CBitType& mBitType;
    tchar           mszBuf[ _V_CBITSTR_MAX_BUF_ ];
    //tchar             mszBuf[ tsztBufSize ];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Output bit value by bin string
    inline tchar* toBin();

    // Output bit value by oct string
    inline tchar* toOct04();
    // Output bit value by oct string
    inline tchar* toOct08();

    // Output bit value by dec string
    inline tchar* toDec();
    // Output bit value by dec string
    inline tchar* toDec04();
    // Output bit value by dec string
    inline tchar* toDec08();

    // Output bit value by hex string
    inline tchar* toHex02();
    // Output bit value by hex string
    inline tchar* toHex04();
    // Output bit value by hex string
    inline tchar* toHex08();
    // Output bit value by hex string
    inline tchar* toHeX02();
    // Output bit value by hex string
    inline tchar* toHeX04();
    // Output bit value by hex string
    inline tchar* toHeX08();

    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHex02();
    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHex04();
    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHex08();
    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHeX02();
    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHeX04();
    // Output bit value by hex string, and start by 0x
    inline tchar* to0xHeX08();

// }}} ! Methods

};
// }}} ! [ class CBitStr ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CBitStr.hpp.inl"
// ================================================================================================ //

#endif // ! __CBITSTR_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
