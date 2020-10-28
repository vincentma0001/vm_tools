// ================================================================================================ //
// ==                                                                                            == //
// ==                                       vm_util_mem.h                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 20:54:57                                               == //
// ==   Modify Time          : 2020-10-28 12:44:54                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef __VM_UTIL_MEM_H__
#define __VM_UTIL_MEM_H__

// ================================================================================================ //
// using namespace vm : {{{
namespace vm {

// ================================================================================================ //
// == vm's utility memory macros defines :                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// [ Macros defines ] {{{
#ifndef    vMemZero
#   define vMemZero(szBuf)          vm::v_memzero(&szBuf,sizeof(szBuf))
#endif  // vMemZero

#ifndef    vMemSet
#   define vMemSet(szBuf, ciFlg)    vm::v_memset(&szBuf,ciFlg,sizeof(szBuf))
#endif  // vMemSet
// }}} ![ Macros defines ]
// ================================================================================================ //

// ================================================================================================ //
// ==  vm's utility memory function defines                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// [ Function defines ] {{{

// set memory value to 0x00 from pBuf to pBuf+csztDataLen
inline void  v_memzero   ( _vIO_ void* const pBuf,                          _vIn_ const size_t csztDataLen );
// set mem value
inline void  v_memset    ( _vIO_ void* const pBuf, _vIn_ const short csVal, _vIn_ const size_t csztDataLen );

// look for the first ciVal value from memory address pBuf to pBuf+csztLookforLen
inline void* v_memchr    ( _vIn_ void* const pBuf, _vIn_ const short csVal, _vIn_ const size_t csztLookforLen );

// move date from cpSrc tp pDst
inline size_t v_memmove  ( _vOt_ void* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const void* const cpSrc,                        _vIn_ const size_t csztDataLen );
// copy data from cpSrc to pDst
inline size_t v_memcpy   ( _vOt_ void* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const void* const cpSrc,                        _vIn_ const size_t csztDataLen );
// copy data from cpSrc to pDst until meet ciVal
inline size_t v_memccpy  ( _vOt_ void* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const void* const cpSrc, _vIn_ const int ciVal, _vIn_ const size_t csztDataLen );

// decide cpBuf1 is less than cpBuf2 or not. case sensitive
inline bool v_memcmp_less ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );
// decide cpBuf1 is more than cpBuf2 or not. case sensitive
inline bool v_memcmp_more ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );
// decide cpBuf1 is equal than cpBuf2 or not. case sensitive
inline bool v_memcmp_equl ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );

// decide cpBuf1 is less than cpBuf2 or not. case insensitive
inline bool v_memicmp_less ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );
// decide cpBuf1 is more than cpBuf2 or not. case insensitive
inline bool v_memicmp_more ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );
// decide cpBuf1 is equal than cpBuf2 or not. case insensitive
inline bool v_memicmp_equl ( _vIn_ const void* const cpBuf1, _vIn_ const void* const cpBuf2, _vIn_ const size_t csztDataLen );

// }}} ![ Function defines ]
// ================================================================================================ //

} // namespace vm }}}
// ================================================================================================ //
// vm's utility memory function realization :
#include "vm_util_mem.h.inl"
// ================================================================================================ //

#endif // __VM_UTIL_MEM_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
