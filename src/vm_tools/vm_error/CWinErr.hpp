// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinErr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 19:00                                                  == //
// ==   Modify Time          : 2020-11-16 18:30                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CWINERR_HPP__
#define  __CWINERR_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CSysErr.hpp"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CWinErr : this class deal with windows error
template< size_t tsztBufSize>
class CWinErr : public CSysErr<tsztBufSize>
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CWinErr(                            );
    // Construct define
    inline          CWinErr( const long long cllErrCode );
    // Destruct define
    inline virtual ~CWinErr(                            );

private:
    // Copy construct define
    inline CWinErr             ( const CWinErr &obj );
    // Assignment operation
    inline CWinErr& operator = ( const CWinErr &obj );
// }}} ! Construct & Destruct

// Methods   : {{{
protected:
    // Reload error infomation for different system
    virtual tchar*  GetErrStr( tchar* const pBuf, const size_t csztBufSize, size_t& sztStrLen );
// }}} ! Methods

}; // }}} End of class CWinErr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CWinErr.hpp.inl"
// ================================================================================================ //


#endif // ! __CWINERR_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
