// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CTerm.h.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-28 08:47                                                  == //
// ==   Modify Time          : 2020-10-28 08:47                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTERM_H_INL__
#define  __CTERM_H_INL__


// ================================================================================================ //
// ==  Class CTerm<tsztBufSize> Construct && Destruct realization                                == //
// ================================================================================================ //
// [ Class CTerm<tsztBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CTerm<tsztBufSize>::CTerm()                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
#include "vm_tools/vm_term/CTerm.h"
template< size_t tsztBufSize >
inline vm::CTerm<tsztBufSize>::CTerm(  ):mszBuf{0x00}
// {{{
{
}
// }}} End of func CTerm<tsztBufSize>::CTerm()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CTerm<tsztBufSize>::CTerm()                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tsztBufSize >
inline vm::CTerm<tsztBufSize>::~CTerm(  )
// {{{
{
}
// }}} End of func CTerm<tsztBufSize>::~CTerm()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTerm<tsztBufSize>::CTerm()                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tsztBufSize >
inline vm::CTerm<tsztBufSize>::CTerm( const CTerm &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CTerm<tsztBufSize>::CTerm()
// ================================================================================================ //

// }}} ![ Class CTerm<tsztBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTerm<tsztBufSize> operator realization                                             == //
// ================================================================================================ //
// [ Class CTerm<tsztBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CTerm<tsztBufSize>::operator = ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CTerm<tsztBufSize>& - [O] this object
template< size_t tsztBufSize >
inline vm::CTerm<tsztBufSize>& vm::CTerm<tsztBufSize>::operator = ( const CTerm &obj )
// {{{
{
    return *this;
}
// }}} End of func CTerm<tsztBufSize>::operator=()
// ================================================================================================ //

// }}} ![ Class CTerm<tsztBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTerm<tsztBufSize> Functional realization                                           == //
// ================================================================================================ //
// [ Class CTerm<tsztBufSize> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CTerm<tsztBufSize>::Write(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Wrtie letters to terminal
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : cpFmt            - [I] String's format
// ==            ...              - [I] String's format paramters
template< size_t tsztBufSize >
inline void vm::CTerm<tsztBufSize>::Write ( _vIn_ const tchar* const cpFmt, _vIn_ ... )
// {{{
{
    va_list lvList;
    va_start( lvList, cpFmt );
    Write( cpFmt, lvList );
    va_end(lvList);
}
// }}} end of func CTerm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTerm<tsztBufSize>::Write(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write letters to terminal
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : cpFmt            - [I] String's format
// ==            vList            - [I] String's format paramters
template< size_t tsztBufSize >
inline void vm::CTerm<tsztBufSize>::Write( _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    vVprintf( cpFmt, vList );
}
// }}} end of func CTerm(...)
// ================================================================================================ //

// }}} ![ Class CTerm<tsztBufSize> Functional realization ]
// ================================================================================================ //

#endif // ! __CTERM_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
