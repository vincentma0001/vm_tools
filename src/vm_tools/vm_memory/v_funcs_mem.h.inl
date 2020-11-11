// ================================================================================================ //
// ==                                                                                            == //
// ==                                      v_funcs_mem.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 21:29:54                                               == //
// ==   Modify Time          : 2020-11-05 09:05:58                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef   _V_FUNC_MEM_H_INL__
#define   _V_FUNC_MEM_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}

// ================================================================================================ //
// ==  Methord : vm::v_memzero(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : set memory value to 0x00 from pBuf to pBuf+csztDataLen
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pBuf             - [O] memory start address
// ==            csztDataLen      - [I] data length
inline void vm::v_memzero ( void* const pBuf, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_(vT("v_memzero()"), pBuf);
    ::memset(pBuf, 0x00, csztDataLen);
} // }}} end of func vm::v_memzero(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memset(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : set memory value to ciVal from pBuf to pBuf+csztDataLen
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pBuf             - [O] memory start address
// ==            csVal            - [I] value will been setting
// ==            csztDataLen      - [I] data length
inline void vm::v_memset ( void* const pBuf, const short csVal, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_(vT("v_memset()"), pBuf);
    ::memset(pBuf, csVal, csztDataLen);
} // }}} end of func vm::v_memset(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memchr(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : look for the first ciVal value from memory address pBuf to pBuf+csztLookforLen
// ==  Return  : void*            - [O] nullptr     for can't find
// ==                                   not nullptr for memory address
// ==  Params  : cpBuf            - [I] memory start address 
// ==            csVal            - [I] the value need to be fined
// ==            csztLookforLen   - [I] the data len need to be fined 
inline void* vm::v_memchr ( void* const pBuf, const short csVal, const size_t csztLookforLen )
// {{{
{
    // verify input paramters
    _VERIFY_(vT("v_memchr()"), pBuf);

    return vMemchr((tchar* const)pBuf, csVal, csztLookforLen);
} // }}} end of func vm::v_memchr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memmove(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : move memory data from buf cpSrc to buf pDst.
// ==            this function can move data from it self
// ==  Return  : size_t           - [O] the data len has been moved
// ==                                   0 for error
// ==  Params  : pDst             - [O] Dst address 
// ==            csztDstSize      - [I] Dst buf len 
// ==            cpSrc            - [I] source buf address
// ==            csztDataLen      - [I] the data len need to be moved
size_t vm::v_memmove ( void* const pDst, const size_t csztDstSize, const void* const cpSrc, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memmove()"), pDst, cpSrc);

    // reset data len need to been moved
    size_t lsztDatalen = vMin(csztDstSize, csztDataLen);

    // move data
#if defined (_MSC_VER) && (_MSC_VER > 1300)
    errno_t loRet = vMemmove_s((tchar* const)pDst, csztDstSize, (const tchar* const)cpSrc, lsztDatalen);
    if (  loRet != 0  ) return 0;
#else
    void* lpEnd = vMemmove((tchar* const)pDst, (const tchar* const)cpSrc, lsztDatalen);
    if ( lpEnd == nullptr ) return 0;
#endif

    // return moved data len
    return lsztDatalen;
} // }}} end of func vm::v_memmove(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memcpy(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : copy data from buf cpSrc to buf pDst with length csztDataLen 
// ==  Return  : size_t           - [O] the data length has been copied
// ==                                   0 for error
// ==  Params  : pDst             - [O] dst address
// ==            csztDstSize      - [I] dst buf size
// ==            cpSrc            - [I] src address
// ==            csztDataLen      - [I] the data len need to be copied
inline size_t vm::v_memcpy ( void* const pDst, const size_t csztDstSize, const void* const cpSrc, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memcpy()"), pDst, cpSrc);

    // reset data len need to been copyed
    size_t lsztDatalen = vMin(csztDstSize, csztDataLen);

    // copy data
#if defined (_MSC_VER) && (_MSC_VER > 1300)
    errno_t loRet = vMemcpy_s((tchar* const)pDst, csztDstSize, (const tchar* const)cpSrc, lsztDatalen);
    if( loRet != 0 ) return 0;
#else
    void* lpEnd = vMemcpy((tchar* const)pDst, (const tchar* const)cpSrc, lsztDatalen);
    if( lpEnd == nullptr ) return 0;
#endif

    // return moved data len
    return lsztDatalen;
} // }}} end of func vm::v_memcpy(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memccpy(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : copy dat from cpSrc to pDst, until meet ciVal or copied data len csztDataLen
// ==  Return  : size_t           - [O] the data length has been copied
// ==                                   0 for error
// ==  Params  : pDst             - [O] dst address
// ==            csztDstSize      - [I] dst buffer size
// ==            cpSrc            - [I] src address
// ==            ciVal            - [I] terminator flag
// ==            csztDataLen      - [I] the data length that need to be copied
size_t vm::v_memccpy ( void* const pDst, const size_t csztDstSize, const void* const cpSrc, const int ciVal, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memccpy()"), pDst, cpSrc);

    // reset data len need to been copyed
    size_t lsztDatalen = vMin(csztDstSize, csztDataLen);

    // copy data
    void* lpEnd = vMemccpy((tchar* const)pDst, (const tchar* const)cpSrc, ciVal, lsztDatalen);
    if ( lpEnd == 0 )
        return 0;

    // return the data has been copied
    size_t lsztCoyied = (tchar*)lpEnd - (tchar*)pDst;
    return lsztCoyied;
} // }}} end of func vm::v_memccpy(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memcmp_less(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decide cpBuf1 is less than cpBuf2 or not. (case sensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is less than cpBuf2
// ==                                   false for cpBuf1 is more or equal than cpBuf2
// ==  Params  : cpBuf1           - [I] buffer 1
// ==            cpBuf2           - [I] buffer 2
// ==            csztDataLen      - [I] the data len that need to be compared
bool vm::v_memcmp_less ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memcmp_less()"), cpBuf1, cpBuf2);

    // compare buffer
    int liRet = vMemcmp((const tchar* const)cpBuf1, (const tchar* const)cpBuf2, csztDataLen);
    if (liRet < 0)
        return true;

    return  false;
} // }}} end of func vm::v_memcmp_less(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memcmp_more(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decide cpBuf1 is more than cpBuf2 or not. (case sensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is more than cpBuf2
// ==                                   false for cpBuf1 is less or equal than cpBuf2
// ==  Params  : cpBuf1           - [I] buffer 1
// ==            cpBuf2           - [I] buffer 2
// ==            csztDataLen      - [I] the data len that need to be compared
bool vm::v_memcmp_more ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memcmp_more()"), cpBuf1, cpBuf2);

    // compare buffer
    int liRet = vMemcmp((const tchar* const)cpBuf1, (const tchar* const)cpBuf2, csztDataLen);
    if (liRet > 0)
        return true;

    return  false;
} // }}} end of func vm::v_memcmp_more(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memcmp_equl(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decide cpBuf1 is equal than cpBuf2 or not, (case sensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is equal than cpBuf2
// ==                                   false for cpBuf1 is more or less than cpBuf2
// ==  Params  : cpBuf1           - [I] buffer 1
// ==            cpBuf2           - [I] buffer 2
// ==            csztDataLen      - [I] the data len that need to be compared
bool vm::v_memcmp_equl ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memcmp_equl()"), cpBuf1, cpBuf2);
    
    // compare buffer
    int liRet = vMemcmp((tchar*)cpBuf1, (tchar*)cpBuf2, csztDataLen);
    if (liRet == 0)
        return true;
    
    return  false;
} // }}} end of func vm::v_memcmp_equl(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memicmp_less(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decide cpBuf1 is less than cpBuf2 or not. (case insensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is less than cpBuf2
// ==                                   false for cpBuf1 is more or equal than cpBuf2
// ==  Params  : cpBuf1           - [I] buffer 1
// ==            cpBuf2           - [I] buffer 2
// ==            csztDataLen      - [I] the data len that need to be compared
bool vm::v_memicmp_less ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memicmp_less()"), cpBuf1, cpBuf2);
    
    // compare buffer
    int liRet = vMemicmp((const tchar* const)cpBuf1, (const tchar* const)cpBuf2, csztDataLen);
    if (liRet < 0)
        return true;

    return false;
} // }}} end of func vm::v_memicmp_less(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memicmp_more(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decid cpBuf1 is more than cpBuf2 or not. (case insensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is more than cpBuf2
// ==                                   false for cpBuf1 is less or equal than cpBuf2
// ==  Params  : cpBuf1           - [I] buffer 1
// ==            cpBuf2           - [I] buffer 2
// ==            csztDataLen      - [I] the data len that need to be compared
bool vm::v_memicmp_more ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memicmp_more()"), cpBuf1, cpBuf2);

    // compare buffer
    int liRet = vMemicmp((const tchar* const)cpBuf1, (const tchar* const)cpBuf2, csztDataLen);
    if (liRet > 0)
        return true;

    return false;
} // }}} end of func vm::v_memicmp_more(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vm::v_memicmp_equl(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : decide cpBuf1 is equal than cpBuf2 or not. (case insensitive)
// ==  Return  : bool             - [O] true  for cpBuf1 is equal than cpBuf2
// ==                                   false for cpBuf1 is more or less than cpBuf2
// ==  Params  : cpBuf1           - [I] Buffer 1
// ==            cpBuf2           - [I] Buffer 2
// ==            csztDataLen      - [I] the dat len that need to be compared
bool vm::v_memicmp_equl ( const void* const cpBuf1, const void* const cpBuf2, const size_t csztDataLen )
// {{{
{
    // verify input paramters
    _VERIFY_2_(vT("v_memicmp_equl()"), cpBuf1, cpBuf2);

    // compare buffer
    int liRet = vMemicmp((const tchar* const)cpBuf1, (const tchar* const)cpBuf2, csztDataLen);
    if (liRet == 0)
        return true;

    return false;
} // }}} end of func vm::v_memicmp_equl(...)
// ================================================================================================ //

#endif // _V_FUNC_MEM_H_INL__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
