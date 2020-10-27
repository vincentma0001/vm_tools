// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CErrPtr_def.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-27 19:44                                                  == //
// ==   Modify Time          : 2020-10-27 19:44                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERRPTR_DEF_INL__
#define  __CERRPTR_DEF_INL__

// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
#if !defined(_INC_STRING) && !defined(_STRING_H)
#   error this file need #include <string.h>
#endif  // !_INC_STRING
// }}}

// ================================================================================================ //
#if        ( _V_SYS_ == _V_WIN_ )
// Win macro defines {{{
#if defined( _V_USE_WCHAR_ ) && ( _V_USE_WCHAR != 0 )
// ------------------------------------------------------------------------------------------------ //
// wchar funcs defines {{{
#define vStrErrNo       _wcserror
#define vStrErrStr      __wcserror
#define vStrErrNo_s     _wcserror_s
#define vStrErrStr_s    __wcserror_s
#define vPntErrStr      _wperror
// }}}
#else // default defined : _V_USE_WCHAR_ == 0 
//  char funcs defines {{{
#define vStrErrNo       strerror
#define vStrErrStr      _strerror
#define vStrErrNo_s     strerror_s
#define vStrErrStr_s    _strerror_s
#define vPntErrStr      perror
// }}}
#endif // !#if defined(...)
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux macro defines {{{
#if defined( _V_USE_WCHAR_ ) && ( _V_USE_WCHAR != 0 )
// ------------------------------------------------------------------------------------------------ //
// wchar funcs defines 
#define vStrErrNo       ::wcserror
#define vStrErrStr      ::wcserror
#define vStrErrNo_s     ::wcserror_l
#define vStrErrStr_s    ::wcserror_l
#define vPntErrStr      ::wperror
// }}}
#else // default defined : _V_USE_WCHAR_ == 0 
//  char funcs defines {{{
#define vStrErrNo       ::strerror
#define vStrErrStr      ::strerror
#define vStrErrNo_s     ::strerror_l
#define vStrErrStr_s    ::strerror_l
#define vPntErrStr      ::perror
// }}}
#endif // !#if defined(...)
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
// ================================================================================================ //

#endif // ! __CERRPTR_DEF_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
