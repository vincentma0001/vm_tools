// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_mcr.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 00:48:58                                               == //
// ==   Modify Time          : 2020-11-11 20:34:09                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_MCR_H__
#define  __VM_CFG_DEF_MCR_H__

// ================================================================================================ //
// In/Out macro define : {{{

// input paramter
#ifndef    _vIn_
#define _vIn_
#endif // !_vIn_
// ouput paramter
#ifndef    _vOt_
#define _vOt_
#endif // !_vOt_
// input && output paramter
#ifndef    _vIO_
#define _vIO_
#endif // !_vIO_
// }}}
// ================================================================================================ //

// ================================================================================================ //
// Max/Min macro define : {{{
#ifndef vMax
#define vMax(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef vMin
#define vMin(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#ifndef    vStrBool
#   define vStrBool( bVal )  ((bVal)==true?vT("true"):vT("false"))
#endif // !vStrBool

#ifndef    vStrItoB
#   define vStrItoB( iVal )  ((iVal)==1?vT("true"):vT("false"))
#endif // !vStrItoB( iVal )

// }}}
// ================================================================================================ //

// ================================================================================================ //
// Make type defines : {{{ 
#define  vMakeShort( low, high )  ((short)(((tByte)(((short)(low)) & 0xff )) | ((short)((tByte)(((short)(high)) & 0xff))) << 8))
#define   vLowShort( val )        ((tByte)((  (short)(val))        & 0xff ))
#define  vHighShort( val )        ((tByte)(( ((short)(val)) >> 8)  & 0xff ))

#define    vMakeInt( low, high )  ((int)(((short)(((unsigned short)(low)) & 0xffff )) | ((int)((short)(((unsigned short)(high)) & 0xffff))) << 16))
#define     vLowInt( val )        ((short)((  (unsigned int)(val))        & 0xffff ))
#define    vHighInt( val )        ((short)(( ((unsigned int)(val)) >> 16) & 0xffff ))

#define   vMakeLong( low, high )  ((long)(((short)(((unsigned short)(low)) & 0xffff )) | ((long)((short)(((unsigned short)(high)) & 0xffff))) << 16))
#define    vLowLong( val )        ((short)((  (unsigned long)(val))        & 0xffff ))
#define   vHighLong( val )        ((short)(( ((unsigned long)(val)) >> 16) & 0xffff ))

#define  vMakeLLong( low, high )  ((long long)(((long)(((unsigned long)(low))  & 0xffffffff )) | ((long long)((long)(((unsigned long)(high)) & 0xffffffff))) << 32))
#define   vLowLLong( val )        ((long)((  (unsigned long long)(val))        & 0xffffffff ))
#define  vHighLLong( val )        ((long)(( ((unsigned long long)(val)) >> 32) & 0xffffffff ))

#define vMakeuShort( low, high )  ((unsigned short)(((tByte)(((unsigned short)(low)) & 0xff )) | ((unsigned short)((tByte)(((unsigned short)(high)) & 0xff))) << 8))
#define  vLowuShort( val )        ((tByte)((  (unsigned short)(val))                 & 0xff ))
#define vHighuShort( val )        ((tByte)(( ((unsigned short)(val)) >> 8)           & 0xff ))

#define   vMakeuInt( low, high )  ((unsigned int)(((unsigned short)(((unsigned short)(low)) & 0xffff )) | ((unsigned int)((unsigned short)(((unsigned short)(high)) & 0xffff))) << 16))
#define    vLowuInt( val )        ((unsigned short)((  (unsigned int)(val))                 & 0xffff ))
#define   vHighuInt( val )        ((unsigned short)(( ((unsigned int)(val)) >> 16)          & 0xffff ))

#define  vMakeuLong( low, high )  ((unsigned long)(((unsigned short)(((unsigned short)(low)) & 0xffff )) | ((unsigned long)((unsigned short)(((unsigned short)(high)) & 0xffff))) << 16))
#define   vLowuLong( val )        ((unsigned short)((  (unsigned long)(val))                 & 0xffff ))
#define  vHighuLong( val )        ((unsigned short)(( ((unsigned long)(val)) >> 16)          & 0xffff ))

#define vMakeullong( low, high )  ((unsigned long long)(((long)(((unsigned long)(low))  & 0xffffffff )) | ((long long)((long)(((unsigned long)(high)) & 0xffffffff))) << 32))
#define  vLowullong( val )        ((unsigned long)((  (unsigned long long)(val))        & 0xffffffff ))
#define vHighullong( val )        ((unsigned long)(( ((unsigned long long)(val)) >> 32) & 0xffffffff ))
// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_MCR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
