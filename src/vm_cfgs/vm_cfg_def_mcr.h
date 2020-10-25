// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_mcr.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 00:48:58                                               == //
// ==   Modify Time          : 2020-10-25 12:06:53                                               == //
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
#define _vIn_
// ouput paramter
#define _vOt_
// input && output paramter
#define _vIO_

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

#endif // ! __VM_CFG_DEF_MCR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
