// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CBitStr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 14:07                                                  == //
// ==   Modify Time          : 2020-11-18 08:18                                                  == //
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
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CBitStr : This class convert CBitType's value to string
template< typename CBitType >
class CBitStr
{ // {{{

// Macrodefs : {{{
#ifndef    _V_CBITSTR_MAX_BUF_
#   define _V_CBITSTR_MAX_BUF_ 128
#endif // !_V_CBITSTR_MAX_BUF_
// }}} ! Macrodefs

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

// Menbers   : {{{
private:
    // BitType
    const CBitType& mBitType;
    // string buffer
    tchar           mszBuf[ _V_CBITSTR_MAX_BUF_ ];

    // Error code
    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Output bit value by bin string
    inline tchar* toBin   (                                            );

    // Output bit value by oct string
    inline tchar* toOct   ( const tchar* const cpStrFmt=vT(vStrFmtOct) );

    // Output bit value by dec string
    inline tchar* toDec   ( const tchar* const cpStrFmt=vT(vStrFmtInt) );

    // Output bit value by hex string
    inline tchar* toHex   ( const tchar* const cpStrFmt=vT(vStrFmtHeX) );

// }}} ! Methods

}; // }}} End of class CBitStr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
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
