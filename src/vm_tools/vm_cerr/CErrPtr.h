// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CErrPtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 09:29:11                                               == //
// ==   Modify Time          : 2020-10-17 20:53:15                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERRPTR_H__
#define  __CERRPTR_H__

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CErrPtr : This class deal with sys error info                                       == //
// ------------------------------------------------------------------------------------------------ //
class CErrPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CErrPtr(const long long cllErrCode, tchar* const pBuf, const size_t csztBufSize);
    // Destruct define
    inline virtual ~CErrPtr();

private:
    // Copy construct define
    inline CErrPtr( const CErrPtr &obj );
    // Assignment operation
    inline CErrPtr& operator = ( const CErrPtr &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
protected:
    // Error string buffer
    tchar*          mpBuf;
    // Error string buffer size
    size_t          msztBufSize;

    // Error code
    long long       mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Output error code
    inline long long       toCode();
    // Output error message
    inline tchar*          toString();
    // Format error message, %EC = err code, %EM = err msg
    inline tchar*          Fmt( const tchar* const cpFmt = vT("%EC:%EM") );
    // Check has error or not
    inline bool            Check();
    // Check error and throw erorr string
    inline void            Throw();

protected:
    // Reload error infomation for different system
    virtual tchar*  GetErrStr( tchar* const pBuf, const size_t csztBufSize, size_t& sztStrLen );

// }}} ! Methods

};
// }}} ! [ class CErrPtr ]
// ================================================================================================ //
// Class realization :
#include "CErrPtr.h.inl"
// ================================================================================================ //

}
// }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CERRPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
