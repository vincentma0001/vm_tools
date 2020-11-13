// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CPrFmt.hpp.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 10:18                                                  == //
// ==   Modify Time          : 2020-11-12 10:18                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CPRFMT_HPP_INL__
#define  __CPRFMT_HPP_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "vm_tools/vm_string/v_funcs_str.h"
#include "vm_tools/vm_util/CPrFmt.hpp"
#include <vm_cfgs.h>
#include <vm_tools/vm_memory/v_funcs_mem.h>
#include <vm_tools/vm_util/v_funcs_io.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{

// ================================================================================================ //
// ==  Class CPrFmt<tsztBufSize> Construct && Destruct realization                               == //
// ================================================================================================ //
// [ Class CPrFmt<tsztBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::CPrFmt()                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tsztBufSize >
inline vm::CPrFmt< tsztBufSize >::CPrFmt(  ) : mszBuf{0x00}
// {{{
{
}
// }}} End of func CPrFmt<tsztBufSize>::CPrFmt()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CPrFmt<tsztBufSize>::~CPrFmt()                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tsztBufSize >
inline vm::CPrFmt< tsztBufSize >::~CPrFmt(  )
// {{{
{
}
// }}} End of func CPrFmt<tsztBufSize>::~CPrFmt()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::CPrFmt( const CPrFmt &obj )                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tsztBufSize >
inline vm::CPrFmt< tsztBufSize >::CPrFmt( const CPrFmt &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CPrFmt<tsztBufSize>::CPrFmt()
// ================================================================================================ //

// }}} ![ Class CPrFmt<tsztBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CPrFmt<tsztBufSize> operator realization                                            == //
// ================================================================================================ //
// [ Class CPrFmt<tsztBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::operator = ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CPrFmt<tsztBufSize>& - [O] this object
template< size_t tsztBufSize >
inline vm::CPrFmt< tsztBufSize >& vm::CPrFmt< tsztBufSize >::operator = ( const CPrFmt &obj )
// {{{
{
    return *this;
}
// }}} End of func CPrFmt<tsztBufSize>::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::operator*(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get PrFmt value
// ==  Return  : tchar*           - [O] PrFmt value
template< size_t tsztBufSize >
inline tchar* vm::CPrFmt< tsztBufSize >::operator * ( )
// {{{ 
{
    return mszBuf;
}
// }}} end of func CPrFmt<tsztBufSize>::operator*(...)
// ================================================================================================ //

// }}} ![ Class CPrFmt<tsztBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CPrFmt<tsztBufSize> Functional realization                                          == //
// ================================================================================================ //
// [ Class CPrFmt<tsztBufSize> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Size(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get Buffer size in CPrFmt
// ==  Return  : size_t           - [O] Buffer size
template< size_t tsztBufSize >
inline size_t vm::CPrFmt< tsztBufSize >::Size( void )
// {{{ 
{
    return sizeof(mszBuf);
}
// }}} end of func CPrFmt<tsztBufSize>::Size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Leng(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get string length in CPrFmt buffer
// ==  Return  : size_t           - [O] String length
template< size_t tsztBufSize >
inline size_t vm::CPrFmt< tsztBufSize >::Len( void )
// {{{ 
{
    return vStrlen(mszBuf);
}
// }}} end of func CPrFmt<tsztBufSize>::Leng(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Str(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for string
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Str( const size_t csztWidth, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('s');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Char(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Char( const size_t csztWidth, const bool bFillZero, const bool bLeft)
// {{{ 
{
    tchar lszBuf[tsztBufSize] = {0x00};
    size_t lsztOffset = 0;

    lszBuf[lsztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            lszBuf[lsztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            lszBuf[lsztOffset++] = vT('0');
        }

        tchar* lpPos = lszBuf+lsztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('d');

    if( msztOffset+lsztOffset <= tsztBufSize-1 )
        vm::v_strcpy( mszBuf+msztOffset, tsztBufSize-msztOffset, lszBuf, lsztOffset );

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Char(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::UChar(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for unsigned char
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt<tsztBufSize>::UChar( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('h');
    mszBuf[msztOffset++] = vT('h');
    mszBuf[msztOffset++] = vT('u');

    return *this;
};
// }}} end of func CPrFmt<tsztBufSize>::UChar(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Short(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for short
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Short( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
            
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('h');
    mszBuf[msztOffset++] = vT('d');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Short(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::UShort(...)                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for unsigned short
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::UShort( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('h');
    mszBuf[msztOffset++] = vT('u');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::UShort(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Int(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for int
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Int( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('d');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Int(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::UInt(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for unsigned int
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::UInt( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('u');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::UInt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Long(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for long
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Long( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('d');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Long(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::ULong(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for unsigned long
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::ULong( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('u');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::ULong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::LLong(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for long long
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::LLong( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('d');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::LLong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::ULLong(...)                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for unsigned long long
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::ULLong( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('l');
    mszBuf[msztOffset++] = vT('u');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::ULLong(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::TSize(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for size_t
// ==  Return  : CPrFmt&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bFillZero=false  - [I] output with zero for empty space
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::TSize( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            mszBuf[msztOffset++] = vT('-');
        }

        if( bFillZero == true )
        {
            mszBuf[msztOffset++] = vT('0');
        }

        tchar* lpPos = mszBuf+msztOffset;
        vm::v_sprintf( lpPos, (tsztBufSize-msztOffset), vT("%zu"), csztWidth );
        msztOffset += vStrlen(lpPos);
    }

    mszBuf[msztOffset++] = vT('z');
    mszBuf[msztOffset++] = vT('d');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::TSize(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Float(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for float 
// ==  Return  : CPrFmt&          - [O] this object
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Float(  )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');
    mszBuf[msztOffset++] = vT('f');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Float(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::Double(...)                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for float 
// ==  Return  : CPrFmt&          - [O] this object
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::Double(  )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');
    mszBuf[msztOffset++] = vT('f');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::Double(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPrFmt<tsztBufSize>::LDouble(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for float 
// ==  Return  : CPrFmt&          - [O] this object
template< size_t tsztBufSize >
inline vm::CPrFmt<tsztBufSize>& vm::CPrFmt< tsztBufSize >::LDouble(  )
// {{{ 
{
    vMemZero(mszBuf);

    mszBuf[msztOffset++] = vT('%');
    mszBuf[msztOffset++] = vT('L');
    mszBuf[msztOffset++] = vT('f');

    return *this;
}
// }}} end of func CPrFmt<tsztBufSize>::LDouble(...)
// ================================================================================================ //


// }}} ![ Class CPrFmt<tsztBufSize> Functional realization ]
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CPRFMT_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
