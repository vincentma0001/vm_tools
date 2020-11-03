// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CStrPtr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 16:25:05                                               == //
// ==   Modify Time          : 2020-11-03 09:18:46                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRPTR_H_INL__
#define  __CSTRPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include "vm_util_mem.h"
#include "vm_util_str.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrPtr Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CStrPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrPtr::CStrPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CStrPtr::CStrPtr( tchar* const pBuf, const size_t sztBufSize )
                           : mpBuf(pBuf), msztBufSize(sztBufSize)
// {{{
{
}
// }}} End of func CStrPtr::CStrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CStrPtr::CStrPtr()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CStrPtr::~CStrPtr(  )
// {{{
{
}
// }}} End of func CStrPtr::~CStrPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::CStrPtr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CStrPtr::CStrPtr( const vm::CStrPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CStrPtr::CStrPtr()
// ================================================================================================ //

// }}} ![ Class CStrPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrPtr operator realization                                                        == //
// ================================================================================================ //
// [ Class CStrPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrPtr::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CStrPtr&         - [O] this object
inline vm::CStrPtr& vm::CStrPtr::operator = ( const vm::CStrPtr &obj )
// {{{
{
    msztBufSize = obj.msztBufSize;
    vm::v_strcpy( mpBuf, msztBufSize, obj.mpBuf );
    return *this;
}
// }}} End of func CStrPtr::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator * (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : tchar*           - [O] Buffer's address
inline tchar* vm::CStrPtr::operator * (  )
// {{{
{
    return mpBuf;
}
// }}} end of func CStrPtr::operator * (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator [] (...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer offset's address
// ==  Return  : tchar*           - [O] Buffer offset's address
// ==  Params  : csztPos          - [I] Postion in buffer
inline tchar* vm::CStrPtr::operator [] ( const size_t csztPos )
// {{{
{
    return mpBuf+csztPos;
}
// }}} end of func CStrPtr::operator [] (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator + (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : + operator
// ==  Return  : CStrPtr&         - [O] This class
// ==  Params  : cszVal           - [I] tchar need to add
inline vm::CStrPtr& vm::CStrPtr::operator + ( const tchar cVal )
// {{{
{
    size_t lszBufStrLen = vStrlen(mpBuf);
    if (lszBufStrLen >= msztBufSize)
        return *this;

    mpBuf[ lszBufStrLen ]     = cVal;
    mpBuf[ lszBufStrLen + 1 ] = 0x00;

    return *this;
}
// }}} end of func CStrPtr::operator + (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator + (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : + operator
// ==  Return  : CStrPtr&         - [O] This class
// ==  Params  : cpSrc            - [I] Substr need to add
inline vm::CStrPtr& vm::CStrPtr::operator + ( const tchar* const cpSrc )
// {{{
{
    vm::v_strcat(mpBuf, msztBufSize, cpSrc);
    return *this;
}
// }}} end of func CStrPtr::operator + (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator = (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : = operation
// ==  Return  : CStrPtr&         - [O] This class
// ==  Params  : cpStr            - [I] New string
inline vm::CStrPtr& vm::CStrPtr::operator = ( const tchar* const cpStr )
// {{{
{
    vm::v_memzero( mpBuf, msztBufSize        );
    vm::v_strcpy ( mpBuf, msztBufSize, cpStr );

    return *this;
}
// }}} end of func CStrPtr::operator = (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator += (...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : += operator
// ==  Return  : CStrPtr&         - [O] This class
// ==  Params  : cpSrc            - [I] Added string
inline vm::CStrPtr& vm::CStrPtr::operator += ( const tchar* const cpSrc )
// {{{
{
    vm::v_strcat(mpBuf, msztBufSize, cpSrc);
    return *this;
}
// }}} end of func CStrPtr::operator += (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator += (...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : += operator
// ==  Return  : CStrPtr&         - [O] This class
// ==  Params  : cVal             - [I] Added char
inline vm::CStrPtr& vm::CStrPtr::operator += ( const tchar cVal )
// {{{
{
    size_t lszBufStrLen = vStrlen(mpBuf);
    if (lszBufStrLen >= msztBufSize)
        return *this;

    mpBuf[ lszBufStrLen ]     = cVal;
    mpBuf[ lszBufStrLen + 1 ] = 0x00;

    return *this;
}
// }}} end of func CStrPtr::operator += (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator > (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide string in buffer is more than cpSrc or not
// ==  Return  : bool             - [O] ture  - for buffer is more than cpSrc
// ==                                   false - for buffer is less or equal than cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2
inline bool vm::CStrPtr::operator > ( const tchar* const cpSrc )
// {{{
{
    return vm::v_strcmp_more( mpBuf, cpSrc );
}
// }}} end of func CStrPtr::operator > (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator < (...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide string in buffer is less than cpSrc or not
// ==  Return  : bool             - [O] true  - for buffer is less than cpSrc
// ==                                   false - for buffer is more or equal than cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2
inline bool vm::CStrPtr::operator < ( const tchar* const cpSrc )
// {{{
{
    return vm::v_strcmp_less( mpBuf, cpSrc );
}
// }}} end of func CStrPtr::operator < (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::operator == (...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide string in buffer is equal with cpSrc or not
// ==  Return  : bool             - [O] true  - for buffer is equal with cpSrc
// ==                                   false - for buffer is more or less than cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2
inline bool vm::CStrPtr::operator == ( const tchar* const cpSrc )
// {{{
{
    return vm::v_strcmp_equl( mpBuf, cpSrc );
}
// }}} end of func CStrPtr::operator == (...)
// ================================================================================================ //

// }}} ![ Class CStrPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrPtr Functional realization                                                      == //
// ================================================================================================ //
// [ Class CStrPtr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrPtr::c_str(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : const tchar*     - [O] Buffer's address
inline const tchar* vm::CStrPtr::c_str(  )
// {{{
{
    return (const tchar*)mpBuf;
}
// }}} end of func CStrPtr::c_str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::str(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's address
// ==  Return  : tchar*           - [O] Buffer's address
inline tchar* vm::CStrPtr::str(  )
// {{{
{
    return mpBuf;
}
// }}} end of func CStrPtr::str(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Clear(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Clean buffer's data
// ==  Return  : void             - [O] Nothing for return
inline void vm::CStrPtr::clear(  )
// {{{
{
    vm::v_memzero( mpBuf, msztBufSize );
}
// }}} end of func CStrPtr::Clear(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::size(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer's size
// ==  Return  : size_t           - [O] Buffer's size
inline size_t vm::CStrPtr::size(  )
// {{{
{
    return msztBufSize;
}
// }}} end of func CStrPtr::size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::len(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get string's length in buffer
// ==  Return  : size_t           - [O] String's length in buffer
inline size_t vm::CStrPtr::len(  )
// {{{
{
    return vStrlen( mpBuf );
}
// }}} end of func CStrPtr::len(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::At(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get buffer offset's address
// ==  Return  : tchar*           - [O] Buffer offset's address
// ==  Params  : csztBufOffset    - [I] Buffer offset
inline tchar* vm::CStrPtr::At( const size_t csztBufOffset )
// {{{
{
    return mpBuf+csztBufOffset;
}
// }}} end of func CStrPtr::At(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Cat(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Cat cpSrc to buffer
// ==  Return  : tchar*           - [O] New string's address
// ==  Params  : cpSrc            - [I] Src string
inline tchar* vm::CStrPtr::Cat( const tchar* cpSrc )
// {{{
{
    return vm::v_strcat(mpBuf, msztBufSize, cpSrc);
}
// }}} end of func CStrPtr::Cat(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Cat(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Cat cpSrc to buffer, src length is csztSrcLec
// ==  Return  : tchar*           - [O] New string's address
// ==  Params  : cpSrc            - [I] Src string's address
// ==            csztSrcLen       - [I] Src string's length
inline tchar* vm::CStrPtr::Cat( const tchar* cpSrc, const size_t csztSrcLen )
// {{{
{
    return vm::v_strncat(mpBuf, msztBufSize, cpSrc, csztSrcLen);
}
// }}} end of func CStrPtr::Cat(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : tchar*           - [O] New string's address
// ==  Params  : cpFmt            - [I] string's format
// ==            ...              - [I] Format paramters
inline tchar* vm::CStrPtr::Fmt ( const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    tchar* lpRet = Fmt( 0, cpFmt, vList );
    va_end(vList);

    return lpRet;
}
// }}} end of func CStrPtr::Fmt (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : tchar*           - [O] New string's address
// ==  Params  : csztBufOffset    - [I] Buffer's offset
// ==            cpFmt            - [I] String's format
// ==            ...              - [I] Format paramters
inline tchar* vm::CStrPtr::Fmt ( const size_t csztBufOffset, const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    tchar* lpRet = Fmt( csztBufOffset, cpFmt, vList );
    va_end(vList);

    return lpRet;
}
// }}} end of func CStrPtr::Fmt (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : tchar*           - [O] New string's address
// ==  Params  : csztBufOffset    - [I] Buffer's offset
// ==            cpFmt            - [I] String's format
// ==            vList&           - [I] Format paramters
inline tchar* vm::CStrPtr::Fmt ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    int    liRet = v_vsprintf(lpPos, msztBufSize, cpFmt, vList);
    return lpPos;
}
// }}} end of func CStrPtr::Fmt (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : int              - [O] New string's length
// ==  Params  : cpFmt            - [I] String's format
// ==            ...              - [I] Format paramters
inline int vm::CStrPtr::Fmt2 ( const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    int liRet = Fmt2(0, cpFmt, vList);
    va_end(vList);

    return liRet;
}
// }}} end of func CStrPtr::Fmt2 (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : int              - [O] New string's length
// ==  Params  : csztBufOffset    - [I] Buffer's offset
// ==            cpFmt            - [I] String's format
// ==            ...              - [I] Format paramters
inline int vm::CStrPtr::Fmt2 ( const size_t csztBufOffset, const tchar* const cpFmt, ... )
// {{{
{
    va_list vList;
    va_start(vList, cpFmt);
    int liRet = Fmt2(csztBufOffset, cpFmt, vList);
    va_end(vList);

    return liRet;
}
// }}} end of func CStrPtr::Fmt2 (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Fmt2 (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string
// ==  Return  : int              - [O] New string's length
// ==  Params  : csztBufOffset    - [I] Buffer's offset
// ==            cpFmt            - [I] String's format
// ==            vList&           - [I] Format paramters
inline int vm::CStrPtr::Fmt2 ( const size_t csztBufOffset, const tchar* const cpFmt, va_list& vList )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_vsprintf(lpPos, msztBufSize, cpFmt, vList);
}
// }}} end of func CStrPtr::Fmt2 (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Cmp (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare buffer data with cpSrc. case sensitive
// ==  Return  : bool             - [O] true  - for string buffer is equal with cpSrc
// ==                                   false - for string int buffer is more or less tess cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2, src string
// ==            csztBufOffset    - [I] Buffer offset
inline bool vm::CStrPtr::Cmp ( const tchar* const cpSrc, const size_t csztBufOffset )
// {{{
{
    return vm::CStrPtr::Cmp( cpSrc, vStrlen(cpSrc), csztBufOffset );
}
// }}} end of func CStrPtr::Cmp (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Cmp (...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare buffer data with cpSrc, compare data length is csztDataLen. case sensitive
// ==  Return  : bool             - [O] true  - for string buffer is equal with cpSrc
// ==                                   false - for string int buffer is more or less tess cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2, src string
// ==            csztSrcLen       - [I] Src string's length
// ==            csztBufOffset    - [I] Buffer offset
inline bool vm::CStrPtr::Cmp ( const tchar* const cpSrc, const size_t csztSrcLen, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_strncmp_equl(lpPos, cpSrc, csztSrcLen);
}
// }}} end of func CStrPtr::Cmp (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::iCmp (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare buffer data with cpSrc. case insensitive
// ==  Return  : bool             - [O] true  - for string buffer is equal with cpSrc
// ==                                   false - for string int buffer is more or less tess cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2, src string's address
// ==            csztBufOffset    - [I] Buffer offset
inline bool vm::CStrPtr::iCmp ( const tchar* const cpSrc, const size_t csztBufOffset )
// {{{
{
    return vm::CStrPtr::iCmp( cpSrc, vStrlen(cpSrc), csztBufOffset );
}
// }}} end of func CStrPtr::iCmp (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::iCmp(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Compare buffer data with cpSrc, compare data length is csztDataLen. case insensitive
// ==  Return  : bool             - [O] true  - for string buffer is equal with cpSrc
// ==                                   false - for string int buffer is more or less tess cpSrc
// ==  Params  : cpSrc            - [I] Compare part 2, src string's address
// ==            csztSrcLen       - [I] Src string's length
// ==            csztBufOffset    - [I] Buffer offset
inline bool vm::CStrPtr::iCmp ( const tchar* const cpSrc, const size_t csztSrcLen, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_memicmp_equl(lpPos, cpSrc, csztSrcLen);
}
// }}} end of func CStrPtr::iCmp(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Sub(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get substring's address in buffer
// ==  Return  : const tchar*     - [O] Substr's address in buffer
// ==  Params  : cpSubStr         - [I] Substr for look for
// ==            csztBufOffset    - [I] Buffer offset
inline const tchar* vm::CStrPtr::Sub ( const tchar* const cpSubStr, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_strstr(lpPos, cpSubStr);
}
// }}} end of func CStrPtr::Sub(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::SubStr(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Put substring in cpSrc between first letter ciBFlag with last letter ciEFlag
// ==  Return  : size_t           - [O] Substring's length
// ==  Params  : cpSrc            - [I] Src string
// ==            ciBFlag          - [I] Substring's first letter (uninclude)
// ==            ciEFlag          - [I] Substring's last letter (uninlude)
// ==            csztBufOffset    - [I] Buffer offset
inline size_t vm::CStrPtr::SubStr ( const tchar* const cpSrc, const int ciBFlag, const int ciEFlag, const size_t csztBufOffset )
// {{{
{
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    tchar* lpPos = mpBuf+ csztBufOffset;
    return vm::v_str_substr( lpPos, lsztBufLen, cpSrc, vStrlen(cpSrc), ciBFlag, ciEFlag );
}
// }}} end of func CStrPtr::SubStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::SubStr_f(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Put substring in cpSrc between first letter ciBFlag with first letter ciEFlag
// ==  Return  : size_t           - [O] Substring's length
// ==  Params  : cpSrc            - [I] Src string
// ==            ciBFlag          - [I] Substring's first letter (uninclude)
// ==            ciEFlag          - [I] Substring's last letter (uninlude)
// ==            csztBufOffset    - [I] Buffer offset
inline size_t vm::CStrPtr::SubStr_f ( const tchar* const cpSrc, const int ciBFlag, const int ciEFlag, const size_t csztBufOffset )
// {{{
{
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    tchar* lpPos = mpBuf+ csztBufOffset;
    return vm::v_str_substr_first( lpPos, lsztBufLen, cpSrc, vStrlen(cpSrc), ciBFlag, ciEFlag );
}
// }}} end of func CStrPtr::SubStr_f(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::SubStr_l (...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Put substring in cpSrc between last letter ciBFlag with last letter ciEFlag
// ==  Return  : size_t           - [O] Substring's length
// ==  Params  : cpSrc            - [I] Src string
// ==            ciBFlag          - [I] Substring's first letter (uninclude)
// ==            ciEFlag          - [I] Substring's last letter (uninlude)
// ==            csztBufOffset    - [I] Buffer offset
inline size_t vm::CStrPtr::SubStr_l ( const tchar* const cpSrc, const int ciBFlag, const int ciEFlag, const size_t csztBufOffset )
// {{{
{
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    tchar* lpPos = mpBuf+ csztBufOffset;
    return vm::v_str_substr_last( lpPos, lsztBufLen, cpSrc, vStrlen(cpSrc), ciBFlag, ciEFlag );
}
// }}} end of func CStrPtr::SubStr_l (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::Find (...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find first ciFlag in buffer
// ==  Return  : const tchar*     - [O] Letter ciFlag's postion in buffer
// ==  Params  : ciFlag           - [I] Letter need to be look for
// ==            csztBufOffset    - [I] Buffer offset
inline const tchar* vm::CStrPtr::Find ( const int ciFlag, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_strchr(lpPos, ciFlag);
}
// }}} end of func CStrPtr::Find (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::rFind (...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find last ciFlag in buffer
// ==  Return  : const tchar*     - [O] Letter ciFlag's postion in buffer
// ==  Params  : ciFlag           - [I] Letter need to be look for
// ==            csztBufOffset    - [I] Buffer offset
inline const tchar* vm::CStrPtr::rFind ( const int ciFlag, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return v_strrchr(lpPos, ciFlag);
}
// }}} end of func CStrPtr::rFind (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::CopyFm(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy cpSrc string to buffer
// ==  Return  : size_t           - [O] 
// ==  Params  : cpSrc            - [X] # TODO : Add comment for cpSrc #
// ==            csztBufOffset    - [X] # TODO : Add comment for csztBufOffset #
inline size_t vm::CStrPtr::CopyFm( const tchar* const cpSrc, const size_t csztBufOffset )
// {{{
{
    return CopyFm( cpSrc, vStrlen(cpSrc), csztBufOffset );
}
// }}} end of func CStrPtr::CopyFm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::CopyFm(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy cpSrc string to buffer, string length is csztSrcLen
// ==  Return  : size_t           - [O] 
// ==  Params  : cpSrc            - [X] # TODO : Add comment for cpSrc #
// ==            csztSrcLen       - [X] # TODO : Add comment for csztSrcLen #
// ==            csztBufOffset    - [X] # TODO : Add comment for csztBufOffset #
inline size_t vm::CStrPtr::CopyFm( const tchar* const cpSrc, const size_t csztSrcLen, const size_t csztBufOffset )
// {{{
{
    size_t lsztBufLeft = msztBufSize - csztBufOffset;
    size_t lsztBufLen  = vMax( lsztBufLeft, 0 );

    size_t lsztDataLen = vMin( lsztBufLen, csztSrcLen );

    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_strncpy( lpPos, lsztBufLen, cpSrc, lsztDataLen );
}
// }}} end of func CStrPtr::CopyFm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::CopyTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy buffer string to dst buffer
// ==  Return  : size_t           - [O] String's length in dst
// ==  Params  : pDst             - [O] String's address in dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztBufOffset    - [I] Buffer offset
inline size_t vm::CStrPtr::CopyTo( tchar* const pDst, const size_t csztDstSize, const size_t csztBufOffset )
// {{{
{
    return CopyTo( pDst, csztDstSize, vStrlen(mpBuf), csztBufOffset );
}
// }}} end of func CStrPtr::CopyTo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrPtr::CopyTo(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy buffer string to dst buffer, string length is csztDataLen
// ==  Return  : size_t           - [O] String's length in dst
// ==  Params  : pDst             - [O] String's address in dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            csztDataLen      - [I] String's length
// ==            csztBufOffset    - [I] Buffer offset
inline size_t vm::CStrPtr::CopyTo( tchar* const pDst, const size_t csztDstSize, const size_t csztDataLen, const size_t csztBufOffset )
// {{{
{
    tchar* lpPos = mpBuf + csztBufOffset;
    return vm::v_strncpy(pDst, csztDstSize, lpPos, csztDataLen);
}
// }}} end of func CStrPtr::CopyTo(...)
// ================================================================================================ //

// }}} ![ Class CStrPtr Functional realization ]
// ================================================================================================ //


#endif // ! __CSTRPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
