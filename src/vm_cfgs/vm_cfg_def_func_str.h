// ================================================================================================ //
// ==                                                                                            == //
// ==                                   vm_cfg_def_func_str.h                                    == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 23:07:31                                               == //
// ==   Modify Time          : 2020-11-02 23:16:48                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_STR_H__
#define  __VM_CFG_DEF_FUNC_STR_H__


// ================================================================================================ //
#if        ( _V_SYS_ == _V_WIN_ )
// ------------------------------------------------------------------------------------------------ //
#   include "vm_cfg_def_func_str_win.h"
#elif      ( _V_SYS_ == _V_LUX_ )
#   include "vm_cfg_def_func_str_lux.h"
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_SYS_ == _V_WIN_ )
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_STR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
