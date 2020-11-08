// ================================================================================================ //
// ==                                                                                            == //
// ==                                        vm_system.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-02 19:35:29                                               == //
// ==   Modify Time          : 2020-11-06 11:54:45                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_SYSTEM_H__
#define  __VM_SYSTEM_H__

// ================================================================================================ //
// [ Include files ] {{{

// vm's function depend on included

// vm's function files inlcuded
#if        ( _V_SYS_ == _V_WIN_ )
// Win coders {{{
#include <vm_tools/vm_system/CWinKernal.h>
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux codes {{{
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )

// }}} ! Include files
// ================================================================================================ //

#endif // ! __VM_SYSTEM_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //