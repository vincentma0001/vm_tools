// ================================================================================================ //
// ==                                                                                            == //
// ==                                       vm_util_str.h                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 19:59:49                                               == //
// ==   Modify Time          : 2020-10-07 12:02:17                                               == //
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
inline void v_toupper ( tchar* const pData );
// Change string's alpha letter to upper
inline void v_toupper ( tchar* const pData, const size_t csztDataLen );
// Change string's alpha letter to upper, and copy it to dst buffer
inline void v_toupper ( tchar* const pDst , const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen );
// Change string's alpha letter to lower
inline void v_tolower ( tchar* const pData );
// Change string's alpha letter to lower
inline void v_tolower ( tchar* const pData, const size_t csztDataLen );
// Change string's alpha letter to lower, and copy it to dst buffer
inline void v_tolower ( tchar* const pDst , const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen );

// Format string, and copy new string to dst buffer
inline int v_sprintf  ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpFmt, ... );
// Format string, and copy new string to dst buffer
inline int v_vsprintf ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpFmt, va_list& vList );

// Set memory block to 0x00 from pBuf to pBuf+csztDataLen
inline void v_strzero ( tchar* const pBuf,                  const size_t csztDataLen );
// Set memory block to ciVal for pBuf to pBuf+csztDataLen-sizeof(tchar)
inline void v_strset  ( tchar* const pBuf, const int ciVal, const size_t csztDataLen );

// Search first ciVal from cpBuf order by left
inline const tchar* v_strchr  ( const tchar* const cpBuf, const int ciVal );
// Search first ciVal from cpBuf order by right
inline const tchar* v_strrchr ( const tchar* const cpBuf, const int ciVal );
// Search first cpSubStr in cpBuf
inline const tchar* v_strstr  ( const tchar* const cpBuf, const tchar* const cpSubStr );

// Cat src string to the end of dst string
inline tchar* v_strcat  ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc );
// Cat src string to the end of dst string, copy csztDataLen letters
inline tchar* v_strncat ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztDataLen );

// Copy data from pSrc to pDst
inline size_t v_strcpy  ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc );
// Copy data from cpSrc to pDst, with data len csztDataLen
inline size_t v_strncpy ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztDataLen );

// Decide pStr1 is equal with pStr2, case sensitive
inline bool v_strcmp_equl  ( const tchar* const pStr1, const tchar* const pStr2 );
// Decide pStr1 is more than pStr2, case sensitive
inline bool v_strcmp_more  ( const tchar* const pStr1, const tchar* const pStr2 );
// Decide pStr1 is less than pStr2, case sensitive
inline bool v_strcmp_less  ( const tchar* const pStr1, const tchar* const pStr2 );
// Decide pStr1 is equal with pStr2, compare csztDataLen letters
inline bool v_strncmp_equl ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen );
// Decide pStr1 is more than pStr2, compare csztDataLen letters
inline bool v_strncmp_more ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen );
// Decide pStr1 is less than pStr2, compare csztDataLen letters
inline bool v_strncmp_less ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen );

// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( tchar* const pData );
// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( tchar* const pData, const size_t csztDataLen );
// Trim string head and tail's space char(' ','\n','\t')
inline size_t v_strtrim       ( tchar* const pDst , const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( tchar* const pData );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( tchar* const pData, const size_t csztDataLen );
// Trim string head's space char(' ', '\n', '\t')
inline size_t v_strtrim_left  ( tchar* const pDst , const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( tchar* const pData );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( tchar* const pData, const size_t csztDataLen );
// Trim string tail's space char(' ','\n','\t')
inline size_t v_strtrim_right ( tchar* const pDst , const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen );

// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to src string buffer
inline size_t v_str_substr       (       tchar* const         pData,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to src string buffer
inline size_t v_str_substr       (       tchar* const         pData, const size_t         csztDataLen, 
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search substr that begin with char cibflag and with cieflag in src string, and copy substr to dst string buffer
inline size_t v_str_substr       (       tchar* const         pDst , const size_t         csztDstSize,
                                   const tchar* const         cpSrc, const size_t         csztSrcLen ,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );

// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first (       tchar* const         pData,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first (       tchar* const         pData, const size_t         csztDataLen,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search the first substr with begin char ciBFlag end char ciEFlag in src string, and copy it to data buffer.
inline size_t v_str_substr_first (       tchar* const          pDst, const size_t         csztDstSize,
                                   const tchar* const         cpSrc, const size_t          csztSrcLen,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );

// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  (       tchar* const         pData,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  (       tchar* const         pData, const size_t         csztDataLen, 
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );
// Search the last substr with begin char ciBFlag end char ciEFlag in src string, and copy it to dst buffer
inline size_t v_str_substr_last  (       tchar* const          pDst, const size_t         csztDstSize,
                                   const tchar* const          pSrc, const size_t          csztSrcLen,
                                   const int ciBFlag = vStrPosBegin, const int ciEFlag = vStrPosEnded );

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
