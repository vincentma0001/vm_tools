// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CArgs.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 23:00                                                  == //
// ==   Modify Time          : 2020-11-18 09:14                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CARGS_HPP__
#define  __CARGS_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CArgs : This class splite string by spliter, It will be easy to acess string parts
template< unsigned int tuiMaxArgvs >
class CArgs
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CArgs();
    // Destruct define
    inline virtual ~CArgs();

private:
    // Copy construct define
    inline CArgs             ( const CArgs &obj );
    // Assignment operation
    inline CArgs& operator = ( const CArgs &obj );
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Get argv in CArgs by postion
    inline tchar* operator [] ( const unsigned int uiPos );
// }}} ! Operators

// Menbers   : {{{
private:
    // Argc in string
    unsigned int        muiArgc;
    // Args in string
    tchar*              mpArgvs[tuiMaxArgvs];
// }}} ! Members

// Methods   : {{{
public:
    // Get argc in string
    unsigned int Argc( void );
    // Splite string
    unsigned int Splite( const tchar* pString, const tchar* const cpszDelimiters );
// }}} ! Methods

}; // }}} End of class CArgs

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CArgs.hpp.inl"
// ================================================================================================ //


#endif // ! __CARGS_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
