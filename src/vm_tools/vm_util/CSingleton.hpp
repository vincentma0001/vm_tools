// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CSingleton.hpp                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 08:26                                                  == //
// ==   Modify Time          : 2020-11-18 17:49                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSINGLETON_HPP__
#define  __CSINGLETON_HPP__


// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    vSingleTon
#   define vSingleTon( tInstance, tMutex )          vm::CSingleton<tInstance,tMutex>::Instance()
#endif  // vSingleTon
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CSingleton : this class define singleton object
template< class tInstance, class tMutex >
class CSingleton
// {{{
{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CSingleton();
    // Destruct define
    inline virtual ~CSingleton();

private:
    // Copy construct define
    inline CSingleton             ( const CSingleton &obj );
    // Assignment operation
    inline CSingleton& operator = ( const CSingleton &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
public:
    // Mutex object 
    static tMutex        mtMutex;
    // Instance object
    static tInstance*    mptInstance;
    //
// }}} ! Members

// Methods   : {{{
public:
    // Create a new instance
    inline static tInstance* Instance();
    // Destory instance object
    inline static void Destory();
// }}} ! Methods

}; // }}} End of class CSingleton

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CSingleton.hpp.inl"
// ================================================================================================ //


#endif // ! __CSINGLETON_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
