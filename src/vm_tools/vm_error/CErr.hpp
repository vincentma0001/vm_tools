// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CErr.h                                            == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 10:45                                                  == //
// ==   Modify Time          : 2020-11-16 13:48                                                  == //
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

// Macrodefs : {{{
#ifndef    _V_CERR_BUF_SIZE_
#   define _V_CERR_BUF_SIZE_ 1024
#endif // !_V_CERR_BUF_SIZE_

#ifndef    vErrThrow
#   define vErrThrow(tBufSize, eErrCode)        vm::CErr<tBufSize>(eErrCode).Throw()
#endif // !vErrThrow

#ifndef    vErr
#   define vErr(tSysErr,tUsrErr,llErrCode)      vm::CErr<tSysErr,tUsrErr>(llErrCode)
#endif // !vErr
// }}} ! Macrodefs

// Class CErr : this class deal with error operattion
template< class tSysErr, class tUsrErr >
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
    tchar               mszBuf[_V_CERR_BUF_SIZE_];

    tSysErr             mSysErr;
    tUsrErr             mUsrErr;
// }}} ! Members

// Methods   : {{{
public:
    // Format output error message, 
    //      $ESC = sys error code, $ESM = sys error message
    //      $EUC = usr error code, $EUM = use error message
    tchar* Fmt( const tchar* const cpFmt=vT("%ESC:%ESM - %EUC:%EUM"), ... );
// }}} ! Methods

}; // }}} End of class CErr

}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
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
