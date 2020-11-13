// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CStrFmtPtr.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-13 09:06                                                  == //
// ==   Modify Time          : 2020-11-13 09:06                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRFMTPTR_H_INL__
#define  __CSTRFMTPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "vm_tools/vm_string/CStrFmtPtr.h"
#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CStrFmtPtr Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CStrFmtPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::CStrFmtPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CStrFmtPtr::CStrFmtPtr( _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize )
    : mpBuf(pBuf), msztBufSize(csztBufSize), msztOffset(0)
// {{{
{
}
// }}} End of func CStrFmtPtr::CStrFmtPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::CStrFmtPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CStrFmtPtr::CStrFmtPtr( const CStrFmtPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CStrFmtPtr::CStrFmtPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::~CStrFmtPtr(...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CStrFmtPtr::~CStrFmtPtr(  )
// {{{
{
}
// }}} end of func CStrFmtPtr::~CStrFmtPtr(...)
// ================================================================================================ //

// }}} ![ Class CStrFmtPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrFmtPtr operator realization                                                     == //
// ================================================================================================ //
// [ Class CStrFmtPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CStrFmtPtr&      - [O] this object
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator = ( const CStrFmtPtr &obj )
// {{{
{
    return *this;
}
// }}} End of func CStrFmtPtr::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator * (...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : string pointer in buffer
// ==  Return  : tchar*           - [O] string pointer
inline tchar* vm::CStrFmtPtr::operator * ( void )
// {{{
{
    return mpBuf;
}
// }}} end of func CStrFmtPtr::operator * (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator () (...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : add string to buffer
// ==  Return  : CStrFmtPtr&      - [O] this object
// ==  Params  : cpStr            - [I] string's pointer
// ==            csztStrLen       - [I] string's length
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator () ( const tchar* const cpStr, const size_t csztStrLen )
// {{{
{
    return str( cpStr, csztStrLen );
}
// }}} end of func CStrFmtPtr::operator () (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator () (...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy string to buffer
// ==  Return  : CStrFmtPtr&      - [O] this object
// ==  Params  : cpStr            - [I] string need to be copy
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator () ( const tchar* const cpStr )
// {{{
{
    return str( cpStr );
}
// }}} end of func CStrFmtPtr::operator () (...)
// ================================================================================================ //

// }}} ![ Class CStrFmtPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrFmtPtr Functional realization                                                   == //
// ================================================================================================ //
// [ Class CStrFmtPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::c_str(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : const tchar*     - [O] Buffer's address
inline const tchar* vm::CStrFmtPtr::cs_str( void )
// {{{
{
    return (const tchar*)mpBuf;
}
// }}} end of func CStrFmtPtr::c_str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::str(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : tchar*           - [O] Buffer's address
inline tchar* vm::CStrFmtPtr::s_str( void )
// {{{
{
    return mpBuf;
}
// }}} end of func CStrFmtPtr::str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::reset(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Clean buffer's data
// ==  Return  : void             - [O] Nothing for return
inline void vm::CStrFmtPtr::reset( void )
// {{{
{
    vm::v_memzero( mpBuf, msztBufSize );
    msztOffset = 0;
    mllErrCode = emRet::emSucess;
}
// }}} end of func CStrFmtPtr::reset(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::size(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's size
// ==  Return  : size_t           - [O] Buffer's size
inline size_t vm::CStrFmtPtr::size( void )
// {{{
{
    return msztBufSize;
}
// }}} end of func CStrFmtPtr::size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::len(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get string's length in buffer
// ==  Return  : size_t           - [O] String's length in buffer
inline size_t vm::CStrFmtPtr::len( void )
// {{{
{
    return vStrlen( mpBuf );
}
// }}} end of func CStrFmtPtr::len(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr<tsztTmpBufSize>::str(...)                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a string to buffer
// ==  Return  : vm::CStrFmtPtr&  - [O] this object 
// ==  Params  : cpStr            - [I] put in string
inline vm::CStrFmtPtr& vm::CStrFmtPtr::str( const tchar* const cpStr )
// {{{ 
{
    size_t lsztStrlen = vStrlen( cpStr );
    return str( cpStr, lsztStrlen );
}
// }}} end of func CStrFmtPtr<tsztTmpBufSize>::str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr<tsztTmpBufSize>::str(...)                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a string to buffer
// ==  Return  : vm::CStrFmtPtr&  - [O] this object
// ==  Params  : cpStr            - [I] put in string
// ==            csztStrLen       - [I] string's length
inline vm::CStrFmtPtr& vm::CStrFmtPtr::str( const tchar* const cpStr, const size_t csztStrLen )
// {{{ 
{
    // prepare environment
    mllErrCode = emRet::emSucess;

    // check buffer size
    size_t lsztBufLeftLen = msztBufSize - msztOffset;
    if( lsztBufLeftLen < csztStrLen )
    {
        mllErrCode = vMakeLLong( emRet::emErrUnEnoughBuf, 0 );
        return *this;
    } // end of if( lsztBufLeftLen ...

    // copy string data to buffer
    tchar* lpPos = mpBuf+msztOffset;
    size_t lsztRet = vm::v_strncpy( lpPos, lsztBufLeftLen, cpStr, csztStrLen );
    if( lsztRet < 0 )
    {
        mllErrCode = vMakeLLong( emRet::emErrCopyFailed, errno );
        return *this;
    }

    // reset offset && return
    msztOffset += lsztRet;
    return *this;
}
// }}} end of func CStrFmtPtr<tsztTmpBufSize>::str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPre::fmt_str(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CStrFmtPtr&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztTmpBufSize >
inline vm::CStrFmtPtr& vm::CStrFmtPtr::fmt_str( const size_t csztWidth, const bool bLeft )
// {{{ 
{
    tchar lszBuf[tsztTmpBufSize] = {0x00};
    size_t lsztOffset = 0;

    lszBuf[lsztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            lszBuf[lsztOffset++] = vT('-');
        }

        tchar* lpPos = lszBuf+lsztOffset;
        vm::v_sprintf( lpPos, (tsztTmpBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('s');

    return str( lszBuf, lsztOffset );
}
// }}} end of func CStrFmtPtr::fmt_str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPre::fmt_c(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CStrFmtPtr&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztTmpBufSize >
inline vm::CStrFmtPtr &vm::CStrFmtPtr::fmt_c( const size_t csztWidth, const bool bLeft )
// {{{ 
{
    tchar lszBuf[tsztTmpBufSize] = {0x00};
    size_t lsztOffset = 0;

    lszBuf[lsztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            lszBuf[lsztOffset++] = vT('-');
        }

        tchar* lpPos = lszBuf+lsztOffset;
        vm::v_sprintf( lpPos, (tsztTmpBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('c');

    return str( lszBuf, lsztOffset );
}
// }}} end of func CStrFmtPtr::fmt_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPre::fmt_uc(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CStrFmtPtr&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztTmpBufSize >
inline vm::CStrFmtPtr& vm::CStrFmtPtr::fmt_uc( const size_t csztWidth, const bool bLeft )
// {{{ 
{
    tchar lszBuf[tsztTmpBufSize] = {0x00};
    size_t lsztOffset = 0;

    lszBuf[lsztOffset++] = vT('%');

    if( csztWidth != 0 )
    {
        if( bLeft == true )
        {
            lszBuf[lsztOffset++] = vT('-');
        }

        tchar* lpPos = lszBuf+lsztOffset;
        vm::v_sprintf( lpPos, (tsztTmpBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('c');

    return str( lszBuf, lsztOffset );
}
// }}} end of func CStrFmtPtr::fmt_uc(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPre::fmt_cn(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CStrFmtPtr&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztTmpBufSize >
inline vm::CStrFmtPtr&vm::CStrFmtPtr::fmt_cn( const size_t csztWidth,  const bool bFillZero, const bool bLeft )
// {{{ 
{
    tchar lszBuf[tsztTmpBufSize] = {0x00};
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
        vm::v_sprintf( lpPos, (tsztTmpBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('d');

    return str( lszBuf, lsztOffset );
}
// }}} end of func CStrFmtPtr::fmt_cn(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPre::fmt_ucn(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a print format for char
// ==  Return  : CStrFmtPtr&          - [O] this object
// ==  Params  : csztWidth=0      - [I] output width
// ==            bLeft=false      - [I] output Left-justify or not, default is not
template< size_t tsztTmpBufSize >
inline vm::CStrFmtPtr&vm::CStrFmtPtr::fmt_ucn( const size_t csztWidth, const bool bFillZero, const bool bLeft )
// {{{ 
{
    tchar lszBuf[tsztTmpBufSize] = {0x00};
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
        vm::v_sprintf( lpPos, (tsztTmpBufSize-lsztOffset), vT("%zu"), csztWidth );
        lsztOffset += vStrlen(lpPos);
    }

    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('h');
    lszBuf[lsztOffset++] = vT('u');

    return str( lszBuf, lsztOffset );
}
// }}} end of func CStrFmtPtr::fmt_ucn(...)
// ================================================================================================ //




// }}} ![ Class CStrFmtPtr Functional realization ]
// ================================================================================================ //


// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CSTRFMTPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
