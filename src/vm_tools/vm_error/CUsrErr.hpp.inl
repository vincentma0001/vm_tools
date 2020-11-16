// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CUsrErr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 11:07                                                  == //
// ==   Modify Time          : 2020-11-16 13:47                                                  == //
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
    this->RegMsg( vm::emRet::emSucess,      vT("No error return.") );
    this->RegMsg( vm::emRet::emError,       vT("Error return, see syserr for info.") );
    this->RegMsg( vm::emRet::emWarns,       vT("Warns return.") );
    this->RegMsg( vm::emRet::emErrStrFmt,   vT("Error return, Format string failed."));

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
