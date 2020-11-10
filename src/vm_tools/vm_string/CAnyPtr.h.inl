// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CAnyPtr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-10 23:55                                                  == //
// ==   Modify Time          : 2020-11-10 23:55                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CANYPTR_H_INL__
#define  __CANYPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include "v_funcs_str.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CAnyPtr Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CAnyPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const bool Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emBool), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.bValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

/*
// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const size_t Val, tchar* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emSize), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.sztValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //
//*/

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const char Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emChar), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.cValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const unsigned char Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emUChar), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.ucValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const wchar_t Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emWChar), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.wcValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const short Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emShort), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.sValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const unsigned short Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emUShort), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.usValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const int Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emInt), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.iValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const unsigned int Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emUInt), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.uiValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const long Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emLong), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.lValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const unsigned long Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emULong), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.ulValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const long long Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emLLong), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.llValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const unsigned long long Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emULLong), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.ullValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const float Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emFloat), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.fValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const double Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emDouble), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.dValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const long double Val, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emLDouble), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    munValue.ldValue = Val;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CAnyPtr::CAnyPtr( const tchar* cpVal, void* const pBuf, const size_t csztBufSize )
    :munValue{0x00}, memType(emType::emStr), mpBuf((tchar*)pBuf), msztBufSize(csztBufSize), mllErrCode(0)
// {{{
{
    if( cpVal == pBuf )
        return;

    vm::v_strcpy( mpBuf, msztBufSize, cpVal);
    mllErrCode = errno;
}
// }}} end of func CAnyPtr::CAnyPtr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CAnyPtr::CAnyPtr()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CAnyPtr::~CAnyPtr(  )
// {{{
{
}
// }}} End of func CAnyPtr::~CAnyPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::CAnyPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CAnyPtr::CAnyPtr( const CAnyPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CAnyPtr::CAnyPtr()
// ================================================================================================ //

// }}} ![ Class CAnyPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CAnyPtr operator realization                                                        == //
// ================================================================================================ //
// [ Class CAnyPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CAnyPtr::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CAnyPtr&         - [O] this object
inline vm::CAnyPtr& vm::CAnyPtr::operator = ( const CAnyPtr &obj )
// {{{
{
    return *this;
}
// }}} End of func CAnyPtr::operator=()
// ================================================================================================ //

// }}} ![ Class CAnyPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CAnyPtr Functional realization                                                      == //
// ================================================================================================ //
// [ Class CAnyPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get data value by string
// ==  Return  : tchar*           - [O] data string value
// ==  Params  : void             - [X] nothing for input
inline tchar* vm::CAnyPtr::toStr( void )
// {{{
{
    mllErrCode = emRet::emSuccess;
    vm::v_memzero( mpBuf, msztBufSize );

    switch ( memType ) {
    // {{{
        case emType::emBool:
        { toStr( mpBuf, msztBufSize, munValue.bValue    ); mllErrCode = errno; break; }
        case emType::emSize:
        { toStr( mpBuf, msztBufSize, munValue.sztValue  ); mllErrCode = errno; break; }

        case emType::emChar:
        { toStr( mpBuf, msztBufSize, munValue.cValue    ); mllErrCode = errno; break; }
        case emType::emUChar:
        { toStr( mpBuf, msztBufSize, munValue.ucValue   ); mllErrCode = errno; break; }
        case emType::emWChar:
        { toStr( mpBuf, msztBufSize, munValue.wcValue   ); mllErrCode = errno; break; }

        case emType::emShort:
        { toStr( mpBuf, msztBufSize, munValue.sValue    ); mllErrCode = errno; break; }
        case emType::emUShort:
        { toStr( mpBuf, msztBufSize, munValue.usValue   ); mllErrCode = errno; break; }

        case emType::emInt:
        { toStr( mpBuf, msztBufSize, munValue.iValue    ); mllErrCode = errno; break; }
        case emType::emUInt:
        { toStr( mpBuf, msztBufSize, munValue.uiValue   ); mllErrCode = errno; break; }

        case emType::emLong:
        { toStr( mpBuf, msztBufSize, munValue.lValue    ); mllErrCode = errno; break; }
        case emType::emULong:
        { toStr( mpBuf, msztBufSize, munValue.ulValue   ); mllErrCode = errno; break; }

        case emType::emLLong:
        { toStr( mpBuf, msztBufSize, munValue.llValue   ); mllErrCode = errno; break; }
        case emType::emULLong:
        { toStr( mpBuf, msztBufSize, munValue.ullValue  ); mllErrCode = errno; break; }

        case emType::emFloat:
        { toStr( mpBuf, msztBufSize, munValue.fValue    ); mllErrCode = errno; break; }
        case emType::emDouble:
        { toStr( mpBuf, msztBufSize, munValue.dValue    ); mllErrCode = errno; break; }
        case emType::emLDouble:
        { toStr( mpBuf, msztBufSize, munValue.ldValue   ); mllErrCode = errno; break; }

        case emType::emStr:
        { break; }

        default:
        { mllErrCode = vMakeLLong( emRet::emErrUnknowType, errno ); }
    } // }}} End of switch( emType )

    return mpBuf;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toBool(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to bool
// ==  Return  : bool             - [O] converted bool value
inline bool vm::CAnyPtr::toBool( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if( memType == emType::emStr )
    {
        if( vm::v_strcmp_equl( mpBuf, vT("true") ) )
        {
            mllErrCode = errno;
            return true;
        }

        if( vm::v_strcmp_equl( mpBuf, vT("false") ) )
        {
            mllErrCode = errno;
            return false;
        }

        mllErrCode = vMakeLLong( emRet::emErrConvertFailed, errno );
        return false;
    }

    if( memType != emType::emBool )
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, errno );

    return munValue.bValue;
}
// }}} end of func CAnyPtr::toBool(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toSize(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to size_t
// ==  Return  : size_t           - [O] converted size_t value
inline size_t vm::CAnyPtr::toSize( void )
// {{{
{
    mllErrCode = emRet::emSuccess;
    
    if( memType == emType::emStr )
    {
        size_t lsztRet = vStoul( mpBuf,0,10 );
        mllErrCode = errno;
        return lsztRet;
    }
    
    if( memType != emType::emULong )
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, errno );
    
    return munValue.sztValue;
}
// }}} end of func CAnyPtr::toSize(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toWchar(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data tp wchar_t
// ==  Return  : wchar_t          - [O] converted wchar_t value
inline wchar_t vm::CAnyPtr::toWchar( void )
// {{{
{
    // # TODO : add function codes here #
    return munValue.wcValue;
}
// }}} end of func CAnyPtr::toWchar(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toChar(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to char
// ==  Return  : char             - [O] converted char value
inline char vm::CAnyPtr::toChar( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        char liRet =(char)vStod( mpBuf,0 );
        mllErrCode = errno;
        return liRet;
    }

    if(memType!=emType::emChar)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.cValue;
}
// }}} end of func CAnyPtr::toChar(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toUChar(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to unsigned char
// ==  Return  : unsigned char    - [O] Converted unsigned char value
inline unsigned char vm::CAnyPtr::toUChar( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        unsigned char luiRet =(unsigned char)vStod( mpBuf,0 );
        mllErrCode = errno;
        return luiRet;
    }

    if(memType!=emType::emUChar)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.ucValue;
}
// }}} end of func CAnyPtr::toUChar(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toShort(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to short
// ==  Return  : short            - [O] Converted short value
inline short vm::CAnyPtr::toShort( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        short lsRet =(short)vStod( mpBuf,0 );
        mllErrCode = errno;
        return lsRet;
    }

    if(memType!=emType::emShort)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.sValue;
}
// }}} end of func CAnyPtr::toShort(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toUShort(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to unsigned short
// ==  Return  : unsigned short   - [O] Converted unsigned short value
inline unsigned short vm::CAnyPtr::toUShort( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        unsigned short lusRet =(unsigned short)vStod( mpBuf,0);
        mllErrCode = errno;
        return lusRet;
    }

    if(memType!=emType::emUShort)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.usValue;
}
// }}} end of func CAnyPtr::toUShort(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toInt(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to int
// ==  Return  : int              - [O] Converted int value
inline int vm::CAnyPtr::toInt( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        int liRet =(int)vStol( mpBuf,0,10 );
        mllErrCode = errno;
        return liRet;
    }

    if(memType!=emType::emInt)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.iValue;
}
// }}} end of func CAnyPtr::toInt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toUInt(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to unsigned int
// ==  Return  : unsigned int     - [O] Converted unsigned int value
inline unsigned int vm::CAnyPtr::toUInt( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        unsigned int luiRet =(unsigned int)vStoul( mpBuf,0,10 );
        mllErrCode = errno;
        return luiRet;
    }

    if(memType!=emType::emUInt)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.uiValue;
}
// }}} end of func CAnyPtr::toUInt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toLong(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to long
// ==  Return  : long             - [O] Converted long value
inline long vm::CAnyPtr::toLong( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        long llRet =(long)vStol( mpBuf,0,10 );
        mllErrCode = errno;
        return llRet;
    }

    if(memType!=emType::emLong)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.lValue;
}
// }}} end of func CAnyPtr::toLong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toULong(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to unsigned long
// ==  Return  : unsigned long    - [O] Converted unsigned long value
inline unsigned long vm::CAnyPtr::toULong( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        unsigned long lulRet =(unsigned long)vStoul( mpBuf,0,10 );
        mllErrCode = errno;
        return lulRet;
    }

    if(memType!=emType::emULong)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.ulValue;
}
// }}} end of func CAnyPtr::toULong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toLLong(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to long long
// ==  Return  : long long        - [O] Converted long long value
inline long long vm::CAnyPtr::toLLong( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        long long lllRet =(long long)vStoll( mpBuf,0,10 );
        mllErrCode = errno;
        return lllRet;
    }

    if(memType!=emType::emLLong)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.llValue;
}
// }}} end of func CAnyPtr::toLLong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toULLong(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to unsigned long long
// ==  Return  : unsigned long long - [O] Converted unsigned long long value
inline unsigned long long vm::CAnyPtr::toULLong( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        unsigned long long lullRet =(unsigned long long)vStoull( mpBuf,0,10 );
        mllErrCode = errno;
        return lullRet;
    }

    if(memType!=emType::emULLong)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.ullValue;
}
// }}} end of func CAnyPtr::toULLong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toFloat(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to float
// ==  Return  : float            - [O] Converted float value
inline float vm::CAnyPtr::toFloat( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        float lfRet =(float)vStof( mpBuf,0 );
        mllErrCode = errno;
        return lfRet;
    }

    if(memType!=emType::emFloat)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.fValue;
}
// }}} end of func CAnyPtr::toFloat(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toDouble(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to double
// ==  Return  : double           - [O] Converted double value
inline double vm::CAnyPtr::toDouble( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        double ldRet =(double)vStof( mpBuf,0 );
        mllErrCode = errno;
        return ldRet;
    }

    if(memType!=emType::emDouble)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.dValue;
}
// }}} end of func CAnyPtr::toDouble(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toLDouble(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert data to long double
// ==  Return  : long double      - [O] Converted long double value
inline long double vm::CAnyPtr::toLDouble( void )
// {{{
{
    mllErrCode = emRet::emSuccess;

    if(memType==emType::emStr)
    {
        long double lldRet =(long double)vStof( mpBuf,0 );
        mllErrCode = errno;
        return lldRet;
    }

    if(memType!=emType::emLDouble)
        mllErrCode = vMakeLLong( emRet::emWrnDiffType, 0);

    return munValue.ldValue;
}
// }}} end of func CAnyPtr::toLDouble(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert bool to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] bool   value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const bool Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%s"), vStrBool(Val) );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

/*
// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert size_t to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] size_t value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztBufSize, const size_t Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%zu"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //
//*/

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert char to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] char   value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const char Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%hc"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert unsigned char to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] char   value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const unsigned char Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%hc"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert wchar to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] wchar  value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const wchar_t Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%hc"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert short to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] short  value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const short Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%hd"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert unsigned short to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] unsigned short value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const unsigned short Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%hu"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert int to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] int value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const int Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%d"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert unsigned int to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] unsigned int value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const unsigned int Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%u"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert long to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] long value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const long Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%ld"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert unsigned long to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] unsigned long value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%lu"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert long long to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] long long value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const long long Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%lld"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert unsigned long long to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] unsigned long long value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long long Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%llu"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert float to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] float value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const float Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%f"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert double to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] double value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const double Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%f"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CAnyPtr::toStr(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert long double to string
// ==  Return  : tchar*           - [O] string value
// ==  Params  : pDst             - [I] String value buffer
// ==            csztBufSize      - [I] String value buffer size
// ==            Val              - [I] long double value
inline tchar* vm::CAnyPtr::toStr( tchar* const pDst, const size_t csztDstSize, const long double Val )
// {{{
{
    vm::v_sprintf( pDst, csztDstSize, vT("%Lf"), Val );
    return pDst;
}
// }}} end of func CAnyPtr::toStr(...)
// ================================================================================================ //

// }}} ![ Class CAnyPtr Functional realization ]
// ================================================================================================ //


// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CANYPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
