// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CErr.h                                            == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 10:45                                                  == //
// ==   Modify Time          : 2020-11-19 11:51                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERR_H__
#define  __CERR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CSysErr.hpp"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    _V_CERR_BUF_SIZE_
#   define _V_CERR_BUF_SIZE_        1024
#endif // !_V_CERR_BUF_SIZE_

#ifndef    _V_CERR_DEF_FMT_
#   define _V_CERR_DEF_FMT_         vT("%ESC:%ESM - %EUC:%EUM")
#endif // !_V_CERR_DEF_FMT_

#ifndef    vErr
#   define vErr(tSysErr,tUsrErr,tBufSize,eErrCode)      vm::CErr<tSysErr,tUsrErr,tBufSize,eErrCode>(eErrCode)
#endif // !vErr

#ifndef    vErrD
#   define vErrD(tUsrErr,eErrCode)                      vm::CErr<vm::CSysErr<_V_CERR_BUF_SIZE_>,tUsrErr,_V_CERR_BUF_SIZE_>(eErrCode)
#endif // !vErrD

#ifndef    vErrDD
#   define vErrDD(eErrCode)                             vm::CErr<vm::CSysErr<_V_CERR_BUF_SIZE_>,vm::CUsrErr<int>,_V_CERR_BUF_SIZE_>(eErrCode)
#endif // !vErrDD

#ifndef    eThrow
#   define eThrow(tSysErr,tUsrErr,tBufSize,eErrCode)    vm::CErr<tSysErr,tUsrErr,tBufSize>(emError).Throw()
#endif // !eThrow

#ifndef    eThrowD
#   define eThrowD(tUsrErr,eErrCode)                    vm::CErr<vm::CSysErr<_V_CERR_BUF_SIZE_>,tUsrErr,_V_CERR_BUF_SIZE_>(emError).Throw()
#endif // !eThrowD

#ifndef    eThrowDD
#   define eThrowDD(eErrCode)                           vm::CErr<vm::CSysErr<_V_CERR_BUF_SIZE_>,vm::CUsrErr<int>,_V_CERR_BUF_SIZE_>(emError).Throw()
#endif // !eThrowDD
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CErr : this class deal with error operattion
template< typename tSysErr, typename tUsrErr, size_t tsztBufSize >
class CErr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CErr( const long long cllErrCode );
    // Destruct define
    inline virtual ~CErr();

private:
    // Copy construct define
    inline CErr             ( const CErr &obj );
    // Assignment operation
    inline CErr& operator = ( const CErr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tchar               mszBuf[tsztBufSize];

    tSysErr             mSysErr;
    tUsrErr             mUsrErr;
// }}} ! Members

// Methods   : {{{
public:
    // Format output error message, 
    //      $ESC = sys error code, $ESM = sys error message
    //      $EUC = usr error code, $EUM = use error message
    inline tchar* Fmt( const tchar* const cpFmt=_V_CERR_DEF_FMT_, ... );
    // Format output error message, 
    //      $ESC = sys error code, $ESM = sys error message
    //      $EUC = usr error code, $EUM = use error message
    inline tchar* Fmt( const tchar* const cpFmt,       va_list& vList );

    // Check CErr object has error or not
    inline bool HasErr ( void );

    // Check CErr object has error or not, if has error throw a format errror string
    inline void Throw  ( const tchar* const cpFmt=_V_CERR_DEF_FMT_, ... );
// }}} ! Methods

}; // }}} End of class CErr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CErr.hpp.inl"
// ================================================================================================ //

#endif // ! __CERR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
