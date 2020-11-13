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

// ------------------------------------------------------------------------------------------------ //
// [ char's string format macro defins ] {{{
#define vStrFmtChar                                    "%c"
#define vStrFmtChar_l                                  "%-c"
#define vStrFmtChar_w(   nWidth )                       "%"#nWidth"c"
#define vStrFmtChar_lw(  nWidth )                       "%-"#nWidth"c"
#define vStrFmtChar_zw(  nWidth )                       "%0"#nWidth"c"
#define vStrFmtChar_lzw( nWidth )                       "%-0"#nWidth"c"

#define vStrFmtUChar                                    "%c"
#define vStrFmtUChar_l                                  "%-c"
#define vStrFmtUChar_w(   nWidth )                      "%"#nWidth"c"
#define vStrFmtUChar_lw(  nWidth )                      "%-"#nWidth"c"
#define vStrFmtUChar_zw(  nWidth )                      "%0"#nWidth"c"
#define vStrFmtUChar_lzw( nWidth )                      "%-0"#nWidth"c"
// }}} ! [ char's string format macro defins ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ char's format macro defines by number mode ] {{{

#define vStrFmtCharNum                                  "%hhd"
#define vStrFmtCharNum_l                                "%-hhd"
#define vStrFmtCharNum_w(   nWidth )                    "%"#nWidth"hhd"
#define vStrFmtCharNum_lw(  nWidth )                    "%-"#nWidth"hhd"
#define vStrFmtCharNum_zw(  nWidth )                    "%0"#nWidth"hhd"
#define vStrFmtCharNum_lzw( nWidth )                    "%-0"#nWidth"hhd"

#define vStrFmtUCharNum                                 "%hhu"
#define vStrFmtUCharNum_l                               "%-hhu"
#define vStrFmtUCharNum_w(   nWidth )                   "%"#nWidth"hhu"
#define vStrFmtUCharNum_lw(  nWidth )                   "%-"#nWidth"hhu"
#define vStrFmtUCharNum_zw(  nWidth )                   "%0"#nWidth"hhu"
#define vStrFmtUCharNum_lzw( nWidth )                   "%-0"#nWidth"hhu"

// }}} ! [ char's format macro defines by number mode ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ short's string format macro defines ] {{{
#define vStrFmtShort                                    "%hd"
#define vStrFmtShort_l                                  "%-hd"
#define vStrFmtShort_w(   nWidth )                      "%"#nWidth"hd"
#define vStrFmtShort_lw(  nWidth )                      "%-"#nWidth"hd"
#define vStrFmtShort_zw(  nWidth )                      "%0"#nWidth"hd"
#define vStrFmtShort_lzw( nWidth )                      "%-0"#nWidth"hd"

#define vStrFmtUShort                                   "%hu"
#define vStrFmtUShort_l                                 "%-hu"
#define vStrFmtUShort_w(   nWidth )                     "%"#nWidth"hu"
#define vStrFmtUShort_lw(  nWidth )                     "%-"#nWidth"hu"
#define vStrFmtUShort_zw(  nWidth )                     "%0"#nWidth"hu"
#define vStrFmtUShort_lzw( nWidth )                     "%-0"#nWidth"hu"
// }}} ! [ short's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ int's string format macro defines ] {{{
#define vStrFmtInt                                      "%d"
#define vStrFmtInt_l                                    "%-d"
#define vStrFmtInt_w(   nWidth )                        "%"#nWidth"d"
#define vStrFmtInt_lw(  nWidth )                        "%-"#nWidth"d"
#define vStrFmtInt_zw(  nWidth )                        "%0"#nWidth"d"
#define vStrFmtInt_lzw( nWidth )                        "%-0"#nWidth"d"

#define vStrFmtUInt                                     "%u"
#define vStrFmtUInt_l                                   "%-u"
#define vStrFmtUInt_w(   nWidth )                       "%"#nWidth"u"
#define vStrFmtUInt_lw(  nWidth )                       "%-"#nWidth"u"
#define vStrFmtUInt_zw(  nWidth )                       "%0"#nWidth"u"
#define vStrFmtUInt_lzw( nWidth )                       "%-0"#nWidth"u"
// }}} ! [ int's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long's string format macro defines ] {{{
#define vStrFmtLong                                     "%ld"
#define vStrFmtLong_l                                   "%-ld"
#define vStrFmtLong_w(   nWidth )                       "%"#nWidth"ld"
#define vStrFmtLong_lw(  nWidth )                       "%-"#nWidth"ld"
#define vStrFmtLong_zw(  nWidth )                       "%0"#nWidth"ld"
#define vStrFmtLong_lzw( nWidth )                       "%-0"#nWidth"ld"

#define vStrFmtULong                                    "%lu"
#define vStrFmtULong_l                                  "%-lu"
#define vStrFmtULong_w(   nWidth )                      "%"#nWidth"lu"
#define vStrFmtULong_lw(  nWidth )                      "%-"#nWidth"lu"
#define vStrFmtULong_zw(  nWidth )                      "%0"#nWidth"lu"
#define vStrFmtULong_lzw( nWidth )                      "%-0"#nWidth"lu"
// }}} ! [ long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long long's string format macro defines ] {{{
#define vStrFmtLLong                                    "%lld"
#define vStrFmtLLong_l                                  "%-lld"
#define vStrFmtLLong_w(   nWidth )                      "%"#nWidth"lld"
#define vStrFmtLLong_lw(  nWidth )                      "%-"#nWidth"lld"
#define vStrFmtLLong_zw(  nWidth )                      "%0"#nWidth"lld"
#define vStrFmtLLong_lzw( nWidth )                      "%-0"#nWidth"lld"

#define vStrFmtULLong                                   "%llu"
#define vStrFmtULLong_l                                 "%-llu"
#define vStrFmtULLong_w(   nWidth )                     "%"#nWidth"llu"
#define vStrFmtULLong_lw(  nWidth )                     "%-"#nWidth"llu"
#define vStrFmtULLong_zw(  nWidth )                     "%0"#nWidth"llu"
#define vStrFmtULLong_lzw( nWidth )                     "%-0"#nWidth"llu"
// }}} ! [ long long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ size_t's string format macro defines ] {{{
#define vStrFmtSize                                     "%zu"
#define vStrFmtSize_l                                   "%-zu"
#define vStrFmtSize_w(   nWidth )                       "%"#nWidth"zu"
#define vStrFmtSize_lw(  nWidth )                       "%-"#nWidth"zu"
#define vStrFmtSize_zw(  nWidth )                       "%0"#nWidth"zu"
#define vStrFmtSize_lzw( nWidth )                       "%-0"#nWidth"zu"
// }}} ! [ size_t's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ float string's format macro defines ] {{{
#define vStrFmtFloat                                    "%f"
#define vStrFmtFloat_l                                  "%-f"
#define vStrFmtFloat_ld(           nDecimal )           "%-."#nDecimal"f"
#define vStrFmtFloat_w(    nWidth           )           "%"#nWidth"f"
#define vStrFmtFloat_wd(   nWidth, nDecimal )           "%"#nWidth"."#nDecimal"f"
#define vStrFmtFloat_lw(   nWidth           )           "%-"#nWidth"f"
#define vStrFmtFloat_lwd(  nWidth, nDecimal )           "%-"#nWidth"."#nDecimal"f"
#define vStrFmtFloat_zw(   nWidth           )           "%0"#nWidth"f"
#define vStrFmtFloat_zwd(  nWidth, nDecimal )           "%0"#nWidth"."#nDecimal"f"
#define vStrFmtFloat_lzw(  nWidth           )           "%-0"#nWidth"f"
#define vStrFmtFloat_lzwd( nWidth, nDecimal )           "%r-0"#nWidth"."#nDecimal"f"
// }}} ! [ float string's format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ Double string's format macro defines ] {{{
#define vStrFmtDouble                                   "%f"
#define vStrFmtDouble_l                                 "%-f"
#define vStrFmtDouble_ld(           nDecimal )          "%-."#nDecimal"f"
#define vStrFmtDouble_w(    nWidth           )          "%"#nWidth"f"
#define vStrFmtDouble_wd(   nWidth, nDecimal )          "%"#nWidth"."#nDecimal"f"
#define vStrFmtDouble_lw(   nWidth           )          "%-"#nWidth"f"
#define vStrFmtDouble_lwd(  nWidth, nDecimal )          "%-"#nWidth"."#nDecimal"f"
#define vStrFmtDouble_zw(   nWidth           )          "%0"#nWidth"f"
#define vStrFmtDouble_zwd(  nWidth, nDecimal )          "%0"#nWidth"."#nDecimal"f"
#define vStrFmtDouble_lzw(  nWidth           )          "%-0"#nWidth"f"
#define vStrFmtDouble_lzwd( nWidth, nDecimal )          "%r-0"#nWidth"."#nDecimal"f"
// }}} ! [ Double string's format macro defines ]
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
