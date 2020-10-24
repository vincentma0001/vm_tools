// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_file.h                                      == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-04 14:10:07                                               == //
// ==   Modify Time          : 2020-10-17 20:53:06                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_FILE_H__
#define  __VM_CFG_FILE_H__

// ================================================================================================ //
#if        ( _V_SYS_ == _V_WIN_ )
// {{{
// ================================================================================================ //
// File macros redefine :
// max. length of full pathname
#define _V_FILE_MAX_PATH_    _MAX_PATH
// max. length of drive component
#define _V_FILE_MAX_DRIVE_   _MAX_DRIVE
// max. length of path component
#define _V_FILE_MAX_DIR_     _MAX_DIR
// max. length of file name component
#define _V_FILE_MAX_FNAME_   _MAX_FNAME
// max. length of extension component
#define _V_FILE_MAX_EXT_     _MAX_EXT

// file path splite letter
#define _V_DIR_SPLITE_ vT('\\')
// file ext  splite letter
#define _V_EXT_SPLITE_ vT('.')
// }}}
#else  //  ( _V_SYS_ != _V_WIN_ )
// {{{
// ================================================================================================ //
// File macros redefine :
// max. length of full pathname
#define _V_FILE_MAX_PATH_   260 
// max. length of drive component
#define _V_FILE_MAX_DRIVE_  3
// max. length of path component
#define _V_FILE_MAX_DIR_    256
// max. length of file name component
#define _V_FILE_MAX_FNAME_  256
// max. length of extension component
#define _V_FILE_MAX_EXT_    256

// file path splite letter
#define _V_DIR_SPLITE_ vT('/')
// file ext  splite letter
#define _V_EXT_SPLITE_ vT('.')
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
// ================================================================================================ //


// ================================================================================================ //
// [ windows func define ] {{{

// }}} ! windows func define
// ================================================================================================ //


#endif // ! __VM_CFG_FILE_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
