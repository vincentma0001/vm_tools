// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_util_str.h.inl                                      == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 20:00:13                                               == //
// ==   Modify Time          : 2020-10-29 12:44:17                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_UTIL_STR_H_INL__
#define  __VM_UTIL_STR_H_INL__


// ================================================================================================ //
// ==  Methord : v_toupper(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to upper
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pData            - [O] Data buffer address
inline void vm::v_toupper ( tchar* const pData )
// {{{
{
    size_t lsztDatalen = vStrlen(pData);
    return vm::v_toupper( pData, lsztDatalen );
}
// }}} end of func v_toupper(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_toupper(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to upper
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pData            - [O] Data buffer address
// ==            csztDataLen      - [I] Data buffer's length
inline void vm::v_toupper ( tchar* const pData, const size_t csztDataLen )
// {{{
{
    return vm::v_toupper( pData, csztDataLen, pData, csztDataLen );
}
// }}} end of func v_toupper(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_toupper(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to upper, and copy it to dst buffer
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pDst             - [O] Dst buffer address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string's length
void vm::v_toupper ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_toupper()"), pDst, cpSrc);

    // Change alpha letter to lower letter
    for (size_t lsztOffset = 0; lsztOffset < csztSrcLen; lsztOffset++)
    {
        tchar* pSrcValue = const_cast<tchar*>(cpSrc) + lsztOffset;
        tchar* pDstValue = const_cast<tchar*>( pDst) + lsztOffset;
        if (vIsAlpha(*pSrcValue))
        {
            *pDstValue = vToUpper(*pSrcValue);
        }else{
            if( pSrcValue != pDstValue )
                *pDstValue = *pSrcValue;
        }
    } // Enf of for (...)
}
// }}} end of func v_toupper(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_tolower(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to lower
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pData            - [I] String buffer address
void vm::v_tolower ( tchar* const pData )
// {{{
{
    size_t lsztDatalen = vStrlen(pData);
    return vm::v_tolower( pData, lsztDatalen );
}
// }}} end of func v_tolower(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_tolower(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to lower
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pData            - [I] String buffer address
// ==            csztDataLen      - [I] String buffer's length
inline void vm::v_tolower ( tchar* const pData, const size_t csztDataLen )
// {{{
{
    return vm::v_tolower( pData, csztDataLen, pData, csztDataLen );
}
// }}} end of func v_tolower(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_tolower(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change string's alpha letter to lower, and copy it to dst buffer
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pDst             - [O] Dst buffer address
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string's length
inline void vm::v_tolower ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_tolower()"), pDst, cpSrc);

    // Change alpha letter to lower letter
    for (size_t lsztOffset = 0; lsztOffset < csztSrcLen; lsztOffset++)
    {
        tchar* pSrcValue = const_cast<tchar*>(cpSrc) + lsztOffset;
        tchar* pDstValue = const_cast<tchar*>( pDst) + lsztOffset;
        if (vIsAlpha(*pSrcValue))
        {
            *pDstValue = vToLower(*pSrcValue);
        }else{
            if( pSrcValue != pDstValue )
                *pDstValue = *pSrcValue;
        }
    } // Enf of for (...)
}
// }}} end of func v_tolower(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_sprintf(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, and copy new string to dst buffer
// ==  Return  : int              - [O] New string's length
// ==  Params  : pDst             - [O] Dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpFmt            - [I] string's format
// ==            ...              - [I] string's format paramters
inline int vm::v_sprintf ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpFmt, ... )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_sprintf()"), pDst, cpFmt);

    // format string
    va_list vlist;
    va_start( vlist, cpFmt );
    int liRet = vm::v_vsprintf( pDst, csztDstSize, cpFmt, vlist);
    va_end(vlist);

    return liRet;
}
// }}} end of func v_sprintf(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_vsprintf(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, and copy new string to dst buffer
// ==  Return  : int              - [O] New string's length
// ==  Params  : pDst             - [O] Dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpFmt            - [I] String's format
// ==            vList            - [I] String's format paramters
inline int vm::v_vsprintf ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpFmt, va_list& vList )
// {{{
{
        // Verify input paramters
        _VERIFY_2_(vT("v_vsprintf()"), pDst, cpFmt);

        // format string
    #if defined (_MSC_VER) && (_MSC_VER > 1300)
        int liRet = vVsprintf_s( pDst, csztDstSize, cpFmt, vList );
        if (liRet < 0) { _ASSERT_(vT("v_vsprintf()"), (errno == 0)); };

    #else
        int liRet = vVsprintf( pDst, cpFmt, vList );
        if (liRet < 0) { _ASSERT_(vT("v_vsprintf()"), (errno == 0)); };
    #endif
        return liRet;
}
// }}} end of func v_vsprintf(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strzero(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set memory block to 0x00 from pBuf to pBuf+csztDataLen
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pBuf             - [O] memory start address
// ==            csztDataLen      - [I] memory block length
inline void vm::v_strzero ( tchar* const pBuf, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_strzero()"), pBuf);
    vMemset((tchar* const)pBuf, 0x00, csztDataLen);
}
// }}} end of func v_strzero(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strset(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set memory block to ciVal for pBuf to pBuf+csztDataLen-sizeof(tchar)
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pBuf             - [o] memory start address
// ==            ciVal            - [I] value will be set in memory bloack
// ==            csztDataLen      - [I] memory block length
inline void vm::v_strset ( tchar* const pBuf, const int ciVal, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_strset()"), pBuf);
    vMemset(pBuf, ciVal, csztDataLen-sizeof(tchar));
}
// }}} end of func v_strset(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strchr(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search first ciVal from cpBuf order by left
// ==  Return  : tchar*           - [O] Address - for first ciVal order by left
// ==                                   nullptr - for no ciVal in cpBuf
// ==  Params  : cpBuf            - [I] Src string that to be search
// ==            ciVal            - [I] Value for search
inline const tchar* vm::v_strchr ( const tchar* const cpBuf, const int ciVal )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_strchr()"),cpBuf);
    return vStrchr((tchar* const)cpBuf, ciVal);
}
// }}} end of func v_strchr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strrchr(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search first ciVal from cpBuf order by right
// ==  Return  : tchar*           - [O] Address - for first ciVal order by right
// ==                                   nullptr - for no ciVal in cpBuf
// ==  Params  : cpBuf            - [I] Src string to be search
// ==            ciVal            - [I] Value for search
inline const tchar* vm::v_strrchr ( const tchar* const cpBuf, const int ciVal )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_strrchr()"), cpBuf);
    return vStrrchr((tchar* const)cpBuf, ciVal);
}
// }}} end of func v_strrchr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strstr(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search first cpSubStr in cpBuf
// ==  Return  : tchar*           - [O] Address - for the first postion of search
// ==                                   cpBuf   - if cpSbuStr is nullptr
// ==                                   nullptr - for no cpSubStr in cpBuf
// ==  Params  : cpBuf            - [I] Sre string to be search
// ==            cpSubStr         - [I] Sub string for search
inline const tchar* vm::v_strstr ( const tchar* const cpBuf, const tchar* const cpSubStr )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_strstr()"), cpBuf);
    return vStrstr(cpBuf, cpSubStr);
}
// }}} end of func v_strstr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strcmp_equl(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is equal with pStr2, case sensitive
// ==  Return  : bool             - [O] true  - for pStr1 is equal with pStr2
// ==                                   false - for pStr2 isn't equal with pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
inline bool vm::v_strcmp_equl ( const tchar* const pStr1, const tchar* const pStr2 )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strcmp_equl()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet  = vStrcmp(pStr1, pStr2);
    if ( liRet == 0 )
        return  true;

    return false;
}
// }}} end of func v_strcmp_equl(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strcmp_more(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is more than pStr2, case sensitive
// ==  Return  : bool             - [O] true  - for pStr1 is more than pStr2
// ==                                   false - for pStr2 is less or equal tan pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
inline bool vm::v_strcmp_more ( const tchar* const pStr1, const tchar* const pStr2 )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strcmp_more()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet = vStrcmp(pStr1, pStr2);
    if (liRet > 0)
        return  true;

    return false;
}
// }}} end of func v_strcmp_more(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strcmp_less(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is less than pStr2, case sensitive
// ==  Return  : bool             - [O] true  - for pStr1 is less than pStr2
// ==                                   false - for pStr1 is more or equal than pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
inline bool vm::v_strcmp_less ( const tchar* const pStr1, const tchar* const pStr2 )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strcmp_less()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet = vStrcmp(pStr1, pStr2);
    if (liRet < 0)
        return  true;

    return false;
}
// }}} end of func v_strcmp_less(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strncmp_equl(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is equal with pStr2, compare csztDataLen letters
// ==  Return  : bool             - [O] true  - for pStr1 is equal with pStr2
// ==                                   false - for pStr2 is more or less than pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
// ==            csztDataLen      - [I] Compare letter numbres
inline bool vm::v_strncmp_equl ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strncmp_equl()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet = vStrncmp(pStr1, pStr2, csztDataLen);
    if (liRet == 0)
        return  true;

    return false;
}
// }}} end of func v_strncmp_equl(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strncmp_more(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is more than pStr2, compare csztDataLen letters
// ==  Return  : bool             - [O] true  - for pStr1 is more than pStr2
// ==                                   false - for pStr1 is less or equal than pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
// ==            csztDataLen      - [I] Compare letter numbers
inline bool vm::v_strncmp_more ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strncmp_more()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet = vStrncmp(pStr1, pStr2,csztDataLen);
    if (liRet > 0)
        return  true;

    return false;
}
// }}} end of func v_strncmp_more(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strncmp_less(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide pStr1 is less than pStr2, compare csztDataLen letters
// ==  Return  : bool             - [O] true  - for pStr1 is less than pStr2
// ==                                   false - for pStr2 is more ot equal than pStr2
// ==  Params  : pStr1            - [I] Compare part string 1
// ==            pStr2            - [I] Compare part string 2
// ==            csztDataLen      - [I] Compare letter numbers
inline bool vm::v_strncmp_less ( const tchar* const pStr1, const tchar* const pStr2, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strncmp_less()"), pStr1, pStr2);

    // Compare pStr1 with pStr2
    int liRet = vStrncmp(pStr1, pStr2, csztDataLen);
    if (liRet < 0)
        return  true;

    return false;
}
// }}} end of func v_strncmp_less(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strcat(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Cat src string to the end of dst string
// ==  Return  : tchar*           - [O] return pDst address
// ==  Params  : pDst             - [O] Dst string
// ==            csztDstSize      - [I] Dst string buffer length
// ==            cpSrc            - [I] Src string
inline tchar* vm::v_strcat ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strcat()"), pDst, cpSrc);

    // cat cpSrc to pDst
#if defined (_MSC_VER) && (_MSC_VER>=1300)
    vErrno_t loRet = vStrcat_s(pDst, csztDstSize, cpSrc);
    _ASSERT_(vT("v_strncpy()"), (loRet==0) );

    return pDst;
#else
    return strcat(pDst, cpSrc);
#endif
}
// }}} end of func v_strcat(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strncat(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Cat src string to the end of dst string, copy csztDataLen letters
// ==  Return  : tchar*           - [O] return pDst address
// ==  Params  : pDst             - [O] Dst string buffer
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string buffer
// ==            csztDataLen      - [I] Data length need to be copied
inline tchar* vm::v_strncat ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strncat()"), pDst, cpSrc);

#if defined (_MSC_VER) && (_MSC_VER>=1300)
    vErrno_t loRet = vStrncat_s(pDst, csztDstSize, cpSrc, csztDataLen);
    _ASSERT_(vT("v_strncat()"), (loRet==0) );

    return pDst;
#else
    return vStrncat(pDst, cpSrc, csztDataLen);
#endif
}
// }}} end of func v_strncat(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strcpy(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data from pSrc to pDst
// ==  Return  : size_t           - [O] the letters number copied
// ==  Params  : pDst             - [O] Dst string buffer
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string bufffer
inline size_t vm::v_strcpy ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strcpy()"), pDst, cpSrc);

    size_t lsztSrcLen = vStrlen(cpSrc);
    size_t lsztDataLen = vMin( csztDstSize, lsztSrcLen );

#if defined (_MSC_VER) && (_MSC_VER > 1300)
    //vErrno_t loRet = strcpy_s(pDst,csztDstSize,cpSrc);
    vErrno_t loRet = vMemcpy_s(pDst,csztDstSize,cpSrc, lsztDataLen);
    _ASSERT_(vT("v_strcpy()"), (loRet==0) );

    return lsztDataLen;
#else
    //tchar* lpEnd = vStrcpy(pDst, cpSrc)
    tchar* lpEnd = (tchar*)vMemcpy(pDst, cpSrc, lsztSrcLen);
    _VERIFY_(vT("v_strncpy()"), lpEnd);

    size_t lsztCopied = (size_t)(lpEnd - pDst);
    return lsztCopied;
#endif
}
// }}} end of func v_strcpy(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strncpy(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy data from cpSrc to pDst, with data len csztDataLen
// ==  Return  : size_t           - [O] the letter numbers copied
// ==  Params  : pDst             - [O] Dst string buffer
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string
// ==            csztDataLen      - [I] Data length
inline size_t vm::v_strncpy ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztDataLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strncpy()"), pDst, cpSrc);

    size_t lsztDatalen = vMin((csztDstSize-sizeof(tchar)),csztDataLen);

#if defined (_MSC_VER) && (_MSC_VER > 1300)
    // vErrno_t loRet = strncpy_s(pDst, csztDstSize, cpSrc, csztDataLen);
    vErrno_t loRet = vMemcpy_s(pDst, csztDstSize, cpSrc, lsztDatalen);
    _ASSERT_(vT("v_strncpy()"), (loRet==0) );

    *(pDst+lsztDatalen) = tchar(0x00);
    return csztDataLen;
#else
    //tchar* lpEnd = vStrcpy(pDst, cpSrc)
    tchar* lpEnd = (tchar*)vMemcpy(pDst, cpSrc, lsztDatalen);
    if ( lpEnd == nullptr ){ return 0; }
    _VERIFY_(vT("v_strncpy()"), lpEnd);

    size_t lsztCopied= lpEnd -pDst;
    return lsztCopied;
#endif
}
// }}} end of func v_strncpy(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head and tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] string that need to be trimed
inline size_t vm::v_strtrim ( tchar* const pData )
// {{{
{
    // Get data's length
    size_t lsDataLen = vStrlen(pData);

    // Trim data string
    return vm::v_strtrim( pData, lsDataLen );
}
// }}} end of func v_strtrim(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head and tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] string that need to be trimed
// ==            csztDataLen      - [I] string's length
inline size_t vm::v_strtrim ( tchar* const pData, const size_t csztDataLen )
// {{{
{
    // trim string
    size_t lsztCopied = vm::v_strtrim( pData, csztDataLen, pData, csztDataLen );

    // reset string eof
    size_t lsztRemoved    = csztDataLen - lsztCopied;
    vm::v_memset((pData+lsztCopied), 0x00, lsztRemoved);

    // return new string length
    return lsztCopied;
}
// }}} end of func v_strtrim(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head and tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pDst             - [O] Dst string buffer address
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string address
// ==            csztSrcLen       - [I] Src string length
inline size_t vm::v_strtrim ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_strtrim()"), pDst, cpSrc);

    // Verify data buffer length
    if (csztDstSize <= 0) return 0;

    // Get Src string length
    tchar* lpEnd = const_cast<tchar*>(cpSrc) + csztSrcLen;

    // Get first postion that isn't space char(like ' ', '\n', '\t')
    tchar* lpStartPos = const_cast<tchar*>(cpSrc);
    size_t lsztStartOffset = 0;
    // while ((lpStartPos != lpEnd) && ((*lpStartPos == ' ') || (*lpStartPos == '\n') || (*lpStartPos == '\t')))
    while ((lpStartPos != lpEnd) && (vIsSpace(*lpStartPos)))
    {
        lsztStartOffset++;
        lpStartPos = const_cast<tchar*>(cpSrc) + lsztStartOffset;
    } // End of while(...)

    // Get last postion that isn't space char(like ' ', '\n', '\t')
    tchar* lpEndPos = lpEnd-sizeof(tchar);
    size_t lsztEndOffset = 0;
    // while ((lpEndPos != lpStartPos) && ((*lpEndPos == ' ') || (*lpEndPos == '\t') || (*lpEndPos == '\n')))
    while ((lpEndPos != lpStartPos) && (vIsSpace(*lpEndPos)))
    {
        lsztEndOffset++;
        lpEndPos = lpEnd - lsztEndOffset-sizeof(tchar);
    } // End of while(...)

    // Replace data to new data( that isn't inlcude space char at first and end of data )
    size_t lsztNewDataLen = lpEndPos -lpStartPos+sizeof(tchar);
    size_t lsztCopied = vm::v_memmove(pDst, csztDstSize, lpStartPos, lsztNewDataLen);

    // return new string length
    return lsztCopied;
}
// }}} end of func v_strtrim(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_left(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head's space char(' ', '\n', '\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] String that need to ben trimed
inline size_t vm::v_strtrim_left ( tchar* const pData )
// {{{
{
    // Get data's length
    size_t lsDataLen = vStrlen(pData);

    // Trim data string
    return vm::v_strtrim_left( pData, lsDataLen );
}
// }}} end of func v_strtrim_left(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_left(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head's space char(' ', '\n', '\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] string that need to be trimed
// ==            csztDataLen      - [I] string's length
inline size_t vm::v_strtrim_left ( tchar* const pData, const size_t csztDataLen )
// {{{
{
    // trim string
    size_t lsztCopied = vm::v_strtrim_left( pData, csztDataLen, pData, csztDataLen );

    // reset string eof
    size_t lsztRemoved    = csztDataLen - lsztCopied;
    vm::v_memset((pData+lsztCopied), 0x00, lsztRemoved);

    // return new string length
    return lsztCopied;
}
// }}} end of func v_strtrim_left(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_left(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string head's space char(' ', '\n', '\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pDst             - [O] Dst string buffer address
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string length
inline size_t vm::v_strtrim_left ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen )
// {{{
{
    // Verify input paramter
    _VERIFY_2_(vT("v_strtrim_left()"), pDst, cpSrc);

    // Get Src string length
    tchar* lpEnd = const_cast<tchar*>(cpSrc) + csztSrcLen;

    // Get first unspace char's postion
    tchar* lpPos = (tchar*)cpSrc;
    size_t lsztOffset = 0;
    // while ((lpPos != lpEnd) && ((*lpPos == ' ') || (*lpPos == '\n') || (*lpPos == '\t')))
    while ((lpPos != lpEnd) && (vIsSpace(*lpPos)))
    {
        lsztOffset++;
        lpPos = (tchar*)cpSrc + lsztOffset;
    } // End of while(...)

    // Copy new string to Dst string buffer
    size_t lsztNewDataLen = csztSrcLen - lsztOffset;
    size_t lsztCopied = v_memmove( pDst, csztDstSize, lpPos, lsztNewDataLen);

    // return new string length;
    return lsztCopied;
}
// }}} end of func v_strtrim_left(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_right(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] String that need to be trimed
inline size_t vm::v_strtrim_right ( tchar* const pData )
// {{{
{
    size_t lsztDatalen = vStrlen(pData);
    return vm::v_strtrim_right( pData, lsztDatalen );
}
// }}} end of func v_strtrim_right(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_right(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trim string tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pData            - [O] String that need to be trimed
// ==            csztDataLen      - [I] String's length
inline size_t vm::v_strtrim_right ( tchar* const pData, const size_t csztDataLen )
// {{{
{
    return vm::v_strtrim_right( pData, csztDataLen, pData, csztDataLen );
}
// }}} end of func v_strtrim_right(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_strtrim_right(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Trime string tail's space char(' ','\n','\t')
// ==  Return  : size_t           - [O] Number  - for new string's length
// ==                                   zero    - for error
// ==  Params  : pDst             - [O] Dst string buffer address
// ==            csztDstSize      - [I] Dst string buffer size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string length
inline size_t vm::v_strtrim_right ( tchar* const pDst, const size_t csztDstSize, const tchar* const cpSrc, const size_t csztSrcLen )
// {{{
{
    // Verify input paramter
    _VERIFY_2_(vT("v_strtrim_right()"), pDst, cpSrc);

    // Get Src string length
    tchar* lpEnd = const_cast<tchar*>(cpSrc) + csztSrcLen;

    // Get last unspace char's postion
    tchar* lpPos = lpEnd-sizeof(tchar);
    size_t lsztOffset = 0;
    // while ((lpPos != pSrc) && ((*lpPos == ' ') || (*lpPos == '\t') || (*lpPos == '\n')))
    while ((lpPos != cpSrc) && (vIsSpace(*lpPos)))
    {
        lsztOffset++;
        lpPos = lpEnd - lsztOffset;
    } // End of while(...)

    size_t lsztNewDataLen = csztSrcLen - lsztOffset+sizeof(tchar);
    if( pDst == cpSrc )
    {
        // Reset string eof
        lpPos+=sizeof(tchar);
        v_memset(lpPos, 0x00, lsztOffset);
        return lsztNewDataLen;
    } else {
        // Copy new string to Dst buffer
        v_memzero(pDst,csztDstSize);
        size_t lsztCopied = v_memmove(pDst, csztDstSize, cpSrc, lsztNewDataLen);
        return lsztCopied;
    } // End of if(...)
}
// }}} end of func v_strtrim_right(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  brief   : search substr that begin with char cibflag and with cieflag in src string, and copy
// ==            substr to src string buffer
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pData            - [O] Substr and src buffer address
inline size_t vm::v_str_substr ( tchar* const pData, const int ciBFlag, const int ciEFlag )
// {{{
{
    size_t lsztDatalen = vStrlen( pData );
    return vm::v_str_substr( pData, lsztDatalen, ciBFlag, ciEFlag );
}
// }}} end of func v_str_substr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search substr that begin with char ciBFlag and with ciEFlag in src string, and copy
// ==            substr to src string buffer
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pData            - [O] Substr and src buffer address
// ==            csztDataLen      - [I] src string length
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr ( tchar* const pData, const size_t csztDataLen, const int ciBFlag, const int ciEFlag )
// {{{
{
    // Get substr
    size_t lsztCopied = vm::v_str_substr( pData, csztDataLen, pData, csztDataLen, ciBFlag, ciEFlag );
    if(lsztCopied==0) return 0;

    // reset substr's eof
    size_t lszRemoved     = csztDataLen - lsztCopied;
    vm::v_memset((pData+lsztCopied), 0x00, lszRemoved );

    // return substr's length
    return lsztCopied;
}
// }}} end of func v_str_substr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search and copy substr that begin with char ciBFlag end with ciEFlag in src string
// ==            to dst string
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pDst             - [O] Substr buffer address
// ==            csztDstSize      - [I] Substr buffer's size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string's length
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr (       tchar* const    pDst , const size_t csztDstSize,
                                 const tchar* const    cpSrc, const size_t csztSrcLen ,
                                 const int           ciBFlag, const int        ciEFlag )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_str_substr()"), pDst, cpSrc);

    // If Src string length is zero, return zero
    if (csztSrcLen == 0) return 0;

    // Get substr's begin postion
    tchar* lpStartPos = const_cast<tchar*>(cpSrc);
    if  ( ciBFlag != vStrPosBegin )
    {
        // If ciBFlag isn't vStrPosBegin, Search the substr's start postion.
        lpStartPos = (tchar*)vm::v_strchr((tchar*)cpSrc, ciBFlag);
        if (lpStartPos == nullptr) return 0;

        lpStartPos+=sizeof(tchar);
    } // End of if () ...

    // Get substr's end postion
    tchar* lpEndPos = const_cast<tchar*>(cpSrc)+csztSrcLen;
    if  (  ciEFlag != vStrPosEnded )
    {
        // If cEFlag isn't vStrPosEnded, Search the substr's ended postion.
        lpEndPos   = (tchar*)vm::v_strrchr((tchar*)cpSrc, ciEFlag);
        if (lpEndPos == nullptr) return 0;
    } // End of if () ...

    // if lpEndPos is less than lpStartPos, such as "}{" return zero.
    if (lpEndPos <= lpStartPos) return 0;

    // copy substr to Dst buffer
    size_t lsztNewDataLen = (lpEndPos) - (lpStartPos);
    size_t lsztCopied     = vm::v_memmove( pDst, csztDstSize, lpStartPos, lsztNewDataLen );

    // return substr length;
    return lsztCopied;
}
// }}} end of func v_str_substr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_first(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the first substr with begin char ciBFlag end char ciEFlag in src string, 
// ==            and copy it to data buffer.
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pData            - [O] Substr buffer address
inline size_t vm::v_str_substr_first ( tchar* const pData, const int ciBFlag, const int ciEFlag )
// {{{
{
    size_t lsztDatalen = vStrlen( pData );
    return vm::v_str_substr_first( pData, lsztDatalen, ciBFlag, ciEFlag );
}
// }}} end of func v_str_substr_first(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_first(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the first substr with begin char ciBFlag end char ciEFlag in src string, 
// ==            and copy it to data buffer.
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pData            - [O] Substr buffer address
// ==            csztDataLen      - [I] Substr buffer's size
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr_first ( tchar* const pData, const size_t csztDataLen, const int ciBFlag, const int ciEFlag )
// {{{
{
    // Get substr
    size_t lsztCopied = vm::v_str_substr_first( pData, csztDataLen, pData, csztDataLen, ciBFlag, ciEFlag );
    if(lsztCopied==0) return 0;

    // reset substr's eof
    size_t lszRemoved     = csztDataLen - lsztCopied;
    vm::v_memset((pData+lsztCopied), 0x00, lszRemoved );

    // return substr's length
    return lsztCopied;
}
// }}} end of func v_str_substr_first(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_first(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the first substr with begin char ciBFlag end char ciEFlag in src string, 
// ==            and copy it to data buffer.
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pDst             - [O] Substr buffer address
// ==            csztDstSize      - [I] Substr buffer's size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string's length
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr_first (       tchar* const     pDst, const size_t    csztDstSize,
                                       const tchar* const    cpSrc, const size_t     csztSrcLen,
                                       const int           ciBFlag, const int           ciEFlag )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_str_substr_first()"), pDst, cpSrc);

    // If Src string length is zero, return zero
    if (csztSrcLen == 0) return 0;

    // Get substr's begin postion
    tchar* lpStartPos = const_cast<tchar*>(cpSrc);
    if (ciBFlag != vStrPosBegin)
    {
        // If ciBFlag isn't vStrPosBegin, Search the substr's start postion.
        lpStartPos = (tchar*)vm::v_strchr((tchar*)cpSrc, ciBFlag);
        if (lpStartPos == nullptr) return 0;

        lpStartPos += sizeof(tchar);
    } // End of if () ...

    // Get substr's end postion
    tchar* lpEndPos = const_cast<tchar*>(cpSrc) + csztSrcLen;
    if (ciEFlag != vStrPosEnded)
    {
        // If cEFlag isn't vStrPosEnded, Search the substr's ended postion.
        lpEndPos = (tchar*)vm::v_strchr(lpStartPos, ciEFlag);
        if (lpEndPos == nullptr) return 0;
    } // End of if () ...

    // if lpEndPos is less than lpStartPos, such as "}{" return zero.
    if (lpEndPos <= lpStartPos) return 0;

    // copy substr to Dst buffer
    size_t lsztSubstrLen = lpEndPos - lpStartPos;
    size_t lsztCopied    = vm::v_memmove(pDst, csztDstSize, lpStartPos, lsztSubstrLen);

    // return substr length;
    return lsztCopied;
}
// }}} end of func v_str_substr_first(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_last(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the last substr with begin char ciBFlag end char ciEFlag in src string, and
// ==            copy it to dst buffer
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pDst             - [O] Substr buffer address
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr_last ( tchar* const pData, const int ciBFlag, const int ciEFlag )
// {{{
{
    size_t lsztDatalen = vStrlen( pData );
    return vm::v_str_substr_last( pData, lsztDatalen, ciBFlag, ciEFlag );
}
// }}} end of func v_str_substr_last(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_last(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the last substr with begin char ciBFlag end char ciEFlag in src string, and
// ==            copy it to dst buffer
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pDst             - [O] Substr buffer address
// ==            csztDstSize      - [I] Substr buffer's size
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr_last ( tchar* const pData, const size_t csztDataLen, const int ciBFlag, const int ciEFlag )
// {{{
{
    // Get substr
    size_t lsztCopied = vm::v_str_substr_last( pData, csztDataLen, pData, csztDataLen, ciBFlag, ciEFlag );
    if(lsztCopied==0) return 0;

    // reset substr's eof
    size_t lszRemoved     = csztDataLen - lsztCopied;
    vm::v_memset((pData+lsztCopied), 0x00, lszRemoved );

    // return substr's length
    return lsztCopied;
}
// }}} end of func v_str_substr_last(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_str_substr_last(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Search the last substr with begin char ciBFlag end char ciEFlag in src string, and
// ==            copy it to dst buffer
// ==  Return  : size_t           - [O] Substr's length
// ==  Params  : pDst             - [O] Substr buffer address
// ==            csztDstSize      - [I] Substr buffer's size
// ==            cpSrc            - [I] Src string
// ==            csztSrcLen       - [I] Src string's length
// ==            ciBFlag          - [I] Substr's begin letter, default vStrPosStart for src start postion
// ==            ciEFlag          - [I] Substr's ended letter, default vStrPosEnded for src end   postion
inline size_t vm::v_str_substr_last (       tchar* const     pDst, const size_t     csztDstSize,
                                      const tchar* const    cpSrc, const size_t      csztSrcLen,
                                      const int           ciBFlag, const int            ciEFlag )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_str_substr_last()"), pDst, cpSrc);

    // If Src string length is zero, return zero
    if (csztSrcLen == 0) return 0;

    // Get substr's begin postion
    tchar* lpStartPos = const_cast<tchar*>(cpSrc);
    if (ciBFlag != vStrPosBegin)
    {
        // If ciBFlag isn't vStrPosBegin, Search the substr's start postion.
        lpStartPos = (tchar*)vm::v_strrchr((tchar*)cpSrc, ciBFlag);
        if (lpStartPos == nullptr) return 0;

        lpStartPos += sizeof(tchar);
    } // End of if () ...

    // Get substr's end postion.
    tchar* lpEndPos = const_cast<tchar*>(cpSrc) + csztSrcLen;
    if (ciEFlag != vStrPosEnded)
    {
        // If cEFlag isn't vStrPosEnded, Search the substr's ended postion.
        lpEndPos = (tchar*)vm::v_strchr(lpStartPos, ciEFlag);
        if (lpEndPos == nullptr) return 0;
    } // End of if () ...

    // if lpEndPos is less than lpStartPos, such as "}{" return zero.
    if (lpEndPos <= lpStartPos) return 0;

    // copy substr to Dst buffer.
    size_t lsztNewDataLen = lpEndPos - lpStartPos;
    size_t lsztCopied = v_memmove(pDst, csztDstSize, lpStartPos, lsztNewDataLen);

    // return substr length.
    return lsztCopied;
}
// }}} end of func v_str_substr_last(...)
// ================================================================================================ //


// ================================================================================================ //
// ==  Methord : v_strerrno(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert errno value to string
// ==  Return  : size_t           - [O] Output string's length
// ==  Params  : cllErrCode       - [I] Errno code
// ==            pBuf             - [O] Output string's buffer
// ==            csztBufSize      - [I] Output string's buffer size
size_t vm::v_strerrno ( _vIn_ const long long cllErrCode, _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize )
// {{{
{
    // Verify input buffer
    _VERIFY_( vT("v_strerrno()"), pBuf );

#if        ( _V_SYS_ == _V_WIN_ )
    // Get errno string
    vm::v_memzero( pBuf,csztBufSize );
    vErrno_t loRet = vStrErrNo_s( pBuf, csztBufSize, cllErrCode );
    if( loRet == 0 )
    {
        vm::v_memzero( pBuf, csztBufSize );
    }
    // Get errno string length and return
    size_t lsztErrStrlen = vStrlen( pBuf );
    return lsztErrStrlen; 
#elif      ( _V_SYS_ == _V_LUX_ )
    // Get errno string
    vm::v_memzero( pBuf, csztBufSize );
    char* lpRet = vStrErrNo_s( (int)cllErrCode, pBuf, csztBufSize );
    if( lpRet == nullptr )
    {
        vm::v_memzero( pBuf, csztBufSize );
    }
    // Get errno string length and return
    size_t lsztErrStrlen = vStrlen( pBuf );
    return lsztErrStrlen;
#endif // !( _V_SYS_ == _V_WIN_ )
}
// }}} end of func v_strerrno(...)
// ================================================================================================ //


#endif // ! __VM_UTIL_STR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
