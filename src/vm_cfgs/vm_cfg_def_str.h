// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_str.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 19:38:24                                               == //
// ==   Modify Time          : 2020-11-13 17:06:01                                               == //
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

// ================================================================================================ //
// [ string macro defines ] {{{

#define vStr01( S01 )                                                   vT(S01)
#define vStr02( S01, S02 )                                              vT(S01)vT(S02)
#define vStr03( S01, S02, S03 )                                         vT(S01)vT(S02)vT(S03)
/*
#define vStr04( S01, S02, S03, S04 )                                    vStr03(S01,S02,S03)vStr01(S04)
#define vStr05( S01, S02, S03, S04, S05 )                               vStr04(S01,S02,S03,S04)vStr01(S05)
#define vStr06( S01, S02, S03, S04, S05, S06 )                          vStr05(S01,S02,S03,S04,S05)vStr01(S06)
#define vStr07( S01, S02, S03, S04, S05, S06, S07 )                     vStr06(S01,S02,S03,S04,S05,S06)vStr01(S07)
#define vStr08( S01, S02, S03, S04, S05, S06, S07, S08 )                vStr07(S01,S02,S03,S04,S05,S06,S07)vStr01(S08)
#define vStr09( S01, S02, S03, S04, S05, S06, S07, S08, S09 )           vStr08(S01,S02,S03,S04,S05,S06,S07,S08)vStr01(S09)
//*/

// }}} ! string macro defines
// ================================================================================================ //


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
