// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CTimeStr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 10:34                                                  == //
// ==   Modify Time          : 2020-11-24 19:29                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTIMESTR_H__
#define  __CTIMESTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CTimeStr : this class wrap time's string functions
class CTimeStr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTimeStr( tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CTimeStr();

private:
    // Copy construct define
    inline CTimeStr             ( const CTimeStr &obj );
    // Assignment operation
    inline CTimeStr& operator = ( const CTimeStr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // timeb value
    tTimet          &mstTimet;

    // buffer's address
    tchar*          mpBuf;
    // buffer's size
    size_t          msztBufSize;

public:
    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Output a formated string by object
    inline tchar* toTimeStr( const tchar* const cpFmt );

public:
    // Output a formated string by tTimet object
    inline static size_t StrTime( const tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt );
// }}} ! Methods

}; // }}} End of class CTimeStr


// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CTimeStr.h.inl"
// ================================================================================================ //

#endif // ! __CTIMESTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
