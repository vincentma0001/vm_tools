// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CErr.hpp.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 11:04                                                  == //
// ==   Modify Time          : 2020-11-16 15:21                                                  == //
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
//.vm's.function.depend.on.included
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
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline vm::CErr< tSysErr,tUsrErr,tsztBufSize >::CErr( const long long cllErrCode )
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
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline vm::CErr< tSysErr,tUsrErr,tsztBufSize >::~CErr(  )
// {{{
{
}
// }}} End of func CErr<tSysErr,tUsrErr>::~CErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::CErr( const CErr &obj )                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline vm::CErr< tSysErr,tUsrErr,tsztBufSize >::CErr( const CErr &obj )
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
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline vm::CErr< tSysErr,tUsrErr,tsztBufSize >& vm::CErr< tSysErr,tUsrErr,tsztBufSize >::operator = ( const CErr &obj )
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
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline tchar* vm::CErr< tSysErr,tUsrErr,tsztBufSize >::Fmt( const tchar* const cpFmt, ... )
// {{{ 
{
    // format string with paramters
    va_list lvList;
    va_start( lvList, cpFmt );
    tchar* lpRet = Fmt( cpFmt, lvList );
    va_end( lvList );

    return lpRet;
}
// }}} end of func CErr<tSysErr,tUsrErr>::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr>::Fmt(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format output error message
// ==  Return  : tchar*           - [O] formated error message
// ==  Params  : cpFmt            - [I] error message format
// ==            vList            - [I] error message format's paramters
// ==  Note    : %ESC = system error code
// ==            %ESM = system error message
// ==            %EUC = user error code
// ==            %EUM = user error message
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline tchar* vm::CErr< tSysErr,tUsrErr,tsztBufSize >::Fmt( const tchar* const cpFmt, va_list& vList )
// {{{ 
{
    tchar lszBuf[tsztBufSize]  = {0x00};

    // prepare pattern
    vm::CPattern loPattern1( vT("%ESC"), vAnyToStr(256,   mSysErr.toCode()) );
    vm::CPattern loPattern2( vT("%ESM"),                mSysErr.toString()  );

    vm::CPattern loPattern3( vT("%EUC"), vAnyToStr(256,   mUsrErr.toCode()) );
    vm::CPattern loPattern4( vT("%EUM"),                mUsrErr.toString()  );

    // replace pattern from format string
    vm::CParser  loParser( vT('%'), cpFmt );
    loParser.Regist( loPattern1 );
    loParser.Regist( loPattern2 );
    loParser.Regist( loPattern3 );
    loParser.Regist( loPattern4 );
    loParser.Parse( lszBuf, sizeof(lszBuf) );

    // format string with paramters
    vm::v_sprintf( mszBuf, sizeof(mszBuf), lszBuf, vList );

    return mszBuf;
}
// }}} end of func CErr<tSysErr,tUsrErr>::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr,tBufSize>::HasErr(...)                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check CErr object has error or not
// ==  Return  : bool             - [O] treu  - has error
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline bool vm::CErr< tSysErr,tUsrErr,tsztBufSize >::HasErr( void )
// {{{ 
{
    if( mSysErr.toCode()!=vm::emRet::emSucess )
        return true;
    
    if( mUsrErr.toCode()!=vm::emRet::emSucess )
        return true;
    
    return false;
}
// }}} end of func CErr<tSysErr,tUsrErr,tBufSize>::HasErr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CErr<tSysErr,tUsrErr,tBufSize>::Throw(...)                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check CErr object has error or not, if has error throw a format string
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : cpFmt            - [I] string's format
// ==            ...              - [I] string's format paramters
template< class tSysErr, class tUsrErr, size_t tsztBufSize >
inline void vm::CErr< tSysErr,tUsrErr,tsztBufSize >::Throw( const tchar* const cpFmt, ... )
// {{{ 
{
    if( HasErr() == false )
        return;
    
    va_list lvList;
    va_start( lvList, cpFmt );
    tchar* lpRet = Fmt( cpFmt, lvList );
    va_end( lvList );
    
    throw lpRet;
}
// }}} end of func CErr<tSysErr,tUsrErr,tBufSize>::Throw(...)
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
