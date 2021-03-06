// ================================================================================================ //
// ==                                                                                            == //
// ==                                  vm_cfg_def_func_file_lux.h                                == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-08 08:44:00                                               == //
// ==   Modify Time          : 2020-11-09 11:14:36                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_FUNC_FILE_LUX_H__
#define  __VM_CFG_DEF_FUNC_FILE_LUX_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <sys/stat.h>
#include <stdio.h>
#include <wchar.h>
#include <unistd.h>
#include "vm_cfg_def_sys.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// define vFopen {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFopen           fopen
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFopen           fopen
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFclose {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFclose          fclose
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFclose          fclose
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFEof {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFeof            feof
#   define vFEOF            EOF
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFeof            feof
#   define vFEOF            WEOF
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// defile vFerror {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFclearErr       clearerr
#   define vFerror          ferror
#   define vFileno          fileno
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFclearErr       clearerr
#   define vFerror          ferror
#   define vFileno          fileno
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFprintf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFprintf         fprintf
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFprintf         fwprintf
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vVfprintf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vVfprintf        vfprintf
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vVfprintf        vfwprintf
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFScanf {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFscanf          fscanf
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFscanf          fwscanf
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFputc {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFputc           fputc
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFputc           fputwc
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFputs {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFputs           fputs
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFputs           fputws
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFgetc {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFgetc           fgetc
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFgetc           fgetwc
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// define vFgets {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vFgets           fgets
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vFgets           fgetws
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// Get character from stream(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGetc            getc
#else  // _V_USE_WCHAR_ != 0
#   define vGetc            getwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Get character from stdin(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGetchar         getchar
#else  // _V_USE_WCHAR_ != 0
#   define vGetchar         getwchar
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Write character to stream(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vPutc            putc
#else  // _V_USE_WCHAR_ != 0
#   define vPutc            putwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Write character to stdout(function)
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vPutchar         putchar
#else  // _V_USE_WCHAR_ != 0
#   define vPutchar         putwchar
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// ================================================================================================ //

// ================================================================================================ //
// Unget character from stream(function) {{{
#if ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vUngetc          ungetc
#else  // _V_USE_WCHAR_ != 0
#   define vUngetc          ungetwc
// ------------------------------------------------------------------------------------------------ //
#endif // end of #if defined( _V_USE_WCHAR_ )...
// }}}
// ================================================================================================ //

// ================================================================================================ //
// Access file {{{
// ------------------------------------------------------------------------------------------------ //
// File access flags {{{

// file is exist
#ifndef    _V_EX_
#   define _V_EX_      F_OK
#endif // !_V_EX_

// file is readable
#ifndef    _V_RD_
#   define _V_RD_      R_OK
#endif // !_V_RD_

// file is wrtieable
#ifndef    _V_WT_
#   define _V_WT_      W_OK
#endif // !_V_WT_

// file is readable and writeable
#ifndef    _V_WR_
#   define _V_WR_      R_OK|W_OK
#endif // !_V_WR_

// file is executeable
#ifndef    _V_BN_
#   define _V_BN_      X_OK
#endif // !_V_BN
// }}}
// ------------------------------------------------------------------------------------------------ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vAccess          ::access
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vAccess          ::access
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// remove a file {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vRemove          ::remove
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vRemove          ::remove
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// rename a file {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vRename          ::rename
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vRename          ::rename
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define  tMode           mode_t
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define  tMode           mode_t
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// ================================================================================================ //

// ================================================================================================ //
// make a dir {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vMkDir           ::mkdir
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vMkDir           ::mkdir
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// remove a dir {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vRmDir           ::rmdir
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vRmDir           ::rmdir
//  TODO : add wchar codes
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// change current working dirtory {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vChangeDir           ::chdir
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vChangeDir           ::chdir
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// get current work dirtory {{{
#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vGetCwd          ::getcwd
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vGetCwd          ::getcwd
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

// ================================================================================================ //
// file stat {{{

#ifndef    vIsDir
#   define vIsDir      S_ISDIR
#endif // !vIsDir

#ifndef    vIsReg
#   define vIsReg      S_ISREG
#endif // !vIsReg

#ifndef    vIsBin
// # TODO : add bin decide code #
#   define vIsBin      false 
#endif // !vIsBin

#if        ( _V_USE_WCHAR_ == 0 )
// ------------------------------------------------------------------------------------------------ //
#   define vStat            ::stat
#else  //  ( _V_USE_WCHAR_ != 0 )
#   define vStat            ::stat
// ------------------------------------------------------------------------------------------------ //
#endif // !( _V_USE_WCHAR_ == 0 )
// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_FUNC_FILE_LUX_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
