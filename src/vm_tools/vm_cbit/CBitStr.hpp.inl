// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CBitStr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 14:16:00                                               == //
// ==   Modify Time          : 2020-11-04 10:28:20                                               == //
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
#include <vm_tools/vm_cstr.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{

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
// ==  Brief   : Destruct define
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
        //printf("%d", *lpPos);
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
inline tchar* vm::CBitStr< CBitType >::toOct04( )
// {{{
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%04o"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toOct04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<tsztBufSize>::toOct08(...)                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by oct string
// ==  Return  : tchar*           - [O] oct string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toOct08(  )
// {{{
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%08o"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<tsztBufSize>::toOct08(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toDec(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by dec string
// ==  Return  : tchar*           - [O] dec string
// ==  Params  : 
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toDec(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%d"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toDec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toDec04(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by dec string
// ==  Return  : tchar*           - [O] dec string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toDec04(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%04d"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toDec04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toDec08(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by dec string
// ==  Return  : tchar*           - [O] dec string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toDec08(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%08d"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toDec08(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHex02(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHex02(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%02x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHex02(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHex04(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHex04(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%04x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHex04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHex08(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHex08(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%08x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHex08(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHeX02(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHeX02(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%02X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHeX02(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHeX04(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHeX04(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%04X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHeX04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::toHeX08(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::toHeX08(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("%08X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::toHeX08(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHex02(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHex02(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%02x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHex02(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHex04(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHex04(  )
// {{{
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%04x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHex04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHex08(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHex08(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%08x"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHex08(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHeX02(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHeX02(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%02X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHeX02(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHeX04(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHeX04(  )
// {{{ 
{
    vMemZero(mszBuf);
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%04X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHeX04(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::to0xHeX08(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output bit value by hex string, and start by 0x
// ==  Return  : tchar*           - [O] hex string
template< typename CBitType >
inline tchar* vm::CBitStr< CBitType >::to0xHeX08(  )
// {{{ 
{
    vMemZero(mszBuf); 
    int liRet = vm::v_sprintf(mszBuf, sizeof(mszBuf), vT("0x%08X"), mBitType.mBit);
    return mszBuf;
}
// }}} end of func CBitStr<CBitType>::to0xHeX08(...)
// ================================================================================================ //
/*
// ================================================================================================ //
// ==  Methord : CBitStr<CBitType>::Output(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output string by hex mode
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pHandle          - [I] Output handle, stdout stderr, *file
// ==            cpStr            - [I] String that need output
// ==            csztStrLen       - [I] string's length
template< typename CBitType >
template< size_t tsztLineLen, size_t tsztSpliteLen >
inline void vm::CBitStr< CBitType >::Output<tsztLineLen, tsztSpliteLen>( FILE* pHandle, const char* const cpStr, const size_t csztStrLen )
// {{{ 
{
    char*        lpPos              = cpStr;
    unsigned int luiLineCount       = 1;
    unsigned int luiSpliteCount     = 1;
    char  lszStrValue[tsztLineLen]  = {0x00};

    for( size_t i=1; i<=csztStrLen; i++, luiLineCount++, luiSpliteCount++ )
    {
        vm::CBit08              loBit(*lpPos);
        vm::CBitStr<vm::CBit08> loBitStr(loBit);

        fprintf( pHandle, "%s", loBitStr.toHeX02() );
        lszStrValue[luiLineCount-1]=*lpPos;
        lpPos++;

        if( luiSpliteCount>=tsztSpliteLen )
        {
            if( luiLineCount<tsztLineLen && i<csztStrLen )
            { fputs( " |", pHandle ); }
            luiSpliteCount = 0;
        }
        if( luiLineCount>=tsztLineLen )
        {
            fputs( " || ", pHandle );
            for( size_t i=0; i<tsztLineLen; i++ )
            {
                if( isprint( lszStrValue[i] ) )
                { fputc( lszStrValue[i], pHandle ); }
                else
                { fputc( '.', pHandle ); }
            }
            vMemZero( lszStrValue );
            fputc( '\n',pHandle );
            luiLineCount = 0;
            luiSpliteCount = 0;
            continue;
        }

        fputc( ' ', pHandle );
    }

    int liLeftCount = csztStrLen % tsztLineLen;
    int liSpaceNum  = (tsztLineLen-liLeftCount)*3;
    int liSpliteNun = (liSpaceNum/tsztSpliteLen)*2;
    if( liLeftCount != 0 )
    {
        for(size_t i=0;i<(size_t)(liSpaceNum+liSpliteNun);i++)
        { fputc( ' ', pHandle ); }
        fputs( " || ", pHandle );
        for( size_t i=0; i<tsztLineLen; i++ )
        {
            if( isprint( lszStrValue[i] ) )
            { fputc( lszStrValue[i], pHandle ); }
            else
            { fputc( '.', pHandle ); }
        }
        vMemZero( lszStrValue );
        fputc( '\n',pHandle );
    }
}
// }}} end of func CBitStr<CBitType>::Output(...)
// ================================================================================================ //
//*/


// }}} ![ Class CBitStr<CBitType> Functional realization ]
// ================================================================================================ //

// }}} ! Comment info
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
