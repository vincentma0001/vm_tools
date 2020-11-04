// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CLocker.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 08:39                                                  == //
// ==   Modify Time          : 2020-11-04 08:39                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CLOCKER_HPP__
#define  __CLOCKER_HPP__


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CLocker : This class deal with mutex operation                                      == //
// ------------------------------------------------------------------------------------------------ //
template< class tMutex >
class CLocker
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CLocker( tMutex& oMutex ):mMutex(oMutex){ mMutex.Enter(); };
    // Destruct define
    inline virtual ~CLocker(                      ){ mMutex.Leave(); };

private:
    // Copy construct define
    inline CLocker             ( const CLocker &obj ){             };
    // Assignment operation
    inline CLocker& operator = ( const CLocker &obj ){return *this;};
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tMutex&         mMutex;
// }}} ! Members

};
// }}} ! [ class CLocker ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CLOCKER_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
