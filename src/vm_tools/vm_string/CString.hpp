// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CString.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 20:33:15                                               == //
// ==   Modify Time          : 2020-11-18 09:16:37                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRING_HPP__
#define  __CSTRING_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CStrPtr.h"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CString : this class deal with string's operations
template< size_t tsztBufSize >
class CString : public CStrPtr
{  // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CString(                           );
    // Construct define
    inline          CString( const tchar* const  cpStr );
    // Copy construct define
    inline          CString( const CStrPtr        &Obj );
    // Copy construct define
    inline          CString( const CString        &Obj );
    // Destruct define
    inline virtual ~CString();

public:
    // Assignment operation
    inline CString& operator = ( const CStrPtr                &Obj );
    // Assignment operation
    inline CString& operator = ( const tchar* const          cpSrc );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tchar   mBuf[tsztBufSize];
// }}} ! Members

}; // }}} End of class CString

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realzation
#include "CString.hpp.inl"
// ================================================================================================ //

#endif // ! __CSTRING_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
