// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CErr.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 10:45:11                                               == //
// ==   Modify Time          : 2020-10-27 14:17:33                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CERR_H__
#define  __CERR_H__

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{
// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    _V_CERR_DFT_BUF_SIZE_
#   define _V_CERR_DFT_BUF_SIZE_ 1024
#endif // !_V_CERR_DFT_BUF_SIZE_

#ifndef    vErrThrow
#   define vErrThrow(tBufSize, eErrCode) vm::CErr<tBufSize>(eErrCode).Throw()
#endif // !vErrThrow
// }}} ! Macrodefs

// ================================================================================================ //
// ==  Class CErr : this class deal with error operattion                                        == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tszBufSize >
class CErr : public CErrPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CErr();
    // Construct define
    inline          CErr( const long long cllErrCode );
    // Destruct define
    inline virtual ~CErr();

private:
    // Copy construct define
    inline CErr( const CErr &obj );
    // Assignment operation
    inline CErr& operator = ( const CErr &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar       mBuf[tszBufSize];
// }}} ! Members
};
// }}} ! [ class CErr ]
// ================================================================================================ //
// Class realization :
#include "CErr.hpp.inl"
// ================================================================================================ //

} 
// }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CERR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
