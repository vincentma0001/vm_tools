// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CTime.hpp.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 17:47                                                  == //
// ==   Modify Time          : 2020-11-24 23:06                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
#include "CTime.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTime<tsztBufSize> Construct && Destruct realization                                == //
// ================================================================================================ //
// [ Class CTime<tsztBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::CTime()                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tsztBufSize >
inline vm::CTime< tsztBufSize >::CTime(  ) 
    : CTimeb(mstTimeb), mszBuf{0x00}
// {{{
{
}
// }}} End of func CTime<tsztBufSize>::CTime()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CTime<tsztBufSize>::~CTime()                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tsztBufSize >
inline vm::CTime< tsztBufSize >::~CTime(  )
// {{{
{
}
// }}} End of func CTime<tsztBufSize>::~CTime()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::CTime( const CTime &obj )                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tsztBufSize >
inline vm::CTime< tsztBufSize >::CTime( const CTime &obj )
    : CTimeb(obj.mstTimeb), mszBuf{0x00}
// {{{
{
    *this = obj;
}
// }}} End of func CTime<tsztBufSize>::CTime()
// ================================================================================================ //

// }}} ![ Class CTime<tsztBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTime<tsztBufSize> operator realization                                             == //
// ================================================================================================ //
// [ Class CTime<tsztBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator = ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : tTimeb&            - [O] timeb object
template< size_t tsztBufSize >
inline tTimeb& vm::CTime< tsztBufSize >::operator = ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) = obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator + ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   :  operation +
// ==  Return  : tTimeb&            - [O] timeb object
template< size_t tsztBufSize >
inline tTimeb& vm::CTime< tsztBufSize >::operator + ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) + obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator+()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator += ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   :  operation +=
// ==  Return  : tTimeb&            - [O] timeb object
template< size_t tsztBufSize >
inline tTimeb& vm::CTime< tsztBufSize >::operator += ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) += obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator+=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator - ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   :  operation -
// ==  Return  : tTimeb&            - [O] timeb object
template< size_t tsztBufSize >
inline tTimeb& vm::CTime< tsztBufSize >::operator - ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) - obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator-()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator -= ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   :  operation -=
// ==  Return  : tTimeb&            - [O] timeb object
template< size_t tsztBufSize >
inline tTimeb& vm::CTime< tsztBufSize >::operator -= ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) -= obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator-=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator == ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation ==
// ==  Return  : bool                 - [O] true  - sucess
// ==                                       false - failed
template< size_t tsztBufSize >
inline bool vm::CTime< tsztBufSize >::operator == ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) == obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator==()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator != ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation !=
// ==  Return  : bool                 - [O] true  - sucess
// ==                                       false - failed
template< size_t tsztBufSize >
inline bool vm::CTime< tsztBufSize >::operator != ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) != obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator!=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator > ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation >
// ==  Return  : bool                 - [O] true  - sucess
// ==                                       false - failed
template< size_t tsztBufSize >
inline bool vm::CTime< tsztBufSize >::operator > ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) > obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator>()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTime<tsztBufSize>::operator < ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation <
// ==  Return  : bool                 - [O] true  - sucess
// ==                                       false - failed
template< size_t tsztBufSize >
inline bool vm::CTime< tsztBufSize >::operator < ( const CTime &obj )
// {{{
{
    return (*(CTimeb*)this) < obj.mstTimeb;
}
// }}} End of func CTime<tsztBufSize>::operator<()
// ================================================================================================ //

// }}} ![ Class CTime<tsztBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTime<tsztBufSize> Functional realization                                           == //
// ================================================================================================ //
// [ Class CTime<tsztBufSize> Functional realization ] {{{



// }}} ![ Class CTime<tsztBufSize> Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
