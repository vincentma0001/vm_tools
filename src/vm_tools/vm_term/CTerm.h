// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CTerm.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-25 11:40                                                  == //
// ==   Modify Time          : 2020-10-25 11:40                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTERM_H__
#define  __CTERM_H__


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CTerm : This class deal with system termial functions                               == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CTerm
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTerm();
    // Destruct define
    inline virtual ~CTerm();

private:
    // Copy construct define
    inline CTerm             ( const CTerm &obj );
    // Assignment operation
    inline CTerm& operator = ( const CTerm &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar       mszBuf[tsztBufSize];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
// }}} ! Methods

};
// }}} ! [ class CTerm ]
// ================================================================================================ //

}; 
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CTerm.h.inl"
// ================================================================================================ /

#endif // ! __CTERM_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//      vm::CTerm loTerm;
//      loTerm.Write( vT("[ $CSI{red;light:step 1} ] this is a test! %d %s "), 10, vT("$CSI{green:OK}") )
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
