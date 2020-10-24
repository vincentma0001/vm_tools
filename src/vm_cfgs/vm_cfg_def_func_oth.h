// ================================================================================================ //
// ==                                                                                            == //
// ==                                    vm_cfg_def_func_oth.h                                   == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 23:26:12                                               == //
// ==   Modify Time          : 2020-10-17 20:55:20                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_OTH_H__
#define  __VM_CFG_DEF_FUNC_OTH_H__

// ================================================================================================ //
// Other macro define : {{{

// ======================================================================================
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vStrftime           strftime
#else  // _V_USE_WCHAR_ != 0
#   define vStrftime           wcsftime
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ======================================================================================

// ======================================================================================
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vStrerror            strerror
#   define vStrerror_s          strerror_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrerror            _wcserror
#   define vStrerror_s          _wcserror_s
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ======================================================================================

// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_OTH_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
