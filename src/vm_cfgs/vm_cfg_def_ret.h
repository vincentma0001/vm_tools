// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_ret.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-15 10:55                                                  == //
// ==   Modify Time          : 2020-11-18 17:16                                                  == //
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
#ifndef    _V_RET_SUCESS_
#   define _V_RET_SUCESS_       0
#endif // !_V_RET_SUCESS_

#ifndef    vErrComOffSet
#   define vErrComOffSet        1
#endif // !vErrComOffSet

#ifndef    vErrOffSet
#   define vErrOffSet           100
#endif // !vErrOffSet

#ifndef    vWrmComOffset
#   define vWrmComOffset        200
#endif // !vWrmComOffset

#ifndef    vWrnOffSet
#   define vWrnOffSet           300
#endif // !vWrnOffSet
// }}} ! Macrodefs
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// enum emRet : this enum define function error, warn info
enum emRet
{ // {{{
    // no errer
    emSucess            = _V_RET_SUCESS_,

// ------------------------------------------------------------------------------------------------ //
    // Common error return
    emErrorCom          = vMaxsInt - vErrComOffSet,
    // error return for vm::v_sprintf
    emErrStrFmt         = emErrorCom - 1,

    // Common error trturn
    emWarnsCom          = vMaxsInt - vErrComOffSet,

// ------------------------------------------------------------------------------------------------ //
    // error return
    emError             = vMaxsInt - vErrOffSet,
    // warn return
    emWarns             = vMaxsInt - vWrnOffSet
}; // }}} End of def enum emErrRet
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

#ifndef    vCheckStrFmtRet
#   define vCheckStrFmtRet( bRet, cllErrCode )      if(bRet==false){cllErrCode=vRetErrStrFmt;}
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
