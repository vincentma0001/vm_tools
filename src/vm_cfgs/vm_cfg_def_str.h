// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_str.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 19:38:24                                               == //
// ==   Modify Time          : 2020-11-13 15:09:11                                               == //
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
#   define vStrSizeof(x) (sizeof(x)/sizeof(tchar))

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

// char type redefine
#   define tchar         char
#   define tschar        signed char
#   define tuchar        unsigned char
// }}}
// --------------------------------------------------------------------------------------
#endif // end of #if defined( _V_USE_WCHAR_ )
// ======================================================================================

#define vStrFmtChar                         vT("%c")
#define vStrFmtChar_l                       vT("%-c")
#define vStrFmtChar_d(   nWidth )           vT("%"#nWidth"c")
#define vStrFmtChar_ld(  nWidth )           vT("%-"#nWidth"c")
#define vStrFmtChar_zd(  nWidth )           vT("%0"#nWidth"c")
#define vStrFmtChar_lzd( nWidth )           vT("%-0"#nWidth"c")

#define vStrFmtCharNum                      vT("%hhd")
#define vStrFmtCharNum_l                    vT("%-hhd")
#define vStrFmtCharNum_d(   nWidth )        vT("%"#nWidth"hhd")
#define vStrFmtCharNum_ld(  nWidth )        vT("%-"#nWidth"hhd")
#define vStrFmtCharNum_zd(  nWidth )        vT("%0"#nWidth"hhd")
#define vStrFmtCharNum_lzd( nWidth )        vT("%-0"#nWidth"hhd")
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
