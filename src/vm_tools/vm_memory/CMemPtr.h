// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CMemPtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-07 18:38:36                                               == //
// ==   Modify Time          : 2020-11-18 17:36:10                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMEMPTR_H__
#define  __CMEMPTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CMemPtr : this class deal with memory buffer operation
class CMemPtr
{ // {{{

// Typedefs  : {{{
public:
    // enum emRet : this enum define return value for class CMemPtr
    enum emRet
    // {{{
    {
        emSucess          = 0,

        emError           = vMaxsLong - 1,
        emErrCopyToFailed = emError   - 1,
        emErrCopyFmFailed = emError   - 2,
        emErrNoEnoughBuf  = emError   - 3,
        emErrNoEnoughData = emError   - 4,
        emErrFmtFailed    = emError   - 5,

        emWarns           = vMaxsLong - 20,
        emWrnFindfailed   = emWarns   - 1  
    };
    // }}} End of def enum emRet
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CMemPtr( void* const pBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CMemPtr();

private:
    // Copy construct define
    inline CMemPtr ( const CMemPtr &obj );
    // Assignment operation
    inline CMemPtr& operator = ( const CMemPtr &obj );

public:
    // Get buffer's address
    inline void*        operator *  ();
    // Get buffer offset's address
    inline void*        operator [] (const size_t csztPos);
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // Buffer's address
    void*            mpBuf;
    // Buffer's size
    size_t           msztBufSize;

    // Error code
    long long        mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Get string in buffer
    inline const tchar* c_str();
    //  Clear data in buffer
    inline void         clear();

    // Get buffer's size
    inline size_t       size ();
    // Get string's length in buffer
    inline size_t       len  ();

public:
    // Get buffer offset's address
    inline void*  At     ( const size_t csztBufOffset );

    // Set value in buffer
    inline void   Set    ( const int ciValue,                           const size_t csztBufOffset = 0 );
    // Set value in buffer
    inline void   Set    ( const int ciValue, const size_t csztDataLen, const size_t csztBufOffset = 0 );

    // Write tType object to memory buffer
    template< typename tType >
    inline bool Put     ( const tType            cVal, const size_t csztBufOffset = 0 );
    // Get tType object from memory buffer
    template< typename tType >
    inline bool Get     ( tType                  &Val, const size_t csztBufOffset = 0 );

    // Move data from src data buffer
    inline size_t MoveFm ( const void* const cpSrc,  const size_t csztDataLen,                           const size_t csztBufOffset = 0 );
    // Move data to dst data buffer
    inline size_t MoveTo (       void* const  pDst,  const size_t csztDstSize,                           const size_t csztBufOffset = 0 );
    // Nove data to dst data buffer
    inline size_t MoveTo (       void* const  pDst,  const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset = 0 );

    // Copy data from src data buffer
    inline size_t CopyFm ( const void* const cpSrc, const size_t csztDataLen,                            const size_t csztBufOffset = 0 );
    // Copy data to dst data buffer
    inline size_t CopyTo (       void* const  pDst, const size_t csztDstSize,                            const size_t csztBufOffset = 0 );
    // Copy data to dst data buffer
    inline size_t CopyTo (       void* const  pDst, const size_t csztDstSize, const size_t  csztDataLen, const size_t csztBufOffset = 0 );

    // Copy data from src data buffer, until data length equal csztDataLen or meet ciFlag
    inline size_t CCopyFm( const int ciFlag, const void* const cpSrc, const size_t csztDataLen,                           const size_t csztBufOffset = 0 );
    // Copy data to dst data buffer, until data length equal csztDataLen or meet ciFlag
    inline size_t CCopyTo( const int ciFlag,       void* const  pDst, const size_t csztDstSize,                           const size_t csztBufOffset = 0 );
    // Copy data to dst data buffer, until data length equal csztDataLen or meet ciFlag
    inline size_t CCopyTo( const int ciFlag,       void* const  pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset = 0 );

    // Compare data with cpData that length is csztDataLen, case sensitive.
    inline bool   Cmp    ( const void* const cpData, const size_t csztDataLen, const size_t csztBufOffset = 0 );
    // Compare date with cpData that length is csztDataLen, case insensitive.
    inline bool   iCmp   ( const void* const cpData, const size_t csztDataLen, const size_t csztBufOffset = 0 );

    // Find letter ciValue in buffer from buffer beginning
    inline void*  Find   ( const int ciValue,                              const size_t csztBufOffset = 0 );
    // Find letter ciValue in buffer from buffer beginning, until search length csztLookforLen
    inline void*  Find   ( const int ciValue, const size_t csztLookforLen, const size_t csztBufOffset = 0 );

    // Format string
    inline void*  Fmt    (                             const tchar* const cpFmt,            ... );
    // Format string
    inline void*  Fmt    ( const size_t csztBufOffset, const tchar* const cpFmt,            ... );
    // Format string
    inline void*  Fmt    ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList );

    // Format string, return new string's length
    inline size_t Fmt2   (                             const tchar* const cpFmt,            ... );
    // Format string, return new string's length
    inline size_t Fmt2   ( const size_t csztBufOffset, const tchar* const cpFmt,            ... );
    // Format string, return new string's length
    inline size_t Fmt2   ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList );
// }}} ! Methods

}; // }}} End of class CMemPtr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CMemPtr.h.inl"
// ================================================================================================ //


#endif // ! __CMEMPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
