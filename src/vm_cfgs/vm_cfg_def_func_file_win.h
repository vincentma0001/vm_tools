// ================================================================================================ //
// ==                                                                                            == //
// ==                                vm_cfg_def_func_file_win.h                                  == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-08 08:48                                                  == //
// ==   Modify Time          : 2020-11-08 08:48                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_FILE_WIN_H__
#define  __VM_CFG_DEF_FUNC_FILE_WIN_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <stdio.h>
#include "vm_cfg_def_sys.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// define vFopen {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFopen        _fopen
#   define vFopen_s      _fopen_s
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFopen        _wfopen
#   define vFopen_s      _wfopen_s
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFclose {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFclose       _fclose
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFclose       _wfclose
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFEof {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFEof         EOF
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFEof         WEOF
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFprintf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFprintf      fprintf
#   define vFprintf_s    fprintf_s
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFprintf      fwprintf
#   define vFprintf_s    fwprintf_s
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vVfprintf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vVfprintf     vfprintf
#   define vVfprintf_s   vfprintf_s
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vVfprintf     vfwprintf
#   define vVfprintf_s   vfwprintf_s
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFScanf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFscanf       fscanf
#   define vFscanf_s     fscanf_s
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFscanf       fwscanf
#   define vFscanf_s     fwscanf_s
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFputc {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFputc        fputc
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFputc        fputwc
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFputs {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFputs        fputs
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFputs        fputws
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFgetc {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFgetc        fgetc
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFgetc        fgetwc
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFgets {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFgets        fgets
//  TODO : add char codes
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFgets        fgetws
//  TODO : add wchar codes
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vGetc {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGetc               getc
#else  // _V_USE_WCHAR_ != 0
#   define vGetc               getwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vGets {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGets               gets
#else  // _V_USE_WCHAR_ != 0
#   define vGets               getws
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vGetchar {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGetchar            getchar
#else  // _V_USE_WCHAR_ != 0
#   define vGetchar            getwchar
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vPutc {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vPutc               putc
#else  // _V_USE_WCHAR_ != 0
#   define vPutc               putwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vPuts {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vPuts               puts
#else  // _V_USE_WCHAR_ != 0
#   define vPuts               putws
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vPutchar {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vPutchar            putchar
#else  // _V_USE_WCHAR_ != 0
#   define vPutchar            putwchar
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vUngetc {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vUngetc             ungetc
#else  // _V_USE_WCHAR_ != 0
#   define vUngetc             ungetwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_FILE_WIN_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
