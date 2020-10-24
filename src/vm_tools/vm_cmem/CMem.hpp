// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CMem.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 13:39:35                                               == //
// ==   Modify Time          : 2020-10-18 22:15:46                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMEM_HPP__
#define  __CMEM_HPP__

// ================================================================================================ //
// ==  Class CMem : This class deal with memory operation                                        == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CMem : public CMemPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CMem();
    // Destruct define
    inline virtual ~CMem();

private:
    // Copy construct define
    inline CMem             ( const CMem &obj );
    // Assignment operation
    inline CMem& operator = ( const CMem &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar  mBuf[tsztBufSize];
// }}} ! Members

};
// }}} ! [ class CMem ]
// ================================================================================================ //
// Class realization :
#include "CMem.hpp.inl"
// ================================================================================================ //

#endif // ! __CMEM_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
