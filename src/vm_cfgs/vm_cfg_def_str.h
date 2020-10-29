// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_str.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 19:38:24                                               == //
// ==   Modify Time          : 2020-10-29 11:44:05                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef __VM_CFG_DEF_STR_H__
#define __VM_CFG_DEF_STR_H__


// ================================================================================================ //
// String's types macro define : {{{

// ======================================================================================
#if defined( _V_USE_WCHAR_ ) && ( _V_USE_WCHAR_!=0 )
// --------------------------------------------------------------------------------------
// wide char version string defines {{{
// string macro
#   define vT(x)         L##x
// mbstrlen
#   define vStrSizeof(x) sizeof(x)/sizeof(tchar)
#   define vIsAlpha     ::iswalpha
#   define vIsSpace     ::iswspace
#   define vToUpper     ::towupper
#   define vToLower     ::towlower

// char type redefine 
#   define tchar         wchar_t
#   define tschar        signed wchar_t
#   define tuchar        unsigned wchar_t
// }}}
#else  // default definition : _V_USE_WCHAR_ == 0
// {{{
// string macro
#   define vT(x)         x
#   define vStrSizeof(x) sizeof(x)
#   define vIsAlpha     ::isalpha
#   define vIsSpace     ::isspace
#   define vToUpper     ::toupper
#   define vToLower     ::tolower

// char type redefine
#   define tchar         char
#   define tschar        signed char
#   define tuchar        unsigned char
// }}}
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

// }}}
// ================================================================================================ //

#endif // __VM_CFG_DEF_STR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
