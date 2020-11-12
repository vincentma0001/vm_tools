// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CMemPtr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 08:25:48                                               == //
// ==   Modify Time          : 2020-11-12 09:59:38                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMEMPTR_H_INL__
#define  __CMEMPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_util/v_funcs_io.h>
#include "v_funcs_mem.h"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// ==  Class CMemPtr Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CMemPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemPtr::CMemPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CMemPtr::CMemPtr( void* const pBuf, const size_t csztBufSize )
                           : mpBuf(pBuf), msztBufSize(csztBufSize), mllErrCode(emRet::emSucess)
// {{{
{
}
// }}} End of func CMemPtr::CMemPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CMemPtr::CMemPtr()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CMemPtr::~CMemPtr(  )
// {{{
{
    mpBuf       = nullptr;
    msztBufSize = 0;
}
// }}} End of func CMemPtr::~CMemPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CMemPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CMemPtr::CMemPtr( const CMemPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CMemPtr::~CMemPtr()
// ================================================================================================ //

// }}} ![ Class CMemPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CMemPtr operator realization                                                        == //
// ================================================================================================ //
// [ Class CMemPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemPtr::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CMemPtr&         - [O] this object
inline vm::CMemPtr& vm::CMemPtr::operator = ( const CMemPtr &obj )
// {{{
{
    vm::v_memmove( mpBuf, msztBufSize, obj.mpBuf, obj.msztBufSize );
    return *this;
}
// }}} End of func CMemPtr::~CMemPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::operator *(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : void*            - [O] buffer's address
// ==  Params  : 
inline void* vm::CMemPtr::operator * (  )
// {{{
{
    return mpBuf;
}
// }}} end of func CMemPtr::operator *(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::operator [] (...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer offset's address
// ==  Return  : void*            - [O] Buffer addrsss
// ==  Params  : csztBufOffset    - [I] Offset in buffer
inline void* vm::CMemPtr::operator [] ( const size_t csztBufOffset )
// {{{
{
    // value of offset is invailed
    size_t lsztBufOffset = vMin( msztBufSize, csztBufOffset );

    // return offset's address
    return &mpBuf+lsztBufOffset;
}
// }}} end of func CMemPtr::operator [] (...)
// ================================================================================================ //

// }}} ![ Class CMemPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CMemPtr Functional realization                                                      == //
// ================================================================================================ //
// [ Class CMemPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemPtr::c_str(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get string in buffer
// ==  Return  : const tchar*     - [O] String's address
inline const tchar* vm::CMemPtr::c_str(  )
// {{{
{
    return (const tchar*)mpBuf;
}
// }}} end of func CMemPtr::c_str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::clear(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Clear data in buffer
// ==  Return  : void             - [O] Nothing for return
inline void vm::CMemPtr::clear(  )
// {{{
{
    vm::v_memzero( mpBuf, msztBufSize );
}
// }}} end of func CMemPtr::clear(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::size(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's size
// ==  Return  : size_t           - [O] Buffer's size
// ==  Params  : 
inline size_t vm::CMemPtr::size(  )
// {{{
{
    return msztBufSize;
}
// }}} end of func CMemPtr::size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::len(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get string's length in buffer
// ==  Return  : size_t           - [O] String's length
// ==  Params  : 
inline size_t vm::CMemPtr::len (  )
// {{{
{
    return vStrlen( (tchar*)mpBuf ); 
}
// }}} end of func CMemPtr::len(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::At (...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer offset's address
// ==  Return  : void*            - [O] Buffer addrsss
// ==  Params  : csztBufOffset    - [I] Offset in buffer
inline void* vm::CMemPtr::At ( const size_t csztBufOffset )
// {{{
{
    // value of offset is invailed
    size_t lsztBufOffset = vMin( msztBufSize, csztBufOffset );

    // return offset's address
    return &mpBuf+lsztBufOffset;
}
// }}} end of func CMemPtr::At(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Set (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set value in buffer
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : ciValue          - [I] New Value
// ==            csztBufOffset    - [I] Offset in buffer
inline void vm::CMemPtr::Set ( const int ciValue, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztDataLen = vMax( lsztBufLeft, 0 );

    // Set buffer to value 
    void*  lpBufPos    = &mpBuf + csztBufOffset;
    vm::v_memset( lpBufPos, ciValue, lsztDataLen );
}
// }}} end of func CMemPtr::Set (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Set (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set value in buffer
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : ciValue          - [I] New value
// ==            csztDataLen      - [I] New value's length
// ==            csztBufOffset    - [I] Offset in buffer
inline void vm::CMemPtr::Set ( const int ciValue, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );
    size_t lsztDataLen = vMin( lsztBufLen, csztDataLen );

    // Set buffer to value
    void*  lpBufPos    = &mpBuf + csztBufOffset;
    vm::v_memset( lpBufPos, ciValue, lsztDataLen );
}
// }}} end of func CMemPtr::Set (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr:::Put(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write tType object to memory buffer
// ==  Return  : bool             - [O] truc  - write sucess
// ==                                   false - write failed
// ==  Params  : cVal             - [I] tType object value
// ==            csztBufOffset    - [I] memory buffer offset
template< typename tType >
inline bool vm::CMemPtr::Put( const tType cVal, const size_t csztBufOffset )
// {{{
{
    size_t lszBufLeft = msztBufSize - csztBufOffset;
    if( lszBufLeft < sizeof(tType) )
    {
        mllErrCode = vMakeLLong( emRet::emErrNoEnoughBuf, 0 );
        return false;
    }

    size_t lsztCopied = CopyFm((void*)&cVal, sizeof(tType), csztBufOffset);
    if( lsztCopied != sizeof(tType) )
    {
        mllErrCode = vMakeLLong( emRet::emErrCopyFmFailed, errno );
        return false;
    }
    return true;
}
// }}} end of func CMemPtr:::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Get(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get tType object wchar_t from memory buffer
// ==  Return  : bool             - [O] true  - get sucess
// ==                                   false - get failed
// ==  Params  : Val              - [O] tType object buffer
// ==            csztBufOffset    - [I] memory buffer offset
template< typename tType >
inline bool vm::CMemPtr::Get( tType &Val, const size_t csztBufOffset )
// {{{
{
    size_t lszBufLeft = msztBufSize - csztBufOffset;
    if( lszBufLeft < sizeof(tType) )
    {
        mllErrCode = vMakeLLong( emRet::emErrNoEnoughData, 0 );
        return false;
    }

    size_t lsztCopied = CopyTo( (void*)&Val, sizeof(tType), sizeof(tType), csztBufOffset );
    if( lsztCopied != sizeof(tType) )
    {
        mllErrCode = vMakeLLong( emRet::emErrCopyToFailed, errno );
        return false;
    }
    return true;
}
// }}} end of func CMemPtr::Get(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::MoveFm(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Move data from src data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : cpSrc            - [I] Src data address
// ==            csztDataLen      - [I] Src data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::MoveFm ( const void* const cpSrc, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get data length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    // Copy data from src string
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memmove( lpBufPos, lsztBufLen, cpSrc, csztDataLen );
}
// }}} end of func CMemPtr::MoveFm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::MoveTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Move data to dst data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : pDst             - [I] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::MoveTo ( void* const pDst, const size_t csztDstSize, const size_t csztBufOffset )
// {{{
{
    // Get data length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztDataLen = vMin(lsztBufLeft,0);

    // Copy data to dst buf
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memmove( pDst, csztDstSize, lpBufPos, lsztDataLen );
}
// }}} end of func CMemPtr::MoveTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::MoveTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Move data to dst data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : pDst             - [I] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztDataLen      - [I] Data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::MoveTo ( void* const pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get data length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax(lsztBufLeft,0);
    size_t lsztDataLen = vMin(lsztBufLen,csztDataLen);

    // Copy data to dst buf
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memmove( pDst, csztDstSize, lpBufPos, lsztDataLen );
}
// }}} end of func CMemPtr::MoveTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CopyFm (...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data from src data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : cpSrc            - [I] Src data address
// ==            csztDataLen      - [I] Src data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CopyFm ( const void* const cpSrc, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    // Get buffer start address
    void*  lpBufPos    = &mpBuf + csztDataLen;

    // Copy data from src string
    return vm::v_memcpy( lpBufPos, lsztBufLen, cpSrc, csztDataLen );
}
// }}} end of func CMemPtr::CopyFm (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CopyTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data to dst data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : pDst             - [I] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CopyTo( void* const pDst, const size_t csztDstSize, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    // 复制数据
    void* lpBufPos = &mpBuf + csztBufOffset;
    return vm::v_memcpy( pDst, csztDstSize, lpBufPos, lsztBufLen );
}
// }}} end of func CMemPtr::CopyTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CopyTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data to dst data buffer
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : pDst             - [I] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztDataLen      - [I] Data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CopyTo( void* const pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );
    size_t lsztDataLen = vMin( lsztBufLen, csztDataLen );

    // 复制数据
    void* lpBufPos = &mpBuf + csztBufOffset;
    return vm::v_memcpy( pDst, csztDstSize, lpBufPos, lsztDataLen );
}
// }}} end of func CMemPtr::CopyTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CCopyFm(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data from src data buffer, until data length equal csztDataLen or meet ciFlag
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : ciFlag           - [I] Flag letter
// ==            cpSrc            - [I] Src string
// ==            csztDataLen      - [I] Data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CCopyFm( const int ciFlag, const void* const cpSrc, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    // 复制数据
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memccpy( lpBufPos, lsztBufLen, cpSrc, ciFlag, csztDataLen );
}
// }}} end of func CMemPtr::CCopyFm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CCopyTo(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data to dst data buffer, until data length equal csztDataLen or meet ciFlag
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : ciFlag           - [I] Flag letter
// ==            pDst             - [O] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CCopyTo( const int ciFlag, void* const pDst, const size_t csztDstSize, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    // Copy data to dst buffer
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memccpy( pDst, csztDstSize, lpBufPos, ciFlag, lsztBufLen );
}
// }}} end of func CMemPtr::CCopyTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::CCopyTo(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data to dst data buffer, until data length equal csztDataLen or meet ciFlag
// ==  Return  : size_t           - [O] Copied data length
// ==  Params  : ciFlag           - [I] Flag letter
// ==            pDst             - [O] Dst buffer's address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztDataLen      - [I] Data length
// ==            csztBufOffset    - [I] Offset in buffer
inline size_t vm::CMemPtr::CCopyTo( const int ciFlag, void* const pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    // Get buffer length
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );
    size_t lsztDataLen = vMin( lsztBufLen, csztDataLen );

    // Copy data to dst buffer
    void* lpBufPos     = &mpBuf + csztBufOffset;
    return vm::v_memccpy( pDst, csztDstSize, lpBufPos, ciFlag, lsztDataLen );
}
// }}} end of func CMemPtr::CCopyTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Cmp (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare data with cpData that length is csztDataLen, case sensitive.
// ==  Return  : bool             - [O] true  - for buffer data is equal with cpData
// ==                                   false - for buffer data isn't equal with cpData
// ==  Params  : cpData           - [I] Compare other part data
// ==            csztDataLen      - [I] data length
// ==            csztBufOffset    - [I] Offset in buffer
inline bool vm::CMemPtr::Cmp ( const void* const cpData, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    void*  lpBufPos = &mpBuf + csztBufOffset;
    return vm::v_memcmp_equl(lpBufPos, cpData, csztDataLen);
}
// }}} end of func CMemPtr::Cmp (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::iCmp (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare data with cpData that length is csztDataLen, cas insensitive
// ==  Return  : bool             - [O] true  - for buffer data is equal with cpData
// ==                                   false - for buffer data isn't equal with cpData
// ==  Params  : cpData           - [I] Compare other part data
// ==            csztDataLen      - [I] data length
// ==            csztBufOffset    - [I] Offset in buffer
inline bool vm::CMemPtr::iCmp ( const void* const cpData, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    void*  lpBufPos = &mpBuf + csztBufOffset;
    return vm::v_memicmp_equl(lpBufPos, cpData, csztDataLen);
}
// }}} end of func CMemPtr::iCmp (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Find (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find letter ciValue in bufferr from buffer beginning
// ==  Return  : void*            - [O] address - Letter ciValue's address
// ==                                   nullptr - Can't find letter ciValue
// ==  Params  : ciValue          - [I] Letter need to be finded
// ==            csztBufOffset    - [I] Offset in buffer
inline void* vm::CMemPtr::Find ( const int ciValue, const size_t csztBufOffset )
// {{{
{
    return Find( ciValue, msztBufSize, csztBufOffset );
}
// }}} end of func CMemPtr::Find (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Find(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find letter ciValue in buffer from buffer beginning, until search length csztLookforLen
// ==  Return  : void*            - [O] address - Letter ciValue's address
// ==                                   nullptr - Can't find letter ciValue
// ==  Params  : ciValue          - [I] Letter need to be finded
// ==            csztLookforLen   - [I] Letter number for search
// ==            csztBufOffset    - [I] Offset in buffer
inline void* vm::CMemPtr::Find ( const int ciValue, const size_t csztLookforLen, const size_t csztBufOffset )
// {{{
{
    mllErrCode = emRet::emSucess;

    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );
    size_t lsztDatalen = vMin( lsztBufLen, csztLookforLen );

    void* lpBufPos     = &mpBuf + csztBufOffset;
    void* lpEndPos     = v_memchr( lpBufPos, ciValue, lsztDatalen);
    if (lpEndPos == 0 )
    {
        mllErrCode = vMakeLLong( emRet::emWrnFindfailed, errno );
        return nullptr;
    }

    return lpEndPos;
}
// }}} end of func CMemPtr::Find(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : void*            - [O] String's address
// ==  Params  : cpFmt            - [I] String's format
// ==            ...              - [I] Format's paramters
inline void* vm::CMemPtr::Fmt ( const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    void* lpRet = Fmt(0, cpFmt, vList );
    va_end(vList);

    return lpRet;
}
// }}} end of func CMemPtr::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : void*            - [O] String's address
// ==  Params  : csztBufOffset    - [I] Buffer's offset ( string's start address )
// ==            cpFmt            - [I] String's format
// ==            ...              - [I] Format's paramters
inline void* vm::CMemPtr::Fmt ( const size_t csztBufOffset, const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    void* lpRet = Fmt(csztBufOffset, cpFmt, vList);
    va_end(vList);

    return lpRet;
}
// }}} end of func CMemPtr::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : void*            - [O] String's address
// ==  Params  : csztBufOffset    - [I] Buffer's address (string's start address)
// ==            cpFmt            - [I] String's format
// ==            vList            - [I] Format's paramters
inline void* vm::CMemPtr::Fmt ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList )
// {{{
{
    mllErrCode = emRet::emSucess;

    tchar* lpPos = (tchar*)mpBuf + csztBufOffset;
    size_t lsztBufLeft   = msztBufSize-csztBufOffset;
    lsztBufLeft = vMax( lsztBufLeft, 0 );

    int liRet = vm::v_sprintf(lpPos, lsztBufLeft, (tchar*)cpFmt, vList);
    if( liRet < 0 )
        mllErrCode = vMakeLLong( emRet::emErrFmtFailed, errno );

    return lpPos;
}
// }}} end of func CMemPtr::Fmt (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, return new string's length
// ==  Return  : int              - [O] New string's length
// ==  Params  : cpFmt            - [I] String's format
// ==            ...              - IX] Format's paramter
inline size_t vm::CMemPtr::Fmt2 ( const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    size_t lsztRet = Fmt2(0, cpFmt, vList);
    va_end(vList);

    return lsztRet;
}
// }}} end of func CMemPtr::Fmt2 (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, return new string's length
// ==  Return  : int              - [O] New string's length
// ==  Params  : csztBufOffset    - [I] Buffer's address (string's start address)
// ==            cpFmt            - [I] String's format
// ==            ...              - [I] Format's paramters
inline size_t vm::CMemPtr::Fmt2 ( const size_t csztBufOffset, const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    size_t lsztRet = Fmt2(csztBufOffset, cpFmt, vList);
    va_end(vList);

    return lsztRet;
}
// }}} end of func CMemPtr::Fmt2 (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, return new string's length
// ==  Return  : int              - [O] New string's length
// ==  Params  : csztBufOffset    - [I] Buffer's address (string's start address)
// ==            cpFmt            - [I] String's format
// ==            vList            - [I] Format's paramters
inline size_t vm::CMemPtr::Fmt2 ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList )
// {{{
{
    mllErrCode = emRet::emSucess;

    tchar* lpPos = (tchar*)mpBuf + csztBufOffset;
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    lsztBufLeft = vMax( lsztBufLeft, 0 );

    int liRet = vm::v_sprintf( lpPos, lsztBufLeft, cpFmt, vList );
    if( liRet < 0 )
    {
        mllErrCode = vMakeLLong( emRet::emErrFmtFailed, errno );
        liRet = 0;
    }

    return (size_t)(liRet);
}
// }}} end of func CMemPtr::Fmt2 (...)
// ================================================================================================ //

// }}} ![ Class CMemPtr Functional realization ]
// ================================================================================================ //


#endif // ! __CMEMPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
