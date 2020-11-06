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
#include "vm_tools/vm_cstr/v_funcs_str.h"
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

        emSize      = 15,
        emStr       = 99
    };
    // }}} End of def enum emType

    // union unVal : this union inlude value in class CAny
    union unVal
    // {{{
    {
        bool                bValue;
        size_t              sztValue;

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

    // enum emRet : this enum define ret info for CAny
    enum emRet
    // {{{
    {
        emSuccess = 0,
        emWarning = -1
    };
    // }}} End of def enum emRet
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construc define 
    inline CAny(const bool               cVal ) :memType(emType::emBool)   { munValue.bValue   = cVal; vMemZero(mszBuf); };
    // Construc define 
    inline CAny(const size_t             cVal ) :memType(emType::emSize)   { munValue.sztValue = cVal; vMemZero(mszBuf); };
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

    long long       mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:

    bool                   toBool()
    {
        
    };
    size_t                 toSize();
    wchar_t               toWchar();

    char                   toChar()
    {
        mllErrCode = emRet::emSuccess;

        if(memType==emType::emStr)
        {
            char liRet =(char)vStod( mszBuf );
            return liRet;
        }

        if(memType!=emType::emChar)
            mllErrCode = emRet::emWarning;

        return munValue.cValue;
    }
    unsigned char         toUChar();

    short                 toShort();
    unsigned short       toUShort();

    int                     toInt();
    unsigned int           toUInt();

    long                   toLong();
    unsigned long         toULong();

    long long             toLLong();
    unsigned long long   toULLong();

    float                 toFloat();
    double               toDouble();
    long double         toLDouble();


public:
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const bool   bVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%s"), vStrBool(bVal) );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const size_t sztVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%zu"), vStrBool(sztVal) );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const char ccVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%hc"), ccVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned char cucVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%hc"), cucVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const wchar_t ccVal )
    {
        // ISSUE : has problem ?
        vm::v_sprintf( pDst, csztDstSize, vT("%hc"), ccVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const short csVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%hd"), csVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned short cusVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%hu"), cusVal );
        return pDst;
    }

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const int ciVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%d"), ciVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned int cuiVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%u"), cuiVal );
        return pDst;
    }

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long clVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%ld"), clVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long culVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%lu"), culVal );
        return pDst;
    }

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long long cllVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%lld"), cllVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long long cullVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%llu"), cullVal );
        return pDst;
    }

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const float cfVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%f"), cfVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const double cdVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%f"), cdVal );
        return pDst;
    }
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long double cldVal )
    {
        vm::v_sprintf( pDst, csztDstSize, vT("%Lf"), cldVal );
        return pDst;
    }
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
