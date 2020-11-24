// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CTime.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 17:46                                                  == //
// ==   Modify Time          : 2020-11-24 23:08                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTIME_HPP__
#define  __CTIME_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CTimeb.h"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CTime : this class deal with time function
template< size_t tsztBufSize >
class CTime : public CTimeb
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTime(                  );
    // Destruct define
    inline virtual ~CTime(                  );

private:
    // Copy construct define
    inline          CTime( const CTime &obj );
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline tTimeb& operator =  ( const CTime &obj );
    inline tTimeb& operator +  ( const CTime &obj );
    inline tTimeb& operator += ( const CTime &obj );
    inline tTimeb& operator -  ( const CTime &obj );
    inline tTimeb& operator -= ( const CTime &obj );

    inline bool    operator == ( const CTime &obj );
    inline bool    operator != ( const CTime &obj );
    inline bool    operator >  ( const CTime &obj );
    inline bool    operator <  ( const CTime &obj );
// }}} ! Operators

// Menbers   : {{{
private:
    // timeb object
    tTimeb        mstTimeb;
    // buffers
    tchar         mszBuf[tsztBufSize];
// }}} ! Members

// Methods   : {{{
public:
    // Output formated string of CTime object, more format info see this file's note
    // Format : %Y4 = %Y, %Y2 = %y, %MM = %m, %DD = %d, %HH = %H, %MM = %M, %SS = %S.
    inline tchar* Fmt( const tchar* const cpFmt );
// }}} ! Methods

}; // }}} End of class CTime

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CTime.hpp.inl"
// ================================================================================================ //


#endif // ! __CTIME_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
