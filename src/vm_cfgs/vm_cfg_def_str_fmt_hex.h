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
#define vStrFmthex                                     "%x"
#define vStrFmthex_l                                   "%-x"
#define vStrFmthex_w(   nWidth )                       "%"#nWidth"x"
#define vStrFmthex_lw(  nWidth )                       "%-"#nWidth"x"
#define vStrFmthex_zw(  nWidth )                       "%0"#nWidth"x"
#define vStrFmthex_lzw( nWidth )                       "%-0"#nWidth"x"

#define vStrFmtHex                                     "%X"
#define vStrFmtHex_l                                   "%-X"
#define vStrFmtHex_w(   nWidth )                       "%"#nWidth"X"
#define vStrFmtHex_lw(  nWidth )                       "%-"#nWidth"X"
#define vStrFmtHex_zw(  nWidth )                       "%0"#nWidth"X"
#define vStrFmtHex_lzw( nWidth )                       "%-0"#nWidth"X"
// }}} ! hexadecimal string format macro defines
// ================================================================================================ //

// ------------------------------------------------------------------------------------------------ //
// [ char's format macro defines by number mode ] {{{
#define vStrFmtCharhex                                 "%hhx"
#define vStrFmtCharhex_l                               "%-hhx"
#define vStrFmtCharhex_w(   nWidth )                   "%"#nWidth"hhx"
#define vStrFmtCharhex_lw(  nWidth )                   "%-"#nWidth"hhx"
#define vStrFmtCharhex_zw(  nWidth )                   "%0"#nWidth"hhx"
#define vStrFmtCharhex_lzw( nWidth )                   "%-0"#nWidth"hhx"

#define vStrFmtCharHex                                 "%hhX"
#define vStrFmtCharHex_l                               "%-hhX"
#define vStrFmtCharHex_w(   nWidth )                   "%"#nWidth"hhX"
#define vStrFmtCharHex_lw(  nWidth )                   "%-"#nWidth"hhX"
#define vStrFmtCharHex_zw(  nWidth )                   "%0"#nWidth"hhX"
#define vStrFmtCharHex_lzw( nWidth )                   "%-0"#nWidth"hhX"
// }}} ! [ char's format macro defines by number mode ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ short's string format macro defines ] {{{
#define vStrFmtShorthex                                "%hx"
#define vStrFmtShorthex_l                              "%-hx"
#define vStrFmtShorthex_w(   nWidth )                  "%"#nWidth"hx"
#define vStrFmtShorthex_lw(  nWidth )                  "%-"#nWidth"hx"
#define vStrFmtShorthex_zw(  nWidth )                  "%0"#nWidth"hx"
#define vStrFmtShorthex_lzw( nWidth )                  "%-0"#nWidth"hx"

#define vStrFmtShortHex                                "%hX"
#define vStrFmtShortHex_l                              "%-hX"
#define vStrFmtShortHex_w(   nWidth )                  "%"#nWidth"hX"
#define vStrFmtShortHex_lw(  nWidth )                  "%-"#nWidth"hX"
#define vStrFmtShortHex_zw(  nWidth )                  "%0"#nWidth"hX"
#define vStrFmtShortHex_lzw( nWidth )                  "%-0"#nWidth"hX"
// }}} ! [ short's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long's string format macro defines ] {{{
#define vStrFmtLonghex                                 "%lx"
#define vStrFmtLonghex_l                               "%-lx"
#define vStrFmtLonghex_w(   nWidth )                   "%"#nWidth"lx"
#define vStrFmtLonghex_lw(  nWidth )                   "%-"#nWidth"lx"
#define vStrFmtLonghex_zw(  nWidth )                   "%0"#nWidth"lx"
#define vStrFmtLonghex_lzw( nWidth )                   "%-0"#nWidth"lx"

#define vStrFmtLongHex                                 "%lX"
#define vStrFmtLongHex_l                               "%-lX"
#define vStrFmtLongHex_w(   nWidth )                   "%"#nWidth"lX"
#define vStrFmtLongHex_lw(  nWidth )                   "%-"#nWidth"lX"
#define vStrFmtLongHex_zw(  nWidth )                   "%0"#nWidth"lX"
#define vStrFmtLongHex_lzw( nWidth )                   "%-0"#nWidth"lX"
// }}} ! [ long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long long's string format macro defines ] {{{
#define vStrFmtLLonghex                                "%llx"
#define vStrFmtLLonghex_l                              "%-llx"
#define vStrFmtLLonghex_w(   nWidth )                  "%"#nWidth"llx"
#define vStrFmtLLonghex_lw(  nWidth )                  "%-"#nWidth"llx"
#define vStrFmtLLonghex_zw(  nWidth )                  "%0"#nWidth"llx"
#define vStrFmtLLonghex_lzw( nWidth )                  "%-0"#nWidth"llx"

#define vStrFmtLLongHex                                "%llX"
#define vStrFmtLLongHex_l                              "%-llX"
#define vStrFmtLLongHex_w(   nWidth )                  "%"#nWidth"llX"
#define vStrFmtLLongHex_lw(  nWidth )                  "%-"#nWidth"llX"
#define vStrFmtLLongHex_zw(  nWidth )                  "%0"#nWidth"llX"
#define vStrFmtLLongHex_lzw( nWidth )                  "%-0"#nWidth"llX"
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
