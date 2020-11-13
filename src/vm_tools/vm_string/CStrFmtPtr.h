// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CStrFmtPtr.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-13 09:03                                                  == //
// ==   Modify Time          : 2020-11-13 09:03                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRFMTPTR_H__
#define  __CSTRFMTPTR_H__


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
// ==  Class CStrFmtPtr : this class deal with create format string                              == //
// ------------------------------------------------------------------------------------------------ //
class CStrFmtPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emRet : this enum define return value for class CMemPtr
    enum emRet
    // {{{
    {
        emSucess          = 0,

        emError           = vMaxsLong - 1,
        emErrUnEnoughBuf  = emError   - 1,
        emErrUnEnoughData = emError   - 2,
        emErrCopyFailed   = emError   - 3,

        emWarns             = vMaxsLong - 20,
        emWrnUnCompleteCopy = emWarns   - 1,
    };
    // }}} End of def enum emRet
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CStrFmtPtr( _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize );
    // Destruct define
    inline virtual ~CStrFmtPtr(                                                         );

private:
    // Copy construct define
    inline CStrFmtPtr             ( const CStrFmtPtr &obj );
    // Assignment operation
    inline CStrFmtPtr& operator = ( const CStrFmtPtr &obj );
// }}} ! Construct & Destruct
// ------------------------------------------------------------------------------------------------ //
// Operators : {{{
public:
    // string pointer
    inline tchar*   operator * ( void );

    // add string to buffer
    inline CStrFmtPtr& operator () ( const tchar* const cpStr, const size_t csztStrLen );
    // add string to buffer
    inline CStrFmtPtr& operator () ( const tchar* const cpStr                          );
// }}} ! Operators

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // string buffer pointer
    tchar*          mpBuf;
    // string buffer size
    size_t          msztBufSize;

    // buffer's offset
    size_t          msztOffset;

    // error code
    long long       mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    /* TODO Add class's Methods here */
// }}} ! Methods

};
// }}} ! [ class CStrFmtPtr ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CStrFmtPtr.h.inl"
// ================================================================================================ //


#endif // ! __CSTRFMTPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
