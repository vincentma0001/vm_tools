// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CSysErr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 10:46                                                  == //
// ==   Modify Time          : 2020-11-16 14:17                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSYSERR_HPP_INL__
#define  __CSYSERR_HPP_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
#include <vm_tools/vm_util/CParser.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CSysErr<tsztBufSize> Construct && Destruct realization                              == //
// ================================================================================================ //
// [ Class CSysErr<tsztBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErr<tsztBufSize>::CSysErr()                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tsztBufSize >
inline vm::CSysErr< tsztBufSize >::CSysErr(  )
    : vm::CSysErrPtr( errno, mszBuf, sizeof(mszBuf) ), mszBuf{0x00}
// {{{
{
}
// }}} End of func CSysErr<tsztBufSize>::CSysErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErr<tsztBufSize>::CSysErr(...)                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tsztBufSize >
inline  vm::CSysErr< tsztBufSize >::CSysErr( const long clErrCode )
    : vm::CSysErrPtr( clErrCode, mszBuf, sizeof(mszBuf) ), mszBuf{0x00}
// {{{ 
{
}
// }}} end of func CSysErr<tsztBufSize>::CSysErr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CSysErr<tsztBufSize>::~CSysErr()                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tsztBufSize >
inline vm::CSysErr< tsztBufSize >::~CSysErr(  )
// {{{
{
}
// }}} End of func CSysErr<tsztBufSize>::~CSysErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSysErr<tsztBufSize>::CSysErr( const CSysErr &obj )                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tsztBufSize >
inline vm::CSysErr< tsztBufSize >::CSysErr( const CSysErr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CSysErr<tsztBufSize>::CSysErr()
// ================================================================================================ //

// }}} ![ Class CSysErr<tsztBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSysErr<tsztBufSize> operator realization                                           == //
// ================================================================================================ //
// [ Class CSysErr<tsztBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErr<tsztBufSize>::operator = ()                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CSysErr<tsztBufSize>& - [O] this object
template< size_t tsztBufSize >
inline vm::CSysErr< tsztBufSize >& vm::CSysErr< tsztBufSize >::operator = ( const CSysErr &obj )
// {{{
{
    vm::v_memcpy( mszBuf, sizeof(mszBuf), obj.mszBuf, sizeof(obj.mszBuf) );
    mlErrCode = obj.mlErrCode;
    return *this;
}
// }}} End of func CSysErr<tsztBufSize>::operator=()
// ================================================================================================ //

// }}} ![ Class CSysErr<tsztBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSysErr<tsztBufSize> Functional realization                                         == //
// ================================================================================================ //
// [ Class CSysErr<tsztBufSize> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CSysErr<tsztBufSize>::Fmt(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format ouput error message
// ==  Return  : tchar*           - [O] Formated string
// ==  Params  : cpFmt            - [I] string's format
// ==            ...              - [I] string's format paramters
template< size_t tsztBufSize >
inline tchar* vm::CSysErr< tsztBufSize >::Fmt( const tchar* const cpFmt, ... )
// {{{ 
{
    tchar lszBuf[tsztBufSize]  = {0x00};

    // prepare pattern
    vm::CPattern loPattern1( vT("%EC"), vAnyToStr(256,   this->toCode()) );
    vm::CPattern loPattern2( vT("%EM"),                this->toString()  );

    // replace pattern from format string
    vm::CParser  loParser( vT('%'), cpFmt );
    loParser.Regist( loPattern1 );
    loParser.Regist( loPattern2 );
    loParser.Parse( lszBuf, sizeof(lszBuf) );

    // format string with paramters
    va_list lvList;
    va_start( lvList, cpFmt );
    vm::v_sprintf( mszBuf, sizeof(mszBuf), lszBuf, lvList );
    va_end( lvList );

    return mszBuf;
}
// }}} end of func CSysErr<tsztBufSize>::Fmt(...)
// ================================================================================================ //

// }}} ![ Class CSysErr<tsztBufSize> Functional realization ]
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CSYSERR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
