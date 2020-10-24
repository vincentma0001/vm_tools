// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CFileSys_def.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-18 21:23:20                                               == //
// ==   Modify Time          : 2020-10-18 22:05:56                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILESYS_DEF_INL__
#define  __CFILESYS_DEF_INL__

// ================================================================================================ //
// [ char/wchar func macro define ] {{{
#if        ( _V_USE_WCHAR_ == 0 )
// {{{
// Access file, 00 for isexist 02 for is readable, 04 for is writeable, 06 for is read and writeable
#   define vAccess      _access
#   define vAccess_s    _access_s

// remove a file
#   define vRemove      remove
// rename a file
#   define vRename      rename

// make a dir
#   define vMkDir       _mkdir
// remove a dir
#   define vRmDir       _rmdir
// change current working dirtory
#   define vChDir       _chdir

// file stat 
#   define vStat        _stat

// get current work dirtory
#   define vGetCwd _getcwd
// }}}
#elif      ( _V_USE_WCHAR_ != 0 )
// {{{
// Access file, 00 for isexist 02 for is readable, 04 for is writeable, 06 for is read and writeable
#   define vAccess      _waccess
#   define vAccess_s    _waccess_s

// remove a file
#   define vRemove      _wremove
// rename a file
#   define vRename      _wrename

// make a dir
#   define vMkDir       _wmkdir
// remove a dir
#   define vRmDir       _wrmdir
// change current working dirtory
#   define vChDir       _wchdir

// file stat 
#   define vStat        _wstat

// get current work dirtory
#   define vGetCwd _wgetcwd
// }}}
#endif // !( _V_USE_WCHAR_ == 0 )
// }}} ! char/wchar func macro define
// ================================================================================================ //

// ================================================================================================ //
// [ access mode macro define ] {{{
#if        ( _V_SYS_ == _V_WIN_ )
// {{{
#   define _V_EX_ 0x00
#   define _V_RD_ 0x02
#   define _V_WT_ 0x04
#   define _V_WR_ 0x06
#   define _V_BN_
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// {{{
#   define _V_EX_ F_OK
#   define _V_RD_ R_OK
#   define _V_WT_ W_OK
#   define _V_WR_
#   define _V_BN_ X_OK
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
// }}} ! access mode macro define
// ================================================================================================ //

// ================================================================================================ //
// [ stat mode macro define ] {{{
#if        ( _V_SYS_ == _V_WIN_ )
// {{{
#   define vIsDir(bFileMode) (((bFileMode)&S_IFDIR)!=0?true:false)
#   define vIsReg(bFileMode) (((bFileMode)&S_IFREG)!=0?true:false)
#   define vIsBin(bFileMode) (((bFileMode)&S_IEXEC)!=0?true:false)
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// {{{
#   define vIsDir S_ISDIR
#   define vIsReg S_ISREG
#   define vIsBin false # TODO : add bin decide code #
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
// }}} ! stat mode macro define
// ================================================================================================ //

#endif // ! __CFILESYS_DEF_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
