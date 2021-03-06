// ================================================================================================ //
// ==                                                                                            == //
// ==                                 vm_cfg_def_func_str_win.h                                  == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 23:07:31                                               == //
// ==   Modify Time          : 2020-11-03 00:00:56                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_STR_WIN_H__
#define  __VM_CFG_DEF_FUNC_STR_WIN_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <ctype.h>
#include <wctype.h>

#include <string.h>
#include <wchar.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define  vToUpper    ::toupper
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define  vToUpper    ::towupper
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// ================================================================================================ //

// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define  vToLower    ::tolower
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define  vToLower    ::towlower
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// ================================================================================================ //

// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define  vIsAlpha    ::isalpha
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define  vIsAlpha    ::iswalpha
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// ================================================================================================ //

// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define  vIsSpace    ::isspace
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define  vIsSpace    ::iswspace
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// ================================================================================================ //

// ================================================================================================ //
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrcat             strcat
#   define vStrcat_s           strcat_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrcat             wcscat
#   define vStrcat_s           wcscat_s
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Append characters from string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrncat            strncat
#   define vStrncat_s          strncat_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrncat            wcsncat
#   define vStrncat_s          wcsncat_s
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Locate first occurrence of character in string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrchr             strchr
#else  // _V_USE_WCHAR_ != 0
#   define vStrchr             wcschr
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Locate last occurrence of character in string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrrchr            strrchr
#else  // _V_USE_WCHAR_ != 0
#   define vStrrchr            wcsrchr
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Compare two strings(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrcmp             strcmp
#else  // _V_USE_WCHAR_ != 0
#   define vStrcmp             wcscmp
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Compare characters of two strings(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrncmp            strncmp
#else  // _V_USE_WCHAR_ != 0
#   define vStrncmp            wcsncmp
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Copy string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrcpy             strcpy
#   define vstrcpy_s           strcpy_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrcpy             wcscpy
#   define vstrcpy_s           wcscpy_s
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Copy characters from string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrncpy            strncpy
#   define vStrncpy_s          strncpy_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrncpy            wcsncpy
#   define vStrncpy_s          wcsncpy_s
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Get string length(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrlen             strlen
#else  // _V_USE_WCHAR_ != 0
#   define vStrlen             wcslen
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Locate substring of string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrstr             strstr
#else  // _V_USE_WCHAR_ != 0
#   define vStrstr             wcsstr
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Compare two strings using locale(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrcoll            strcoll
#else  // _V_USE_WCHAR_ != 0
#   define vStrcoll            wcscoll
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )
// ================================================================================================ //

// ================================================================================================ //
// Get span until character in string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrcspn            strcspn
#else  // _V_USE_WCHAR_ != 0
#   define vStrcspn            wcscspn
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Locate characters in string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrpbrk            strpbrk
#else  // _V_USE_WCHAR_ != 0
#   define vStrpbrk            wcspbrk
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Get span of character set in string(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrspn             strspn
#else  // _V_USE_WCHAR_ != 0
#   define vStrspn             wcsspn
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Split string into tokens(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrtok             strtok
#   define vStrtok_s           strtok_s
#else  // _V_USE_WCHAR_ != 0
#   define vStrtok             wcstok
#   define vStrtok_s           wcstok_s
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Transform string using locale(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrxfrm            strxfrm
#else  // _V_USE_WCHAR_ != 0
#   define vStrxfrm            wcsxfrm
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStrErrNo    _strerror
#   define vStrErrNo_s  _strerror_s
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vStrErrNo    _wstrerror
#   define vStrErrNo_s  _wstrerror_s
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 ) 
// ================================================================================================ //

// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_STR_WIN_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
