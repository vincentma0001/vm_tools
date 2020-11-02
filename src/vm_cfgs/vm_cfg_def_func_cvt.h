// ================================================================================================ //
// ==                                                                                            == //
// =                                     vm_cfg_def_func_cvt.h                                   == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 23:17:57                                               == //
// ==   Modify Time          : 2020-11-02 22:49:25                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_CVT_H__
#define  __VM_CFG_DEF_FUNC_CVT_H__


// ================================================================================================ //
// [ convet function defines ] {{{
#if        ( _V_SYS_ == _V_WIN_ )
// ------------------------------------------------------------------------------------------------ //
#   include "vm_cfg_def_func_cvt_win.h"
#elif      ( _V_SYS_ == _V_LUX_ )
#   include "vm_cfg_def_func_cvt_lux.h"
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_SYS_ == _V_WIN_ )
// }}} ! convet function defines
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_FUNC_CVT_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
