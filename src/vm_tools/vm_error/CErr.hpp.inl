// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CErr.hpp.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 11:04:28                                               == //
// ==   Modify Time          : 2020-11-15 09:19:45                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERR_HPP_INL__
#define  __CERR_HPP_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>
#include <vm_tools/vm_util/CParser.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErr<tSysErr,tUsrErr> Construct && Destruct realization                             == //
// ================================================================================================ //
// [ Class CErr<tSysErr,tUsrErr> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::CErr()                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< class tSysErr, class tUsrErr >
inline vm::CErr< tSysErr,tUsrErr >::CErr( const long long cllErrCode )
    : tSysErr( vLowLLong(cllErrCode) ), tUsrErr( vHighLLong(cllErrCode) )
// {{{
{
}
// }}} End of func CErr<tSysErr,tUsrErr>::CErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CErr<tSysErr,tUsrErr>::~CErr()                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< class tSysErr, class tUsrErr >
inline vm::CErr< tSysErr,tUsrErr >::~CErr(  )
// {{{
{
}
// }}} End of func CErr<tSysErr,tUsrErr>::~CErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::CErr( const CErr &obj )                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< class tSysErr, class tUsrErr >
inline vm::CErr< tSysErr,tUsrErr >::CErr( const CErr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CErr<tSysErr,tUsrErr>::CErr()
// ================================================================================================ //

// }}} ![ Class CErr<tSysErr,tUsrErr> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErr<tSysErr,tUsrErr> operator realization                                          == //
// ================================================================================================ //
// [ Class CErr<tSysErr,tUsrErr> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::operator = ()                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CErr<tSysErr,tUsrErr>& - [O] this object
template< class tSysErr, class tUsrErr >
inline vm::CErr< tSysErr,tUsrErr >& vm::CErr< tSysErr,tUsrErr >::operator = ( const CErr &obj )
// {{{
{
    return *this;
}
// }}} End of func CErr<tSysErr,tUsrErr>::operator=()
// ================================================================================================ //

// }}} ![ Class CErr<tSysErr,tUsrErr> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CErr<tSysErr,tUsrErr> Functional realization                                        == //
// ================================================================================================ //
// [ Class CErr<tSysErr,tUsrErr> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::Fmt(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format output error message
// ==  Return  : tchar*           - [O] formated error message
// ==  Params  : cpFmt            - [I] error message format
// ==            ...              - [I] error message format's paramters
// ==  Note    : %ESC = system error code
// ==            %ESM = system error message
// ==            %EUC = user error code
// ==            %EUM = user error message
template< class tSysErr, class tUsrErr >
inline tchar* vm::CErr< tSysErr,tUsrErr >::Fmt( const tchar* const cpFmt, ... )
// {{{ 
{
    tchar lszBuf[_V_CERR_BUF_SIZE_]  = {0x00};
    vm::CPattern loPattern1( vT("%ESC"), vAnyToStr(256,   mSysErr.toCode()) );
    vm::CPattern loPattern2( vT("%ESM"),                mSysErr.toString()  );

    vm::CPattern loPattern3( vT("%EUC"), vAnyToStr(256,   mUsrErr.toCode()) );
    vm::CPattern loPattern4( vT("%EUM"),                mUsrErr.toString()  );

    vm::CParser  loParser( vT('%'), cpFmt );
    loParser.Regist( loPattern1 );
    loParser.Regist( loPattern2 );
    loParser.Regist( loPattern3 );
    loParser.Regist( loPattern4 );

    loParser.Parse( lszBuf, sizeof(lszBuf) );

    va_list lvList;
    va_start( lvList, lszBuf );
    vm::v_sprintf( mszBuf, sizeof(mszBuf), lszBuf, lvList );
    va_end( lvList );

    return mszBuf;
}
// }}} end of func CErr<tSysErr,tUsrErr>::Fmt(...)
// ================================================================================================ //

// }}} ![ Class CErr<tSysErr,tUsrErr> Functional realization ]
// ================================================================================================ //

#endif // ! __CERR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
