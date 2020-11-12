// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CArgs.hpp.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 23:00                                                  == //
// ==   Modify Time          : 2020-11-12 23:00                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CARGS_HPP_INL__
#define  __CARGS_HPP_INL__


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CArgs<tuiMaxArgvs> Construct && Destruct realization                                == //
// ================================================================================================ //
// [ Class CArgs<tuiMaxArgvs> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::CArgs()                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< unsigned int tuiMaxArgvs >
inline vm::CArgs< tuiMaxArgvs >::CArgs(  )
    : muiArgc(0), mpArgvs{0x00}
// {{{
{
}
// }}} End of func CArgs<tuiMaxArgvs>::CArgs()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CArgs<tuiMaxArgvs>::~CArgs()                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< unsigned int tuiMaxArgvs >
inline vm::CArgs< tuiMaxArgvs >::~CArgs(  )
// {{{
{
}
// }}} End of func CArgs<tuiMaxArgvs>::~CArgs()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::CArgs( const CArgs &obj )                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< unsigned int tuiMaxArgvs >
inline vm::CArgs< tuiMaxArgvs >::CArgs( const CArgs &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CArgs<tuiMaxArgvs>::CArgs()
// ================================================================================================ //

// }}} ![ Class CArgs<tuiMaxArgvs> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CArgs<tuiMaxArgvs> operator realization                                             == //
// ================================================================================================ //
// [ Class CArgs<tuiMaxArgvs> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::operator = ()                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CArgs<tuiMaxArgvs>& - [O] this object
template< unsigned int tuiMaxArgvs >
inline vm::CArgs< tuiMaxArgvs >& vm::CArgs< tuiMaxArgvs >::operator = ( const CArgs &obj )
// {{{
{
    return *this;
}
// }}} End of func CArgs<tuiMaxArgvs>::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::operator [](...)                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get argv in CArgs by postion
// ==  Return  : tchar*           - [O] argv's value
// ==  Params  : cuiPos           - [I] argv's postion
template< unsigned int tuiMaxArgvs >
inline tchar* vm::CArgs< tuiMaxArgvs >::operator []( const unsigned int cuiPos )
// {{{ 
{
    if( cuiPos > muiArgc )
        return nullptr;

    return mpArgvs[cuiPos];
}
// }}} end of func CArgs<tuiMaxArgvs>::operator [](...)
// ================================================================================================ //

// }}} ![ Class CArgs<tuiMaxArgvs> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CArgs<tuiMaxArgvs> Functional realization                                           == //
// ================================================================================================ //
// [ Class CArgs<tuiMaxArgvs> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::Argc(...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get argc in string
// ==  Return  : unsigned int     - [O] argc number 
template< unsigned int tuiMaxArgvs >
inline unsigned int vm::CArgs< tuiMaxArgvs >::Argc( void )
// {{{ 
{
    return muiArgc;
}
// }}} end of func CArgs<tuiMaxArgvs>::Argc(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CArgs<tuiMaxArgvs>::Splite(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Splite string
// ==  Return  : unsigned int     - [O] return argc number
// ==  Params  : pString          - [I] String need to be splite
// ==            cpszDelimiters   - [I] delimiter string
template< unsigned int tuiMaxArgvs >
inline unsigned int vm::CArgs< tuiMaxArgvs >::Splite( _vIn_  const tchar* const pString, _vIn_ const tchar* const cpszDelimiters )
// {{{ 
{
    tchar* lpch   = nullptr;
    tchar* lpNext = nullptr;
    
    lpch = vStrtok_s( const_cast<tchar*>(pString), cpszDelimiters, &lpNext);
    while ( (lpch!=nullptr) && (muiArgc<tuiMaxArgvs) )
    {
        mpArgvs[muiArgc++] = lpch;
        lpch = vStrtok_s(NULL, cpszDelimiters, &lpNext);
    }
    
    return muiArgc;
}
// }}} end of func CArgs<tuiMaxArgvs>::Splite(...)
// ================================================================================================ //

// }}} ![ Class CArgs<tuiMaxArgvs> Functional realization ]
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CARGS_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
