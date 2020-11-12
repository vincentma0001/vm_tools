// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CPrFmt.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-05 10:51                                                  == //
// ==   Modify Time          : 2020-11-05 10:51                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CPRFMT_HPP__
#define  __CPRFMT_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CPrFmt : This class deal with printf funcs's input format                           == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CPrFmt
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CPrFmt    (                   );
    // Destruct define
    inline virtual ~CPrFmt    (                   );

private:
    // Copy construct define
    inline CPrFmt             ( const CPrFmt &obj );
    // Assignment operation
    inline CPrFmt& operator = ( const CPrFmt &obj );
// }}} ! Construct & Destruct
// ------------------------------------------------------------------------------------------------ //
// Operators : {{{
public:
    inline tchar*  operator * (                   );
// }}} ! Operators

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar               mszBuf[tsztBufSize];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : 
public:
    // Get Buffer size in CPrFmt
    size_t Size( void );
    // Get string length in CPrFmt buffer
    size_t Len ( void );

    CPrFmt& Char   ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& UChar  ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& Short  ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& UShort ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& Int    ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& UInt   ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& Long   ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& ULong  ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& LLong  ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& ULLong ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& TSize  ( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false );
    CPrFmt& Float  ();
    CPrFmt& Double ();
    CPrFmt& LDouble();
//  ! Methods

};
// }}} ! [ class CPrFmt ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CPrFmt.hpp.inl"
// ================================================================================================ //


#endif // ! __CPRFMT_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
