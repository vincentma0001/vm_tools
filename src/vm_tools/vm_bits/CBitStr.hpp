// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CBitStr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 14:07:00                                               == //
// ==   Modify Time          : 2020-11-15 10:09:41                                               == //
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

// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    _V_CBITSTR_MAX_BUF_
#   define _V_CBITSTR_MAX_BUF_ 128
#endif // !_V_CBITSTR_MAX_BUF_
// }}} ! Macrodefs

// ================================================================================================ //
// ==  Class CBitStr : This class convert CBitType's valu to string                              == //
// ------------------------------------------------------------------------------------------------ //
//template< typename CBitType, size_t tsztBufSize >
template< typename CBitType >
class CBitStr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emRet : this enum define return value for class CBitStr
    enum emRet
    // {{{
    {
        emSucess = 0,

        emError         = vMaxsLong -1,
        emErrFmtFailed  =    emError-1,

        emWarns         = vMaxsLong -20
    };
    // }}} End of def enum emRet
// }}} ! Typedefs
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
    // BitType
    const CBitType& mBitType;
    // string buffer
    tchar           mszBuf[ _V_CBITSTR_MAX_BUF_ ];

    // Error code
    long long       mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Output bit value by bin string
    inline tchar* toBin();

    inline tchar* toOct( const tchar* const cpStrFmt=vT(vStrFmtOct) )

    // Output bit value by dec string
    inline tchar* toDec( const tchar* const cpStrFmt=vT(vStrForInt) );

    // Output bit value by hex string
    inline tchar* toHex( const tchar* const cpStrFmt=vT(vStrFmthex) );
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
