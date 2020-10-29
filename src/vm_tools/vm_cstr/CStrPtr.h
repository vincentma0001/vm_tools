// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CStrPtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-07 18:38:04                                               == //
// ==   Modify Time          : 2020-10-29 13:15:43                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRPTR_H__
#define  __CSTRPTR_H__

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CStrPtr : this class deal with string's operations                                  == //
// ------------------------------------------------------------------------------------------------ //
class CStrPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CStrPtr( tchar* const pBuf, const size_t sztBufSize );
    // Destruct define
    inline virtual ~CStrPtr();

public:
    // Copy construct define
    inline CStrPtr( const CStrPtr &obj );
    // Assignment operation
    inline CStrPtr& operator = ( const CStrPtr &obj );

public:
    // Get buffer's address
    inline tchar* operator *  ();
    // Get buffer offset's address
    inline tchar* operator [] ( const size_t csztPos );

    // = operator
    inline CStrPtr& operator =  ( const tchar* const  cpStr );
    // < operator
    inline bool     operator <  ( const tchar* const  cpSrc );
    // > operator
    inline bool     operator >  ( const tchar* const  cpSrc );
    // == operator
    inline bool     operator == ( const tchar* const  cpSrc );
    // += operator
    inline CStrPtr& operator += ( const tchar          cVal );
    // += operator
    inline CStrPtr& operator += ( const tchar* const  cpSrc );
    // + operator
    inline CStrPtr& operator +  ( const tchar          cVal );
    // + operator
    inline CStrPtr& operator +  ( const tchar* const  cpSrc );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
protected:
    // String buffer's address
    tchar*   mpBuf;
    // String buffer's size
    size_t   msztBufSize;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // [ normal func ] {{{
    // Get buffer's address
    inline const tchar* c_str();
    // Get buffer's address
    inline       tchar* str  ();

    // Clean buffer's data
    inline void   clear ();

    // Get buffer's size
    inline size_t size  ();
    // Get string length in buffer
    inline size_t len   ();
    // }}}

public:
    // [ At func ] {{{
    // Get buffer offset's address
    inline tchar* At    ( const size_t csztBufOffset );
    // }}}

    // [ Cat func ] {{{
    // Cat cpSrc to buffer
    inline tchar* Cat   ( const tchar* cpSrc );
    // Cat cpSrc to buffer, src length is csztSrcLen
    inline tchar* Cat   ( const tchar* cpSrc, const size_t csztSrcLen );
    // }}}

    // [ Fmt func ] {{{
    // Format string
    inline tchar* Fmt   (                            const tchar* const cpFmt,            ...);
    // Format string
    inline tchar* Fmt   (const size_t csztBufOffset, const tchar* const cpFmt,            ...);
    // Format string
    inline tchar* Fmt   (const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList);

    // Format string
    inline int    Fmt2  (                            const tchar* const cpFmt,            ...);
    // Format string
    inline int    Fmt2  (const size_t csztBufOffset, const tchar* const cpFmt,            ...);
    // Format string
    inline int    Fmt2  (const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList);
    // }}}

    // [ Cmp func ] {{{
    // Compare buffer data with cpSrc. case sensitive
    inline bool   Cmp   ( const tchar* const cpSrc,                          const size_t csztBufOffset = 0 );
    // Compare buffer data with cpSrc, compare data length is csztDataLen. case sensitive
    inline bool   Cmp   ( const tchar* const cpSrc, const size_t csztSrcLen, const size_t csztBufOffset = 0 );
    // Compare buffer data with cpSrc. case insensitive
    inline bool   iCmp  ( const tchar* const cpSrc,                          const size_t csztBufOffset = 0 );
    // Compare buffer data with cpSrc, compare data length is csztDataLen. case insensitive
    inline bool   iCmp  ( const tchar* const cpSrc, const size_t csztSrcLen, const size_t csztBufOffset = 0 );
    // }}}

    // [ Sub func ] {{{
    // Get substring's address in buffer
    inline const tchar* Sub ( const tchar* const cpSubStr, const size_t csztBufOffset = 0 );
    // }}}

    // [ SubStr func ] {{{
    // Put substring in cpSrc between first letter ciBFlag with last letter ciEFlag.
    inline size_t SubStr   ( const tchar* const cpSrc, const int ciBFlag=vStrPosBegin, const int ciEFlag=vStrPosEnded, const size_t csztBufOffset=0 );
    // Put substring in cpSrc between first letter ciBFlag with first letter ciEFlag
    inline size_t SubStr_f ( const tchar* const cpSrc, const int ciBFlag=vStrPosBegin, const int ciEFlag=vStrPosEnded, const size_t csztBufOffset=0 );
    // Put substring in cpSrc between last letter ciBFlag with last letter ciEFlag
    inline size_t SubStr_l ( const tchar* const cpSrc, const int ciBFlag=vStrPosBegin, const int ciEFlag=vStrPosEnded, const size_t csztBufOffset=0 );
    // }}}

    // [ Find func ] {{{
    // Find first ciFlag in buffer
    inline const tchar* Find  ( const int ciFlag, const size_t csztBufOffset = 0 );
    // Find last  ciFlag in buffer
    inline const tchar* rFind ( const int ciFlag, const size_t csztBufOffset = 0 );
    // }}}

    // [ Copy func ] {{{
    // Copy cpSrc string to buffer
    inline size_t CopyFm( const tchar* cpSrc,                          const size_t csztBufOffset = 0 );
    // Copy cpSrc string to buffer, string length is csztSrcLen
    inline size_t CopyFm( const tchar* cpSrc, const size_t csztSrcLen, const size_t csztBufOffset     );

    // Copy buffer string to dst buffer
    inline size_t CopyTo( tchar* const  pDst, const size_t csztDstSize,                           const size_t csztBufOffset = 0 );
    // Copy buffer string to dst buffer, string length is csztDataLen
    inline size_t CopyTo( tchar* const  pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset = 0 );
    // }}}
// }}} ! Methods

};
// }}} ! [ class CStrPtr ]
// ================================================================================================ /

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CStrPtr.h.inl"
// ================================================================================================ //

#endif // ! __CSTRPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
