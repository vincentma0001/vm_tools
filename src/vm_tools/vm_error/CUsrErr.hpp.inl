// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CUsrErr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 11:07                                                  == //
// ==   Modify Time          : 2020-11-16 15:52                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CUSRERR_HPP_INL__
#define  __CUSRERR_HPP_INL__


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
// ==  Class CUsrErr<tType> Construct && Destruct realization                                    == //
// ================================================================================================ //
// [ Class CUsrErr<tType> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::CUsrErr()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< class tType >
inline vm::CUsrErr< tType >::CUsrErr( const long clErrCode )
    : mlErrCode( clErrCode )
// {{{
{
    // Regist common error information
    this->RegMsg( vm::emRet::emSucess,      vT("No error return.") );
    this->RegMsg( vm::emRet::emError,       vT("Error return, lookfor syserr for more information.") );
    this->RegMsg( vm::emRet::emWarns,       vT("Warns return, lookfor syserr for more information.") );
    this->RegMsg( vm::emRet::emErrStrFmt,   vT("Format string failed."));

    // Regist other error information for different object
    this->Regist();
}
// }}} End of func CUsrErr<tType>::CUsrErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CUsrErr<tType>::~CUsrErr()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< class tType >
inline vm::CUsrErr< tType >::~CUsrErr(  )
// {{{
{
}
// }}} End of func CUsrErr<tType>::~CUsrErr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::CUsrErr( const CUsrErr &obj )                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< class tType >
inline vm::CUsrErr< tType >::CUsrErr( const CUsrErr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CUsrErr<tType>::CUsrErr()
// ================================================================================================ //

// }}} ![ Class CUsrErr<tType> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CUsrErr<tType> operator realization                                                 == //
// ================================================================================================ //
// [ Class CUsrErr<tType> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::operator = ()                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CUsrErr<tType>&  - [O] this object
template< class tType >
inline vm::CUsrErr< tType >& vm::CUsrErr< tType >::operator = ( const CUsrErr &obj )
// {{{
{
    return *this;
}
// }}} End of func CUsrErr<tType>::operator=()
// ================================================================================================ //

// }}} ![ Class CUsrErr<tType> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CUsrErr<tType> Functional realization                                               == //
// ================================================================================================ //
// [ Class CUsrErr<tType> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::toCode(...)                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error code
// ==  Return  : long             - [O] error code
template< class tType >
inline long vm::CUsrErr< tType >::toCode( void )
// {{{ 
{
    return mlErrCode;
}
// }}} end of func CUsrErr<tType>::toCode(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::toString(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output error message
// ==  Return  : const tchar*     - [O] error message
template< class tType >
inline const tchar* vm::CUsrErr< tType >::toString( void )
// {{{ 
{
        vString* lpStr = mpUsrErrMap.Find( mlErrCode );
        if( lpStr==nullptr )
            return nullptr;
    
        return lpStr->c_str();
    
}
// }}} end of func CUsrErr<tType>::toString(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CUsrErr<tType>::RegMsg(...)                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Regist a user defined message
// ==  Return  : bool             - [O] true  - regist sucess
// ==                                   false - regist failed
// ==  Params  : clErrCode        - [I] error code
// ==            cstrErrMsg       - [I] error messaage
template< class tType >
inline bool vm::CUsrErr< tType >::RegMsg( const long clErrCode, const vString cstrErrMsg )
// {{{ 
{
    return mpUsrErrMap.Insert( clErrCode, cstrErrMsg );
}
// }}} end of func CUsrErr<tType>::RegMsg(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CUsrErr<tsztBufSize>::Fmt(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format ouput error message
// ==  Return  : tchar*           - [O] Formated string
// ==  Params  : cpFmt            - [I] string's format
// ==            ...              - [I] string's format paramters
template< clas tType >
inline tchar* vm::CUsrErr< tTypei >::Fmt( const tchar* const cpFmt, ... )
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
// }}} end of func CUsrErr<tsztBufSize>::Fmt(...)
// ================================================================================================ //

// }}} ![ Class CUsrErr<tType> Functional realization ]
// ================================================================================================ //


#endif // ! __CUSRERR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
