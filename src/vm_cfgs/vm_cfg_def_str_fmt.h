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
#define vStrFmtChar                                    vT("%c")
#define vStrFmtChar_l                                  vT("%-c")
#define vStrFmtChar_w(   nWidth )                      vT("%"#nWidth"c")
#define vStrFmtChar_lw(  nWidth )                      vT("%-"#nWidth"c")
#define vStrFmtChar_zw(  nWidth )                      vT("%0"#nWidth"c")
#define vStrFmtChar_lzw( nWidth )                      vT("%-0"#nWidth"c")

#define vStrFmtUChar                                   vT("%c")
#define vStrFmtUChar_l                                 vT("%-c")
#define vStrFmtUChar_w(   nWidth )                     vT("%"#nWidth"c")
#define vStrFmtUChar_lw(  nWidth )                     vT("%-"#nWidth"c")
#define vStrFmtUChar_zw(  nWidth )                     vT("%0"#nWidth"c")
#define vStrFmtUChar_lzw( nWidth )                     vT("%-0"#nWidth"c")
// }}} ! [ char's string format macro defins ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ char's format macro defines by number mode ] {{{

#define vStrFmtCharNum                                 vT("%hhd")
#define vStrFmtCharNum_l                               vT("%-hhd")
#define vStrFmtCharNum_w(   nWidth )                   vT("%"#nWidth"hhd")
#define vStrFmtCharNum_lw(  nWidth )                   vT("%-"#nWidth"hhd")
#define vStrFmtCharNum_zw(  nWidth )                   vT("%0"#nWidth"hhd")
#define vStrFmtCharNum_lzw( nWidth )                   vT("%-0"#nWidth"hhd")

#define vStrFmtUCharNum                                vT("%hhu")
#define vStrFmtUCharNum_l                              vT("%-hhu")
#define vStrFmtUCharNum_w(   nWidth )                  vT("%"#nWidth"hhu")
#define vStrFmtUCharNum_lw(  nWidth )                  vT("%-"#nWidth"hhu")
#define vStrFmtUCharNum_zw(  nWidth )                  vT("%0"#nWidth"hhu")
#define vStrFmtUCharNum_lzw( nWidth )                  vT("%-0"#nWidth"hhu")

// }}} ! [ char's format macro defines by number mode ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ short's string format macro defines ] {{{
#define vStrFmtShort                                   vT("%hd"           )
#define vStrFmtShort_l                                 vT("%-hd"          )
#define vStrFmtShort_w(   nWidth )                     vT("%"#nWidth"hd"  )
#define vStrFmtShort_lw(  nWidth )                     vT("%-"#nWidth"hd" )
#define vStrFmtShort_zw(  nWidth )                     vT("%0"#nWidth"hd" )
#define vStrFmtShort_lzw( nWidth )                     vT("%-0"#nWidth"hd")

#define vStrFmtUShort                                  vT("%hu"           )
#define vStrFmtUShort_l                                vT("%-hu"          )
#define vStrFmtUShort_w(   nWidth )                    vT("%"#nWidth"hu"  )
#define vStrFmtUShort_lw(  nWidth )                    vT("%-"#nWidth"hu" )
#define vStrFmtUShort_zw(  nWidth )                    vT("%0"#nWidth"hu" )
#define vStrFmtUShort_lzw( nWidth )                    vT("%-0"#nWidth"hu")
// }}} ! [ short's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ int's string format macro defines ] {{{
#define vStrFmtInt                                     vT("%d"           )
#define vStrFmtInt_l                                   vT("%-d"          )
#define vStrFmtInt_w(   nWidth )                       vT("%"#nWidth"d"  )
#define vStrFmtInt_lw(  nWidth )                       vT("%-"#nWidth"d" )
#define vStrFmtInt_zw(  nWidth )                       vT("%0"#nWidth"d" )
#define vStrFmtInt_lzw( nWidth )                       vT("%-0"#nWidth"d")

#define vStrFmtUInt                                    vT("%u"           )
#define vStrFmtUInt_l                                  vT("%-u"          )
#define vStrFmtUInt_w(   nWidth )                      vT("%"#nWidth"u"  )
#define vStrFmtUInt_lw(  nWidth )                      vT("%-"#nWidth"u" )
#define vStrFmtUInt_zw(  nWidth )                      vT("%0"#nWidth"u" )
#define vStrFmtUInt_lzw( nWidth )                      vT("%-0"#nWidth"u")
// }}} ! [ int's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long's string format macro defines ] {{{
#define vStrFmtLong                                    vT("%ld"           )
#define vStrFmtLong_l                                  vT("%-ld"          )
#define vStrFmtLong_w(   nWidth )                      vT("%"#nWidth"ld"  )
#define vStrFmtLong_lw(  nWidth )                      vT("%-"#nWidth"ld" )
#define vStrFmtLong_zw(  nWidth )                      vT("%0"#nWidth"ld" )
#define vStrFmtLong_lzw( nWidth )                      vT("%-0"#nWidth"ld")

#define vStrFmtULong                                   vT("%lu"           )
#define vStrFmtULong_l                                 vT("%-lu"          )
#define vStrFmtULong_w(   nWidth )                     vT("%"#nWidth"lu"  )
#define vStrFmtULong_lw(  nWidth )                     vT("%-"#nWidth"lu" )
#define vStrFmtULong_zw(  nWidth )                     vT("%0"#nWidth"lu" )
#define vStrFmtULong_lzw( nWidth )                     vT("%-0"#nWidth"lu")
// }}} ! [ long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ long long's string format macro defines ] {{{
#define vStrFmtLLong                                   vT("%lld"           )
#define vStrFmtLLong_l                                 vT("%-lld"          )
#define vStrFmtLLong_w(   nWidth )                     vT("%"#nWidth"lld"  )
#define vStrFmtLLong_lw(  nWidth )                     vT("%-"#nWidth"lld" )
#define vStrFmtLLong_zw(  nWidth )                     vT("%0"#nWidth"lld" )
#define vStrFmtLLong_lzw( nWidth )                     vT("%-0"#nWidth"lld")

#define vStrFmtULLong                                  vT("%llu"           )
#define vStrFmtULLong_l                                vT("%-llu"          )
#define vStrFmtULLong_w(   nWidth )                    vT("%"#nWidth"llu"  )
#define vStrFmtULLong_lw(  nWidth )                    vT("%-"#nWidth"llu" )
#define vStrFmtULLong_zw(  nWidth )                    vT("%0"#nWidth"llu" )
#define vStrFmtULLong_lzw( nWidth )                    vT("%-0"#nWidth"llu")
// }}} ! [ long long's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ size_t's string format macro defines ] {{{
#define vStrFmtSize                                    vT("%zu"           )
#define vStrFmtSize_l                                  vT("%-zu"          )
#define vStrFmtSize_w(   nWidth )                      vT("%"#nWidth"zu"  )
#define vStrFmtSize_lw(  nWidth )                      vT("%-"#nWidth"zu" )
#define vStrFmtSize_zw(  nWidth )                      vT("%0"#nWidth"zu" )
#define vStrFmtSize_lzw( nWidth )                      vT("%-0"#nWidth"zu")
// }}} ! [ size_t's string format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ float string's format macro defines ] {{{
#define vStrFmtFloat                                   vT("%f"                         )
#define vStrFmtFloat_l                                 vT("%-f"                        )
#define vStrFmtFloat_ld(           nDecimal )          vT("%-."#nDecimal"f"            )
#define vStrFmtFloat_w(    nWidth           )          vT("%"#nWidth"f"                )
#define vStrFmtFloat_wd(   nWidth, nDecimal )          vT("%"#nWidth"."#nDecimal"f"    )
#define vStrFmtFloat_lw(   nWidth           )          vT("%-"#nWidth"f"               )
#define vStrFmtFloat_lwd(  nWidth, nDecimal )          vT("%-"#nWidth"."#nDecimal"f"   )
#define vStrFmtFloat_zw(   nWidth           )          vT("%0"#nWidth"f"               )
#define vStrFmtFloat_zwd(  nWidth, nDecimal )          vT("%0"#nWidth"."#nDecimal"f"   )
#define vStrFmtFloat_lzw(  nWidth           )          vT("%-0"#nWidth"f"              )
#define vStrFmtFloat_lzwd( nWidth, nDecimal )          vT("%r-0"#nWidth"."#nDecimal"f" )
// }}} ! [ float string's format macro defines ]
// ------------------------------------------------------------------------------------------------ //

// ------------------------------------------------------------------------------------------------ //
// [ Double string's format macro defines ] {{{
#define vStrFmtDouble                                   vT("%f"                         )
#define vStrFmtDouble_l                                 vT("%-f"                        )
#define vStrFmtDouble_ld(           nDecimal )          vT("%-."#nDecimal"f"            )
#define vStrFmtDouble_w(    nWidth           )          vT("%"#nWidth"f"                )
#define vStrFmtDouble_wd(   nWidth, nDecimal )          vT("%"#nWidth"."#nDecimal"f"    )
#define vStrFmtDouble_lw(   nWidth           )          vT("%-"#nWidth"f"               )
#define vStrFmtDouble_lwd(  nWidth, nDecimal )          vT("%-"#nWidth"."#nDecimal"f"   )
#define vStrFmtDouble_zw(   nWidth           )          vT("%0"#nWidth"f"               )
#define vStrFmtDouble_zwd(  nWidth, nDecimal )          vT("%0"#nWidth"."#nDecimal"f"   )
#define vStrFmtDouble_lzw(  nWidth           )          vT("%-0"#nWidth"f"              )
#define vStrFmtDouble_lzwd( nWidth, nDecimal )          vT("%r-0"#nWidth"."#nDecimal"f" )
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
