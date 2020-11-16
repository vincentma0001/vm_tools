// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CSysErr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 10:45                                                  == //
// ==   Modify Time          : 2020-11-16 18:32                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSYSERR_HPP__
#define  __CSYSERR_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CSysErrPtr.h"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    _V_CSYSERR_BUF_SIZE_
#   define _V_CSYSERR_BUF_SIZE_      256
#endif // !_V_CSYSERR_BUF_SIZE_

#ifndef    vSysErrCode
#   define vSysErrCode( tsztBufSize, llErrCode )        vm:CSysErr<tsztBufSize>(llErrCode).toCode()
#endif // !vSysErrCode

#ifndef    vSysErrCodeD
#   define vSysErrCodeD( llErrCode )                    vm::CSysErr<_V_CSYSERR_BUF_SIZE_>(llErrCode).toCode()
#endif // !vSysErrCodeD

#ifndef    vSysErrMsg
#   define vSysErrMsg( tsztBufSize, llErrCode )         vm::CSysErr<tsztBufSize>(llErrCode).toString()
#endif // !vSysErrMsg

#ifndef    vSysErrMsgD
#   define vSysErrMsgD( llErrCode )                     vm::CSysErr<_V_CSYSERR_BUF_SIZE_>(llErrCode).toString()
#endif // !vSysErrMsgD
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CSysErr : this class deal with systime error
template< size_t tsztBufSize >
class CSysErr : public CSysErrPtr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CSysErr(                      );
    // Construct define
    inline          CSysErr( const long clErrCode );
    // Destruct define
    inline virtual ~CSysErr(                      );

private:
    // Copy construct define
    inline CSysErr             ( const CSysErr &obj );
    // Assignment operation
    inline CSysErr& operator = ( const CSysErr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tchar       mszBuf[tsztBufSize];
// }}} ! Members

// Methods   : {{{
public:
    // Format output error message, 
    //      $EC = error code, $EM = error message
    inline tchar* Fmt( const tchar* const cpFmt=vT("%EC:%EM"), ... );
// }}} ! Methods

}; // }}} End of class CSysErr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CSysErr.hpp.inl"
// ================================================================================================ //


#endif // ! __CSYSERR_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
