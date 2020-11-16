// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CCycBufPtr.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 11:11                                                  == //
// ==   Modify Time          : 2020-11-16 18:00                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CCYCBUFPTR_H_INL__
#define  __CCYCBUFPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CMemPtr.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CCycBufPtr Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CCycBufPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CCycBufPtr::CCycBufPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CCycBufPtr::CCycBufPtr( const tchar* const cpBuf, const size_t csztBufSize )
    : mpBufStart ( cpBuf                     ), mpBufEnded( cpBuf+csztBufSize ), msztSize( csztBufSize ),
      mpStartPos ( const_cast<tchar*>(cpBuf) ), mpEndedPos( mpStartPos        ), msztLen ( 0           )
// {{{
{
}
// }}} End of func CCycBufPtr::CCycBufPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CCycBufPtr::CCycBufPtr()                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CCycBufPtr::~CCycBufPtr(  )
// {{{
{
}
// }}} End of func CCycBufPtr::~CCycBufPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::CCycBufPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CCycBufPtr::CCycBufPtr( const CCycBufPtr &obj )
    : mpBufStart ( obj.mpBufStart  ), mpBufEnded( obj.mpBufEnded ), msztSize( obj.msztSize ),
      mpStartPos ( obj.mpStartPos  ), mpEndedPos( obj.mpEndedPos ), msztLen ( obj.msztLen  )
// {{{
{
    *this = obj;
}
// }}} End of func CCycBufPtr::CCycBufPtr()
// ================================================================================================ //

// }}} ![ Class CCycBufPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CCycBufPtr operator realization                                                     == //
// ================================================================================================ //
// [ Class CCycBufPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CCycBufPtr::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CCycBufPtr&      - [O] this object
inline vm::CCycBufPtr& vm::CCycBufPtr::operator = ( const CCycBufPtr &obj )
// {{{
{
    return *this;
}
// }}} End of func CCycBufPtr::operator=()
// ================================================================================================ //

// }}} ![ Class CCycBufPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CCycBufPtr Functional realization                                                   == //
// ================================================================================================ //
// [ Class CCycBufPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Size(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer size
// ==  Return  : size_t           - [O] buffer size
inline size_t vm::CCycBufPtr::Size(  )
// {{{
{
    return msztSize;
}
// }}} end of func CCycBufPtr::Size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Reset(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Reset cyc buffer
// ==  Return  : void             - [O] Nothing for return
inline void vm::CCycBufPtr::Reset(  )
// {{{
{
    mpStartPos = const_cast<tchar*>(mpBufStart);
    mpEndedPos = const_cast<tchar*>(mpBufStart);
    msztLen    = 0;
    vm::v_memzero( mpStartPos, msztSize );
}
// }}} end of func CCycBufPtr::Reset(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::SizeUsed(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get used size in buffer
// ==  Return  : size_t           - [O] Used size in buffer
inline size_t vm::CCycBufPtr::SizeUsed(  )
// {{{
{
    return msztLen;
}
// }}} end of func CCycBufPtr::SizeUsed(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::SizeUnused(...)                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get unused size in buffer
// ==  Return  : size_t           - [O] Unused size in buffer
// ==  Params  : 
inline size_t vm::CCycBufPtr::SizeUnused(  )
// {{{
{
    return msztSize-msztLen;
}
// }}} end of func CCycBufPtr::SizeUnused(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::StartPos(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get offset between start pointer and buffer start pointer
// ==  Return  : unsigned int     - [O] Offset of start pointer
// ==  Params  : 
inline unsigned int vm::CCycBufPtr::StartPos(  )
// {{{
{
    unsigned int luiOffset = (unsigned int)(mpStartPos-mpBufStart);
    return luiOffset;
}
// }}} end of func CCycBufPtr::StartPos(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::EndedPos(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get offset between ended pointer and buffer start pointer
// ==  Return  : unsigned int     - [O] Offset of ended pointer
// ==  Params  : 
inline unsigned int vm::CCycBufPtr::EndedPos(  )
// {{{
{
    unsigned int luiOffset = (unsigned int)(mpEndedPos-mpBufStart);
    return luiOffset;
}
// }}} end of func CCycBufPtr::EndedPos(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Put(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write datas (length=csztDatalen) to cyc buffer
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed, lookfor mllErrCode for error info
// ==  Params  : pData            - [I] data start pointer
// ==            csztDataLen      - [I] data length
inline bool vm::CCycBufPtr::Put( const void* const cpData, const size_t csztDataLen )
// {{{
{
    // Check left buffer space for data
    size_t lsztVal      = csztDataLen;
    size_t lsztUnused   = SizeUnused();
    if( lsztVal > lsztUnused )
        return false;


    if( mpEndedPos > mpStartPos )
    {
      
        vDebug( vLine( vT("Case 1") ); )

        size_t lsztBufLenPart1 = mpBufEnded - mpEndedPos;
        vm::CMemPtr loMemPart1( mpEndedPos, lsztBufLenPart1 );

        size_t lsztCopied1 = loMemPart1.CopyFm( cpData, csztDataLen );
        if( lsztCopied1 < lsztBufLenPart1 )
        {
            msztLen     += lsztCopied1;
            mpEndedPos   = mpEndedPos+lsztCopied1;
            return true;
        }
        else if( lsztCopied1 == lsztBufLenPart1 )
        {
            msztLen     += lsztCopied1;
            mpEndedPos   = const_cast<char*>(mpBufStart);
            return true;
        }

        size_t lsztDataLeftLen = csztDataLen - lsztCopied1;
        size_t lsztBufLenPart2 = mpStartPos  - mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztBufLenPart2 );
        size_t     lsztCopied2 = loMemPart2.CopyFm( (void*)((char*)cpData+lsztCopied1), lsztDataLeftLen );

        msztLen += (lsztCopied1+lsztCopied2);
        mpEndedPos = (char*)(mpBufStart+lsztCopied2);
        return true;
    }
    else if( mpEndedPos < mpStartPos )
    {
        vm::CMemPtr loMem( mpEndedPos, lsztUnused );
        size_t lsztCopied = loMem.CopyFm( cpData, csztDataLen );

        msztLen   += lsztCopied;
        mpEndedPos = mpEndedPos+lsztCopied;
        return true;
    }
    else
    {
        if( lsztUnused == 0 )
            return false;

        size_t lsztBufLenPart1 = mpBufEnded - mpEndedPos;
        vm::CMemPtr loMemPart1( mpEndedPos, lsztBufLenPart1 );

        size_t lsztCopied1 = loMemPart1.CopyFm( cpData, csztDataLen );
        if( lsztCopied1 < lsztBufLenPart1 )
        {
            msztLen     += lsztCopied1;
            mpEndedPos   = mpEndedPos + lsztCopied1;
            return true;
        }
        else if( lsztCopied1 == lsztBufLenPart1 )
        {
            msztLen     += lsztCopied1;
            mpEndedPos   = const_cast<char*>(mpBufStart);
            return true;
        }

        size_t lsztDataLeftLen = csztDataLen - lsztCopied1;
        size_t lsztBufLenPart2 = mpStartPos  - mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztBufLenPart2 );
        size_t     lsztCopied2 = loMemPart2.CopyFm( (void*)((char*)cpData+lsztCopied1), lsztDataLeftLen );

        msztLen   += (lsztCopied1+lsztCopied2);
        mpEndedPos = (char*)(mpBufStart+lsztCopied2);
        return true;
    }

    return true;
}
// }}} end of func CCycBufPtr::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Put(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a tType object to cyc buffer
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed, lookfor mllErrCode for error info
// ==  Params  : tData            - [I] The object need to write
template<typename tType>
inline bool vm::CCycBufPtr::Put( const tType tData )
// {{{
{
    return Put( (void*)&tData, sizeof(tType) );
}
// }}} end of func CCycBufPtr::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Get(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get datas (length=csztDataLen) from cyc buffer
// ==  Return  : bool             - [O] true  - get success
// ==                                   false - get failed, lookfor mllErrcode for error code
// ==  Params  : pData            - [O] data buffer for get
// ==            csztDataLen      - [i] data buffer's size for get
inline bool vm::CCycBufPtr::Get( void* const pData, const size_t csztDataLen )
// {{{
{
    // Check have enough data for get
    size_t lsztVal      = csztDataLen;
    size_t lsztUsed     = SizeUsed();
    if( lsztVal > lsztUsed )
    {
        mllErrCode = vMakeLLong( emRet::emErrNoEnoughData, 0 );
        return false;
    }

    // Get data
    if( mpStartPos < mpEndedPos )
    {
        size_t lsztDataLenInBuf = mpEndedPos - mpStartPos;
        vm::CMemPtr loMem( mpStartPos, lsztDataLenInBuf );
        size_t lsztCopied = loMem.CopyTo( pData, csztDataLen );

#if       (vCycBufRemoveAfterGet==1)
        loMem.Set( 0x00, lsztCopied, 0 );
#endif // !(vCycBufRemoveAfterGet==1)

        msztLen    -= lsztCopied;
        mpStartPos  = mpStartPos+lsztCopied;

        return true;
    }
    else if( mpStartPos > mpEndedPos )
    {
        size_t lsztDataLenInBufPart1 = mpBufEnded - mpStartPos;
        vm::CMemPtr loMemPart1( mpStartPos, lsztDataLenInBufPart1 );
        size_t lsztCopied1 = loMemPart1.CopyTo( pData, csztDataLen );
        
        if( lsztCopied1 < csztDataLen )
        {

#if       (vCycBufRemoveAfterGet==1)
            loMemPart1.Set( 0x00, lsztCopied1,0 );
#endif // !(vCycBufRemoveAfterGet==1)

            msztLen  -= lsztCopied1;
            mpStartPos = mpStartPos+lsztCopied1;
            return true;
        }
        else if( lsztCopied1 == csztDataLen )
        {
#if       (vCycBufRemoveAfterGet==1)
            loMemPart1.Set( 0x00, lsztCopied1, 0 );
#endif // !(vCycBufRemoveAfterGet==1)

            msztLen  -= lsztCopied1;
            mpStartPos = const_cast<char*>(mpBufStart);
            return true;
        }

        size_t lsztDataLenInBufPart2 = mpEndedPos -mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztDataLenInBufPart2 );
        size_t lsztDataLeftLen = csztDataLen -lsztCopied1;
        size_t lsztCopied2 = loMemPart2.CopyTo( (void*)((char*)pData+lsztCopied1), lsztDataLeftLen );

#if       (vCycBufRemoveAfterGet==1)
            loMemPart2.Set( 0x00, lsztCopied2, 0 );
#endif // !(vCycBufRemoveAfterGet==1)
        
        msztLen -= (lsztCopied1+lsztCopied2);
        mpStartPos = const_cast<tchar*>(mpBufStart)+lsztCopied2;
        return true;
    }
    else
    {
        if( lsztUsed == 0 )
        {
            mllErrCode = vMakeLLong( emRet::emWrnBufIsFull, 0 );
            return false;
        }

        size_t lsztDataLenInBufPart1 = mpBufEnded - mpStartPos;
        vm::CMemPtr loMemPart1( mpStartPos, lsztDataLenInBufPart1 );
        size_t lsztCopied1 = loMemPart1.CopyTo( pData, csztDataLen );
        
        if( lsztCopied1 <= csztDataLen )
        {

#if       (vCycBufRemoveAfterGet==1)
            loMemPart1.Set( 0x00, lsztCopied1, 0 );
#endif // !(vCycBufRemoveAfterGet==1)

            msztLen  -= lsztCopied1;
            mpStartPos = mpStartPos+lsztCopied1;
            return true;
        }
        else if( lsztCopied1 == csztDataLen )
        {
#if       (vCycBufRemoveAfterGet==1)
            loMemPart1.Set( 0x00, lsztCopied1, 0 );
#endif // !(vCycBufRemoveAfterGet==1)

            msztLen  -= lsztCopied1;
            mpStartPos = const_cast<char*>(mpBufStart);
            return true;
        }

        size_t lsztDataLenInBufPart2 = mpEndedPos -mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztDataLenInBufPart2 );
        size_t lsztDataLeftLen = csztDataLen -lsztCopied1;
        size_t lsztCopied2 = loMemPart2.CopyTo( (void*)((char*)pData+lsztCopied1), lsztDataLeftLen );

#if       (vCycBufRemoveAfterGet==1)
            loMemPart2.Set( 0x00, lsztCopied2, 0 );
#endif // !(vCycBufRemoveAfterGet==1)
        
        msztLen -= (lsztCopied1+lsztCopied2);
        mpStartPos = const_cast<tchar*>(mpBufStart)+lsztCopied2;
        return true;
    }

    return true;
}
// }}} end of func CCycBufPtr::Get(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr<tType>::Get(...)                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get tType object from cyc buffer
// ==  Return  : bool             - [O] true  - get success
// ==                                   false - get failed, lookfor mllErrcode for error code
// ==  Params  : tData            - [O] tType object buffer
template< typename tType >
inline bool vm::CCycBufPtr::Get( tType &tData )
// {{{ 
{
    return Get( (void*)&tData, sizeof(tType) );
}
// }}} end of func CCycBufPtr<tType>::Get(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Peek(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Peek datas (length=csztDataLen) from cyc buffer
// ==  Return  : bool             - [O] true  - Peek success
// ==                                   false - Peek failed, lookfor mllErrcode for error code
// ==  Params  : pData            - [O] data buffer for get
// ==            csztDataLen      - [i] data buffer's size for get
inline bool vm::CCycBufPtr::Peek( void* const pData, const size_t csztDataLen )
// {{{
{
    // Check have enough data for get
    size_t lsztVal      = csztDataLen;
    size_t lsztUsed     = SizeUsed();
    if( lsztVal > lsztUsed )
    {
        mllErrCode = vMakeLLong( emRet::emErrNoEnoughData, 0 );
        return false;
    }

    // Get data
    if( mpStartPos < mpEndedPos )
    {
        size_t lsztDataLenInBuf = mpEndedPos - mpStartPos;
        vm::CMemPtr loMem( mpStartPos, lsztDataLenInBuf );
        size_t lsztCopied = loMem.CopyTo( pData, csztDataLen );
        if( lsztCopied != csztDataLen )
        {
            mllErrCode = vMakeLLong( emRet::emErrPeekFailed, errno );
            return false;
        }

        return true;
    }
    else if( mpStartPos > mpEndedPos )
    {
        size_t lsztDataLenInBufPart1 = mpBufEnded - mpStartPos;
        vm::CMemPtr loMemPart1( mpStartPos, lsztDataLenInBufPart1 );
        size_t lsztCopied1 = loMemPart1.CopyTo( pData, csztDataLen );

        if( lsztCopied1 <= csztDataLen )
            return true;

        size_t lsztDataLenInBufPart2 = mpEndedPos -mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztDataLenInBufPart2 );
        size_t lsztDataLeftLen = csztDataLen -lsztCopied1;
        size_t lsztCopied2 = loMemPart2.CopyTo( (void*)((char*)pData+lsztCopied1), lsztDataLeftLen );
        size_t lsztCopied = lsztCopied1 + lsztCopied2;
        if( lsztCopied != csztDataLen )
        {
            mllErrCode = vMakeLLong( emRet::emErrPeekFailed, errno );
            return false;
        }

        return true;
    }
    else
    {
        if( lsztUsed == 0 )
        {
            mllErrCode = vMakeLLong( emRet::emWrnBufIsFull, 0 );
            return false;
        }

        size_t lsztDataLenInBufPart1 = mpBufEnded - mpStartPos;
        vm::CMemPtr loMemPart1( mpStartPos, lsztDataLenInBufPart1 );
        size_t lsztCopied1 = loMemPart1.CopyTo( pData, csztDataLen );

        if( lsztCopied1 <= csztDataLen )
            return true;

        size_t lsztDataLenInBufPart2 = mpEndedPos -mpBufStart;
        vm::CMemPtr loMemPart2( (void*)mpBufStart, lsztDataLenInBufPart2 );
        size_t lsztDataLeftLen = csztDataLen -lsztCopied1;
        size_t lsztCopied2 = loMemPart2.CopyTo( (void*)((char*)pData+lsztCopied1), lsztDataLeftLen );
        size_t lsztCopied = lsztCopied1 + lsztCopied2;
        if( lsztCopied != csztDataLen )
        {
            mllErrCode = vMakeLLong( emRet::emErrPeekFailed, errno );
            return false;
        }

        return true;
    }

    return true;
}
// }}} end of func CCycBufPtr::Peek(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Peek(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Peek tType object from cyc buffer
// ==  Return  : bool             - [O] true  - get success
// ==                                   false - get failed, lookfor mllErrcode for error code
// ==  Params  : tData            - [O] tType object buffer
template<typename tType>
inline bool vm::CCycBufPtr::Peek( tType &tData )
// {{{
{
    return Peek( (void*)&tData, sizeof(tData) );
}
// }}} end of func CCycBufPtr::Peek(...)
// ================================================================================================ //

// }}} ![ Class CCycBufPtr Functional realization ]
// ================================================================================================ //


// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CCYCBUFPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
