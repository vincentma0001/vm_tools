// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CAny.hpp                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-05 10:06                                                  == //
// ==   Modify Time          : 2020-11-05 10:06                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CANY_HPP__
#define  __CANY_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_cstr.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CAny : This class deal with convent operation between string and other types        == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CAny
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emType : this enum define data types
    enum emType
    // {{{
    {
        emBool      = 0,

        emChar      = 1,
        emUChar     = 2,

        emWChar     = 3,

        emShort     = 4,
        emUShort    = 5,

        emInt       = 6,
        emUInt      = 7,

        emLong      = 8,
        emULong     = 9,

        emLLong     = 10,
        emULLong    = 11,

        emFloat     = 12,
        emDouble    = 13,
        emLDouble   = 14,

        emStr       = 99
    };
    // }}} End of def enum emType

    // union unVal : this union inlude value in class CAny
    union unVal
    // {{{
    {
        bool                bValue;

        char                cValue;
        unsigned char       ucValue;

        wchar_t             wcValue;

        short               sValue;
        unsigned short      usValue;

        int                 iValue;
        unsigned int        uiValue;

        long                lValue;
        unsigned long       ulValue;

        long long           llValue;
        unsigned long long  ullValue;

        float               fValue;
        double              dValue;
        long double         ldValue;
    };
    // }}} End of def union unVal

// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construc define 
    inline CAny(const bool               cVal ) :memType(emType::emBool)   { munValue.bValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const char               cVal ) :memType(emType::emChar)   { munValue.cValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const unsigned char      cVal ) :memType(emType::emUChar)  { munValue.ucValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const wchar_t            cVal ) :memType(emType::emWChar)  { munValue.wcValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const short              cVal ) :memType(emType::emShort)  { munValue.sValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const unsigned short     cVal ) :memType(emType::emUShort) { munValue.usValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const int                cVal ) :memType(emType::emInt)    { munValue.iValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const unsigned int       cVal ) :memType(emType::emUInt)   { munValue.uiValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const long               cVal ) :memType(emType::emLong)   { munValue.lValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const unsigned long      cVal ) :memType(emType::emULong)  { munValue.ulValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const long long          cVal ) :memType(emType::emLLong)  { munValue.llValue  = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const unsigned long long cVal ) :memType(emType::emULLong) { munValue.ullValue = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const float              cVal ) :memType(emType::emFloat)  { munValue.fValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const double             cVal ) :memType(emType::emDouble) { munValue.dValue   = cVal; vMemZero(mszBuf); };
    // Construc define
    inline CAny(const long double        cVal ) :memType(emType::emLDouble){ munValue.ldValue  = cVal; vMemZero(mszBuf); };

    // Construc define
    inline CAny(const tchar* const      cpValue) :memType(emType::emStr) { vMemZero(mszBuf); vm::v_memcpy(mszBuf, sizeof(mszBuf), cpValue, vStrlen(cpValue)); };

    // Destruct define
    inline virtual ~CAny(){};

private:
    // Copy construct define
    inline CAny             ( const CAny &obj ){               };
    // Assignment operation
    inline CAny& operator = ( const CAny &obj ){ return *this; };
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // 需要被转换的数据
    unVal           munValue;
    // 数据类型
    emType          memType;
    // 转义后字符串缓存
    tchar           mszBuf[tsztBufSize];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    /* TODO Add class's Methods here */
// }}} ! Methods

};
// }}} ! [ class CAny ]
// ================================================================================================ //
// Class realization :
#include "CAny.hpp.inl"
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CANY_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
