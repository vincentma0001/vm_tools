// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CSysErrPtr.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 09:29                                                  == //
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

#ifndef  __CSYSERRPTR_H__
#define  __CSYSERRPTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// Class CSysErrPtr : This class deal with sys error info
class CSysErrPtr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CSysErrPtr(const long clErrCode, tchar* const pBuf, const size_t csztBufSize);
    // Destruct define
    inline virtual ~CSysErrPtr();

private:
    // Copy construct define
    inline CSysErrPtr( const CSysErrPtr &obj );
    // Assignment operation
    inline CSysErrPtr& operator = ( const CSysErrPtr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
protected:
    // Error string buffer
    tchar*          mpBuf;
    // Error string buffer size
    size_t          msztBufSize;

    // Error code
    long            mlErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Output sys defined error code
    inline long     toCode();
    // Output sys defined error code
    inline tchar*   toString();

protected:
    // Reload error infomation for different system
    virtual tchar*  GetErrStr( tchar* const pBuf, const size_t csztBufSize, size_t& sztStrLen );

// }}} ! Methods

}; // }}} End of CSysErrPtr

}; // }}} End of namespace vm
// ================================================================================================ //
// elass realization :
#include "CSysErrPtr.h.inl"
// ================================================================================================ //


#endif // ! __CSYSERRPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
