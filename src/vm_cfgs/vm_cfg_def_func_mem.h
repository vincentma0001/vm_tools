// ================================================================================================ //
// ==                                                                                            == //
// ==                                   vm_cfg_def_func_mem.h                                    == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 23:10:18                                               == //
// ==   Modify Time          : 2020-10-27 18:44:19                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_MEM_H__
#define  __VM_CFG_DEF_FUNC_MEM_H__

// ================================================================================================ //
// Memory function macro define : {{{

// ======================================================================================
// Locate character in block of characters(function)
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vMemchr              ::memchr
#else  // _V_USE_WCHAR_ != 0
#   define vMemchr              ::wmemchr
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// Compare two blocks of characters(function)
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vMemcmp              ::memcmp
#else  // _V_USE_WCHAR_ != 0
#   define vMemcmp              ::wmemcmp
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// Copy block of characters(function)
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vMemcpy              ::memcpy
#   define vMemcpy_s            ::memcpy_s
#else  // _V_USE_WCHAR_ != 0
#   define vMemcpy              ::wmemcpy
#   define vMemcpy_s            ::wmemcpy_s
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// Move block of characters(function)
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vMemmove             ::memmove
#   define vMemmove_s           ::memmove_s
#else  // _V_USE_WCHAR_ != 0
#   define vMemmove             ::wmemmove
#   define vMemmove_s           ::wmemmove_s
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// Fill array of characters(function)
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
#   define vMemset              ::memset
#else  // _V_USE_WCHAR_ != 0
#   define vMemset              ::wmemset
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// Other functions
#if ( _V_USE_WCHAR_ == 0 )
// --------------------------------------------------------------------------------------
// {{{
#if        ( _V_SYS_ == _V_WIN_ )
#   define vMemicmp             ::_memicmp
#elif      ( _V_SYS_ == _V_LUX_ )
#   define vMemicmp             ::memcmp
#endif // !( _V_SYS_ == _V_WIN_ )
// }}}
#else  // _V_USE_WCHAR_ != 0
// {{{
#if        ( _V_SYS_ == _V_WIN_ )
#   define vMemicmp             ::_wmemicmp
#elif      ( _V_SYS_ == _V_LUX_ )
#   define vMemicmp             ::wmemcmp
#endif // !( _V_SYS_ == _V_WIN_ )
// }}}
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// ======================================================================================
// memccpy functions
#if ( _V_USE_WCHAR_ == 0 )
// -------------------------------------------------------------------------------------
// {{{-
#if        ( _V_SYS_ == _V_WIN_ )
#   define vMemccpy             ::_memccpy
#elif      ( _V_SYS_ == _V_LUX_ )
#   define vMemccpy             ::memccpy
#endif // !( _V_SYS_ == _V_WIN_ )
// }}}
#else  // _V_USE_WCHAR_ != 0
// {{{
#if        ( _V_SYS_ == _V_WIN_ )
#   define vMemccpy ::_wmemccpy
#elif      ( _V_SYS_ == _V_LUX_ )
#   define vMemccpy ::_wmemccpy
#endif // !( _V_SYS_ == _V_WIN_ )
// }}}
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_MEM_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
