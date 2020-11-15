// ================================================================================================ //
// ==                                                                                            == //
// ==                                   vm_cfg_def_str_fmt.h                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-13 15:11                                                  == //
// ==   Modify Time          : 2020-11-13 15:11                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_STR_FMT_H__
#define  __VM_CFG_DEF_STR_FMT_H__


// ================================================================================================ //
// [ string format macro defines ] {{{

// ================================================================================================ //
// [ hexadecimal string format macro defines ] {{{
#define vStrFmtHex                                     "%x"
#define vStrFmtHex_l                                   "%-x"
#define vStrFmtHex_w(   nWidth )                       "%"#nWidth"x"
#define vStrFmtHex_lw(  nWidth )                       "%-"#nWidth"x"
#define vStrFmtHex_zw(  nWidth )                       "%0"#nWidth"x"
#define vStrFmtHex_lzw( nWidth )                       "%-0"#nWidth"x"

#define vStrFmtHeX                                     "%X"
#define vStrFmtHeX_l                                   "%-X"
#define vStrFmtHeX_w(   nWidth )                       "%"#nWidth"X"
#define vStrFmtHeX_lw(  nWidth )                       "%-"#nWidth"X"
#define vStrFmtHeX_zw(  nWidth )                       "%0"#nWidth"X"
#define vStrFmtHeX_lzw( nWidth )                       "%-0"#nWidth"X"
// }}} ! hexadecimal string format macro defines
// ================================================================================================ //

// ------------------------------------------------------------------------------------------------ //
// [ char's format macro defines by number mode ] {{{
#define vStrFmtCharHex                                 "%hhx"
#define vStrFmtCharHex_l                               "%-hhx"
#define vStrFmtCharHex_w(   nWidth )                   "%"#nWidth"hhx"
#define vStrFmtCharHex_lw(  nWidth )                   "%-"#nWidth"hhx"
#define vStrFmtCharHex_zw(  nWidth )                   "%0"#nWidth"hhx"
#define vStrFmtCharHex_lzw( nWidth )                   "%-0"#nWidth"hhx"

#define vStrFmtCharHeX                                 "%hhX"
#define vStrFmtCharHeX_l                               "%-hhX"
#define vStrFmtCharHeX_w(   nWidth )                   "%"#nWidth"hhX"
#define vStrFmtCharHeX_lw(  nWidth )                   "%-"#nWidth"hhX"
#define vStrFmtCharHeX_zw(  nWidth )                   "%0"#nWidth"hhX"
#define vStrFmtCharHeX_lzw( nWidth )                   "%-0"#nWidth"hhX"
// }}} ! [ char's format macro defines by number mode ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ short's string format macro defines ] {{{
#define vStrFmtShortHex                                "%hx"
#define vStrFmtShortHex_l                              "%-hx"
#define vStrFmtShortHex_w(   nWidth )                  "%"#nWidth"hx"
#define vStrFmtShortHex_lw(  nWidth )                  "%-"#nWidth"hx"
#define vStrFmtShortHex_zw(  nWidth )                  "%0"#nWidth"hx"
#define vStrFmtShortHex_lzw( nWidth )                  "%-0"#nWidth"hx"

#define vStrFmtShortHeX                                "%hX"
#define vStrFmtShortHeX_l                              "%-hX"
#define vStrFmtShortHeX_w(   nWidth )                  "%"#nWidth"hX"
#define vStrFmtShortHeX_lw(  nWidth )                  "%-"#nWidth"hX"
#define vStrFmtShortHeX_zw(  nWidth )                  "%0"#nWidth"hX"
#define vStrFmtShortHeX_lzw( nWidth )                  "%-0"#nWidth"hX"
// }}} ! [ short's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long's string format macro defines ] {{{
#define vStrFmtLongHex                                 "%lx"
#define vStrFmtLongHex_l                               "%-lx"
#define vStrFmtLongHex_w(   nWidth )                   "%"#nWidth"lx"
#define vStrFmtLongHex_lw(  nWidth )                   "%-"#nWidth"lx"
#define vStrFmtLongHex_zw(  nWidth )                   "%0"#nWidth"lx"
#define vStrFmtLongHex_lzw( nWidth )                   "%-0"#nWidth"lx"

#define vStrFmtLongHeX                                 "%lX"
#define vStrFmtLongHeX_l                               "%-lX"
#define vStrFmtLongHeX_w(   nWidth )                   "%"#nWidth"lX"
#define vStrFmtLongHeX_lw(  nWidth )                   "%-"#nWidth"lX"
#define vStrFmtLongHeX_zw(  nWidth )                   "%0"#nWidth"lX"
#define vStrFmtLongHeX_lzw( nWidth )                   "%-0"#nWidth"lX"
// }}} ! [ long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long long's string format macro defines ] {{{
#define vStrFmtLLongHex                                "%llx"
#define vStrFmtLLongHex_l                              "%-llx"
#define vStrFmtLLongHex_w(   nWidth )                  "%"#nWidth"llx"
#define vStrFmtLLongHex_lw(  nWidth )                  "%-"#nWidth"llx"
#define vStrFmtLLongHex_zw(  nWidth )                  "%0"#nWidth"llx"
#define vStrFmtLLongHex_lzw( nWidth )                  "%-0"#nWidth"llx"

#define vStrFmtLLongHeX                                "%llX"
#define vStrFmtLLongHeX_l                              "%-llX"
#define vStrFmtLLongHeX_w(   nWidth )                  "%"#nWidth"llX"
#define vStrFmtLLongHeX_lw(  nWidth )                  "%-"#nWidth"llX"
#define vStrFmtLLongHeX_zw(  nWidth )                  "%0"#nWidth"llX"
#define vStrFmtLLongHeX_lzw( nWidth )                  "%-0"#nWidth"llX"
// }}} ! [ long long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// }}} ! string format macro defines
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_STR_FMT_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
