// ================================================================================================ //
// ==                                                                                            == //
// ==                                 vm_cfg_def_str_fmt_oct.h                                   == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-13 15:11:00                                               == //
// ==   Modify Time          : 2020-11-15 10:25:00                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_STR_FMT_OCT_H__
#define  __VM_CFG_DEF_STR_FMT_OCT_H__


// ================================================================================================ //
// [ string format macro defines ] {{{

// ================================================================================================ //
// [ octal string format macro defines ] {{{
#define vStrFmtOct                                     "%o"
#define vStrFmtOct_l                                   "%-o"
#define vStrFmtOct_w(   nWidth )                       "%"#nWidth"o"
#define vStrFmtOct_lw(  nWidth )                       "%-"#nWidth"o"
#define vStrFmtOct_zw(  nWidth )                       "%0"#nWidth"o"
#define vStrFmtOct_lzw( nWidth )                       "%-0"#nWidth"o"
// }}} ! octal string format macro defines
// ================================================================================================ //

// ------------------------------------------------------------------------------------------------ //
// [ char's string format macro defines ] {{{
#define vStrFmtCharOct                                 "%o"
#define vStrFmtCharOct_l                               "%-o"
#define vStrFmtCharOct_w(   nWidth )                   "%"#nWidth"o"
#define vStrFmtCharOct_lw(  nWidth )                   "%-"#nWidth"o"
#define vStrFmtCharOct_zw(  nWidth )                   "%0"#nWidth"o"
#define vStrFmtCharOct_lzw( nWidth )                   "%-0"#nWidth"o"
// }}} ! [ char's string format macro defins ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ short's string format macro defines ] {{{
#define vStrFmtShortOct                                "%ho"
#define vStrFmtShortOct_l                              "%-ho"
#define vStrFmtShortOct_w(   nWidth )                  "%"#nWidth"ho"
#define vStrFmtShortOct_lw(  nWidth )                  "%-"#nWidth"ho"
#define vStrFmtShortOct_zw(  nWidth )                  "%0"#nWidth"ho"
#define vStrFmtShortOct_lzw( nWidth )                  "%-0"#nWidth"ho"
// }}} ! [ short's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long's string format macro defines ] {{{
#define vStrFmtLongOct                                 "%lo"
#define vStrFmtLongOct_l                               "%-lo"
#define vStrFmtLongOct_w(   nWidth )                   "%"#nWidth"lo"
#define vStrFmtLongOct_lw(  nWidth )                   "%-"#nWidth"lo"
#define vStrFmtLongOct_zw(  nWidth )                   "%0"#nWidth"lo"
#define vStrFmtLongOct_lzw( nWidth )                   "%-0"#nWidth"lo"
// }}} ! [ long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long long's string format macro defines ] {{{
#define vStrFmtLLongOct                                "%llo"
#define vStrFmtLLongOct_l                              "%-llo"
#define vStrFmtLLongOct_w(   nWidth )                  "%"#nWidth"llo"
#define vStrFmtLLongOct_lw(  nWidth )                  "%-"#nWidth"llo"
#define vStrFmtLLongOct_zw(  nWidth )                  "%0"#nWidth"llo"
#define vStrFmtLLongOct_lzw( nWidth )                  "%-0"#nWidth"llo"
// }}} ! [ long long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// }}} ! string format macro defines
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_STR_FMT_OCT_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
