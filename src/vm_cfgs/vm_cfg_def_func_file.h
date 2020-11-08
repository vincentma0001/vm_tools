// ================================================================================================ //
// ==                                                                                            == //
// ==                                  vm_cfg_def_func_file.h                                    == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-08 08:42:00                                               == //
// ==   Modify Time          : 2020-11-08 09:17:44                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_FILE_H__
#define  __VM_CFG_DEF_FUNC_FILE_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "vm_cfg_def_sys.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ convet function defines ] {{{
#if        ( _V_SYS_ == _V_WIN_ )
// ------------------------------------------------------------------------------------------------ //
#   include "vm_cfg_def_func_file_win.h"
#elif      ( _V_SYS_ == _V_LUX_ )
#   include "vm_cfg_def_func_file_lux.h"
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_SYS_ == _V_WIN_ )
// }}} ! convet function defines
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_FUNC_FILE_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //