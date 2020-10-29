// ================================================================================================ //
// ==                                                                                            == //
// ==                                       vm_util_str.h                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 19:59:49                                               == //
// ==   Modify Time          : 2020-10-29 10:34:17                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_UTIL_STR_H__
#define  __VM_UTIL_STR_H__


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  vm's utility string macro defines                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// [ Macro defines ] {{{

#ifndef    vStrZero
#   define vStrZero(szBuf)          vm::v_strzero(szBuf,vStrSizeof(szBuf))
#endif  // vStrZero

#ifndef    vStrSet
#   define vStrSet(szBuf, ciFlag)   vm::v_strset(szBuf,ciFlg,vStrSizeof(szBuf))
#endif  // vStrSet

#ifndef    vStrPosBegin
#   define vStrPosBegin             vMaxsInt
#endif  // vStrPosBegin

#ifndef    vStrPosEnded
#   define vStrPosEnded             vMaxsInt
#endif  // vStrPosEnded

// }}} ![ Macro defines ]
// ================================================================================================ //

// ================================================================================================ //
// ==  vm's utility string function defines                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// [ Function defines ] {{{

// Change string's alpha letter to upper
inline void v_toupper ( _vIO_ tchar* const pData );
// Change string's alpha letter to upper
inline void v_toupper ( _vIO_ tchar* const pData, _vIn_ const size_t csztDataLen );
// Change string's alpha letter to upper, and copy it to dst buffer
inline void v_toupper ( _vOt_ tchar* const pDst , _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztSrcLen );
// Change string's alpha letter to lower
inline void v_tolower ( _vIO_ tchar* const pData );
// Change string's alpha letter to lower
inline void v_tolower ( _vIO_ tchar* const pData, _vIn_ const size_t csztDataLen );
// Change string's alpha letter to lower, and copy it to dst buffer
inline void v_tolower ( _vOt_ tchar* const pDst , _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztSrcLen );

// Format string, and copy new string to dst buffer
inline int v_sprintf  ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_ ... );
// Format string, and copy new string to dst buffer
inline int v_vsprintf ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList );

// Set memory block to 0x00 from pBuf to pBuf+csztDataLen
inline void v_strzero ( _vIO_ tchar* const pBuf,                        _vIn_ const size_t csztDataLen );
// Set memory block to ciVal for pBuf to pBuf+csztDataLen-sizeof(tchar)
inline void v_strset  ( _vIO_ tchar* const pBuf, _vIn_ const int ciVal, _vIn_ const size_t csztDataLen );

// Search first ciVal from cpBuf order by left
inline const tchar* v_strchr  ( _vIn_ const tchar* const cpBuf, _vIn_ const int ciVal );
// Search first ciVal from cpBuf order by right
inline const tchar* v_strrchr ( _vIn_ const tchar* const cpBuf, _vIn_ const int ciVal );
// Search first cpSubStr in cpBuf
inline const tchar* v_strstr  ( _vIn_ const tchar* const cpBuf, _vIn_ const tchar* const cpSubStr );

// Cat src string to the end of dst string
inline tchar* v_strcat  ( _vIO_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc );
// Cat src string to the end of dst string, copy csztDataLen letters
inline tchar* v_strncat ( _vIO_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztDataLen );

// Copy data from pSrc to pDst
inline size_t v_strcpy  ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc );
// Copy data from cpSrc to pDst, with data len csztDataLen
inline size_t v_strncpy ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztDataLen );

// Decide pStr1 is equal with pStr2, case sensitive
inline bool v_strcmp_equl  ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2 );
// Decide pStr1 is more than pStr2, case sensitive
inline bool v_strcmp_more  ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2 );
// Decide pStr1 is less than pStr2, case sensitive
inline bool v_strcmp_less  ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2 );
// Decide pStr1 is equal with pStr2, compare csztDataLen letters
inline bool v_strncmp_equl ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2, _vIn_ const size_t csztDataLen );
// Decide pStr1 is more than pStr2, compare csztDataLen letters
inline bool v_strncmp_more ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2, _vIn_ const size_t csztDataLen );
// Decide pStr1 is less than pStr2, compare csztDataLen letters
inline bool v_strncmp_less ( _vIn_ const tchar* const pStr1, _vIn_ const tchar* const pStr2, _vIn_ const size_t csztDataLen );

// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( _vIO_ tchar* const pData );
// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( _vIO_ tchar* const pData, _vIn_ const size_t csztDataLen );
// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( _vOt_ tchar* const pDst , _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztSrcLen );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( _vIO_ tchar* const pData );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( _vIO_ tchar* const pData, _vIn_ const size_t csztDataLen );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( _vOt_ tchar* const pDst , _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztSrcLen );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( _vIO_ tchar* const pData );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( _vIO_ tchar* const pData, _vIn_ const size_t csztDataLen );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( _vOt_ tchar* const pDst , _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpSrc, _vIn_ const size_t csztSrcLen );

// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to src string buffer
inline size_t v_str_substr       ( _vIO_      tchar* const          pData,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to src string buffer
inline size_t v_str_substr       ( _vIO_      tchar* const          pData, _vIn_ const size_t         csztDataLen, 
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to dst string buffer
inline size_t v_str_substr       ( _vOt_      tchar* const          pDst , _vIn_ const size_t         csztDstSize,
                                   _vIn_ const tchar* const         cpSrc, _vIn_ const size_t         csztSrcLen ,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );

// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first ( _vIO_      tchar* const          pData,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first ( _vIO_      tchar* const          pData, _vIn_ const size_t         csztDataLen,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first ( _vOt_       tchar* const          pDst, _vIn_ const size_t         csztDstSize,
                                   _vIn_ const tchar* const         cpSrc, _vIn_ const size_t          csztSrcLen,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );

// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  ( _vIO_       tchar* const         pData,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  ( _vIO_       tchar* const         pData, _vIn_ const size_t         csztDataLen, 
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );
// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  ( _vOt_       tchar* const          pDst, _vIn_ const size_t         csztDstSize,
                                   _vIn_ const tchar* const          pSrc, _vIn_ const size_t          csztSrcLen,
                                   _vIn_ const int ciBFlag = vStrPosBegin, _vIn_ const int ciEFlag = vStrPosEnded );

// Convert errno value to string
inline size_t v_strerrno ( _vIn_ const long long cllErrCode, _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize );

// }}} ![ Function defines ]
// ================================================================================================ //

}
// }}} End of namespace vm
// ================================================================================================ //
// vm's utility string function realization :
#include "vm_util_str.h.inl"
// ================================================================================================ //


#endif // ! __VM_UTIL_STR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
