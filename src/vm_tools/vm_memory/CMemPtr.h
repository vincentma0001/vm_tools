// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CMemPtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-07 18:38:36                                               == //
// ==   Modify Time          : 2020-11-11 20:15:17                                               == //
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
namespace vm
{

// ================================================================================================ //
// ==  Class CMemPtr : this class deal with memory buffer operation                              == //
// ------------------------------------------------------------------------------------------------ //
class CMemPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emRet : this enum define return value for class CMemPtr
    enum emRet
    // {{{
    {
        emSucess = 0,

        emError = vMaxsLong -1,
        emWarns = vMaxsLong -20
    };
    // }}} End of def enum emRet
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
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

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // Buffer's address
    void*  mpBuf;
    // Buffer's size
    size_t msztBufSize;

    // Error code
    long long mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // [ normal func ] {{{
    // Get string in buffer
    inline const tchar* c_str();
    //  Clear data in buffer
    inline void         clear();

    // Get buffer's size
    inline size_t       size ();
    // Get string's length in buffer
    inline size_t       len  ();
    // }}}

public:
    // Get buffer offset's address
    inline void*  At     ( const size_t csztBufOffset );

    // Set value in buffer
    inline void   Set    ( const int ciValue,                           const size_t csztBufOffset = 0 );
    // Set value in buffer
    inline void   Set    ( const int ciValue, const size_t csztDataLen, const size_t csztBufOffset = 0 );

    // Write a wchar_t to memory buffer
    inline bool Put     ( const wchar_t            cVal, const size_t csztBufOffset = 0 );
    // Write a char to memory buffer
    inline bool Put     ( const char               cVal, const size_t csztBufOffset = 0 );
    // Write a unsigned char to memory buffer
    inline bool Put     ( const unsigned char      cVal, const size_t csztBufOffset = 0 );
    // Write a short to memory buffer
    inline bool Put     ( const short              cVal, const size_t csztBufOffset = 0 );
    // Write a unsigned short to memory buffer
    inline bool Put     ( const unsigned short     cVal, const size_t csztBufOffset = 0 );
    // Write a int to memory buffer
    inline bool Put     ( const int                cVal, const size_t csztBufOffset = 0 );
    // Write a unsigned int to memory buffer
    inline bool Put     ( const unsigned int       cVal, const size_t csztBufOffset = 0 );
    // Write a long to memory buffer
    inline bool Put     ( const long               cVal, const size_t csztBufOffset = 0 );
    // Write a unsigned long to memory buffer
    inline bool Put     ( const unsigned long      cVal, const size_t csztBufOffset = 0 );
    // Write a long long to memory buffer
    inline bool Put     ( const long long          cVal, const size_t csztBufOffset = 0 );
    // Write a unsigned long long to memory buffer
    inline bool Put     ( const unsigned long long cVal, const size_t csztBufOffset = 0 );
    // Write a float to memory buffer
    inline bool Put     ( const float              cVal, const size_t csztBufOffset = 0 );
    // Write a double to memory buffer
    inline bool Put     ( const double             cVal, const size_t csztBufOffset = 0 );
    // Write a long double to memory buffer
    inline bool Put     ( const long double        cVal, const size_t csztBufOffset = 0 );

    // Get a wchar_t from memory buffer
    inline bool Get     ( wchar_t                  &Val, const size_t csztBufOffset = 0 );
    // Get a char from memory buffer
    inline bool Get     ( char                     &Val, const size_t csztBufOffset = 0 );
    // Get a unsigned char from memory buffer
    inline bool Get     ( unsigned char            &Val, const size_t csztBufOffset = 0 );
    // Get a short from memory buffer
    inline bool Get     ( short                    &Val, const size_t csztBufOffset = 0 );
    // Get a unsigned short from memory buffer
    inline bool Get     ( unsigned short           &Val, const size_t csztBufOffset = 0 );
    // Get a int from memory buffer
    inline bool Get     ( int                      &Val, const size_t csztBufOffset = 0 );
    // Get a unsigned int from memory buffer
    inline bool Get     ( unsigned int             &Val, const size_t csztBufOffset = 0 );
    // Get a long from memory buffer
    inline bool Get     ( long                     &Val, const size_t csztBufOffset = 0 );
    // Get a unsigned long from memory buffer
    inline bool Get     ( unsigned long            &Val, const size_t csztBufOffset = 0 );
    // Get a long long from memory buffer
    inline bool Get     ( long long                &Val, const size_t csztBufOffset = 0 );
    // Get a unsigned long long from memory buffer
    inline bool Get     ( unsigned long long       &Val, const size_t csztBufOffset = 0 );
    // Get a float from memory buffer
    inline bool Get     ( float                    &Val, const size_t csztBufOffset = 0 );
    // Get a double from memory buffer
    inline bool Get     ( double                   &Val, const size_t csztBufOffset = 0 );
    // Get a long double from memory buffer
    inline bool Get     ( long double              &Val, const size_t csztBufOffset = 0 );

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

};
// }}} ! [ class CMemPtr ]
// ================================================================================================ /

}; 
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
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
