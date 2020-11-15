// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_ret.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-15 10:55                                                  == //
// ==   Modify Time          : 2020-11-15 10:55                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_RET_H__
#define  __VM_CFG_DEF_RET_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "vm_cfg_def_lmt.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    vRetSucess
#   define vRetSucess      0
#endif // !vRetSucess

#ifndef    vErrOffSet
#   define vErrOffSet      1
#endif // !vErrOffSet

#ifndef    vWrnOffSet
#   define vWrnOffSet      50
#endif // !vWrnOffSet
// }}} ! Macrodefs
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// enum emRet : this enum define function error, warn info
enum emRet
// {{{
{
    // no errer
    emSucess            = vRetSucess,

    // error return
    emError             = vMaxuLong - vErrOffSet,
    // error return for vm::v_sprintf
    emErrStrFmt         = emError   - 1,

    // warn return
    emWarns             = vMaxuLong - vWrnOffSet
};
// }}} End of def enum emErrRet
// ------------------------------------------------------------------------------------------------ //

// ================================================================================================ //
// [ emRet macro defines ] {{{

#ifndef    vRetErr
#   define vRetErr                  vMakeLLong( vm::emRet::emError,             errno )
#endif // !vRetErr

#ifndef    vRetWrn
#   define vRetWrn                  vMakeLLong( vm::emRet::emWarns,             errno )
#endif // !vRetWrn

#ifndef    vRetErrStrFmt
#   define vRetErrStrFmt            vMakeLLong( vm::emRet::emErrStrFmt,         errno )
#endif // !vRetErrStrFmt

#ifndef    vCheckFmtStrRet
#   define vCheckFmtStrRet( bRet, cllErrCode )      if(bRet==false){cllErrCode=vRetErrStrFmt;}
#endif // !vCheckFmtStrRet

// }}} ! emRet macro defines
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_RET_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
