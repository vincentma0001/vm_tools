// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_lmt.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 00:02:26                                               == //
// ==   Modify Time          : 2020-11-05 12:55:10                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_LMT_H__
#define  __VM_CFG_DEF_LMT_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <limits.h>
#include <float.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// Type's min & max value redefines : {{{

// Number of bits in a char object (byte),                              8 or greater*
#define vBitChar       CHAR_BIT
// Maximum number of bytes in a multibyte character, for any locale,    1 or greater *
#define vMaxMBLen      MB_LEN_MAX

// Minimum value for an object of type tchar,                           either SCHAR_MIN or 0
#define vMinChar       CHAR_MIN
// Maximum value for an object of type char,                            either SCHAR_MAX or UCHAR_MAX
#define vMaxChar       CHAR_MAX

// Minimum value for an object of type signed char,                     -127 (-27+1) or less*
#define vMinsChar      SCHAR_MIN
// Maximum value for an object of type signed char,                     127 (27-1) or greater*
#define vMaxsChar      SCHAR_MAX
// Maximum value for an object of type unsigned char,                   255 (28-1) or greater*
#define vMaxuChar      UCHAR_MAX

// Minimum value for an object of type short int,                       -32767 (-215 + 1) or less *
#define vMinsShort     SHRT_MIN
// Maximum value for an object of type short int,                       32767 (215-1) or greater*
#define vMaxsShort     SHRT_MAX
// Maximum value for an object of type unsigned short int,              65535 (216-1) or greater*
#define vMaxuShort     USHRT_MAX

// Minimum value for an object of type int,                             -32767 (-215+1) or less*
#define vMinsInt       INT_MIN
// Maximum value for an object of type int,                             32767 (215-1) or greater*
#define vMaxsInt       INT_MAX
// Maximum value for an object of type unsigned int,                    65535 (216-1) or greater*
#define vMaxuInt       UINT_MAX

// Minimum value for an object of type long int,                        -2147483647 (-231+1) or less*
#define vMinsLong      LONG_MIN
// Maximum value for an object of type long int,                        2147483647 (231-1) or greater*
#define vMaxsLong      LONG_MAX
// Maximum value for an object of type unsigned long int,               4294967295 (232-1) or greater*
#define vMaxuLong      ULONG_MAX

// Minimum value for an object of type long long int,                   -9223372036854775807 (-263+1) or less*
#define vMinsLLong     LLONG_MIN
// Maximum value for an object of type long long int,                   9223372036854775807 (263-1) or greater*
#define vMaxsLLong     LLONG_MAX
// Maximum value for an object of type unsigned long long int,          18446744073709551615 (264-1) or greater*
#define vMaxuLLong     ULLONG_MAX

// Minimum value for an object of type float                            1.175494351e-38F
#define vMinFloat      FLT_MIN
// Maximum value for an object of type float                            3.402823466e+38F
#define vMaxFloat      FLT_MAX

// Minimum value for an object of type double                           2.2250738585072014e-308
#define vMinDouble     DBL_MIN
// Maximum value for an object of type double                           1.7976931348623158e+308
#define vMaxDouble     DBL_MAX
//
// Minimum value for an object of type long double
#define vMinLDouble     LDBL_MIN
// Maximum value for an object of type long double
#define vMaxLDouble     LDBL_MAX

// Minimum value for an object of type wchar_t
#define vMinWchar      WCHAR_MIN
// Maximum value for an object of type wchar_t
#define vMaxWchar      WCHAR_MAX

// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_LMT_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
