// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CCycBufPtr.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 11:11                                                  == //
// ==   Modify Time          : 2020-11-04 11:11                                                  == //
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
#include <vm_cfgs.h>
#include <vm_tools/vm_cstr.h>
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
// ==  Brief   : Write a char to cyc buffer
// ==  Return  : bool             - [O] true  - sucess
// ==                               [O] false - failed  
// ==  Params  : cVal             - [I] The letter need to write
inline bool vm::CCycBufPtr::Put( const tchar cVal )
// {{{
{
    size_t lsztVal      = sizeof(cVal);
    size_t lsztUnused   = SizeUnused();
    if( lsztVal > lsztUnused )
        return false;

    if( mpEndedPos > mpStartPos )
    {
        if( (mpEndedPos+lsztVal) < mpBufEnded )
        {
            *mpEndedPos = cVal;
            mpEndedPos  = mpEndedPos + lsztVal;
            msztLen     += lsztVal;
        }
        else if( (mpEndedPos+lsztVal) > mpBufEnded )
        {
            mpEndedPos  = const_cast<tchar*>(mpBufStart);
            *mpEndedPos = cVal;
            mpEndedPos  = mpEndedPos+lsztVal;
            msztLen     += lsztVal;
        }
        else
        {
            *mpEndedPos = cVal;
            mpEndedPos  = const_cast<tchar*>(mpBufStart);
            msztLen     += lsztVal;
        }
    }
    else if( mpEndedPos < mpStartPos )
    {
        *mpEndedPos = cVal;
        mpEndedPos  = mpEndedPos + lsztVal;
        msztLen     += lsztVal;
    }
    else
    {
        if( lsztUnused == 0 )
            return false;

        *mpEndedPos = cVal;
        msztLen     += lsztVal;
        if( (mpEndedPos+lsztVal)>=mpBufEnded )
        { mpEndedPos = const_cast<tchar*>(mpBufStart); }
        else
        { mpEndedPos  = mpEndedPos+lsztVal; }
    }

    return true;
}
// }}} end of func CCycBufPtr::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCycBufPtr::Get(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a letter from cyc buffer, and remove it form cyc buffer
// ==  Return  : bool             - [O] true  - success
// ==                                   false - failed
// ==  Params  : cVal             - [O] the letter buffer for get
inline bool vm::CCycBufPtr::Get( tchar &cVal )
// {{{
{
    size_t lsztVal      = sizeof(cVal);
    size_t lsztUsed     = SizeUsed();

    if( lsztVal > lsztUsed )
        return false;

    if( mpStartPos < mpEndedPos )
    {
        cVal        = *mpStartPos;
        *mpStartPos = 0;
        mpStartPos  = mpStartPos + lsztVal;
        msztLen     -= lsztVal;
    }
    else if( mpStartPos > mpEndedPos )
    {
        if( (mpStartPos+lsztVal) < mpBufEnded )
        {
            cVal        = *mpStartPos;
            *mpStartPos = 0;
            mpStartPos  = mpStartPos + lsztVal;
            msztLen     -= lsztVal;
        }
        else if( (mpStartPos+lsztVal) > mpBufEnded )
        {
            mpStartPos  = const_cast<tchar*>(mpBufStart);
            cVal        = *mpStartPos;
            *mpStartPos = 0;
            mpStartPos  = mpStartPos + lsztVal;
            msztLen     -= lsztVal;
        }
        else
        {
            cVal        = *mpStartPos;
            *mpStartPos = 0;
            mpStartPos  = const_cast<tchar*>(mpBufStart);
            msztLen     -= lsztVal;
        }
    }
    else
    {
        if( lsztUsed == 0 )
            return false;

        cVal        = *mpStartPos;
        *mpStartPos = 0;
        msztLen     -= lsztVal;
        if( (mpStartPos+lsztVal) >= mpBufEnded )
        { mpStartPos = const_cast<tchar*>(mpBufStart); }
        else
        { mpStartPos  = mpStartPos + lsztVal; }
    }

    return true;
}
// }}} end of func CCycBufPtr::Get(...)
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
