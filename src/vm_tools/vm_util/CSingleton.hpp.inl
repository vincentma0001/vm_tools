// ================================================================================================ //
// ==                                                                                            == //
// ==                                    CSingleton.hpp.inl                                      == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 08:50                                                  == //
// ==   Modify Time          : 2020-11-18 09:01                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_tools/vm_ipcs.h>
//.vm's.function.files.inlcuded
#include "CSingleton.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ CSingleton init ] {{{
#ifndef    vSingleTonInit
#   define vSingleTonInit
template<class tInstance,class tMutex>tInstance* vm::CSingleton<tInstance,tMutex>::mptInstance = nullptr;
template<class tInstance,class tMutex>tMutex     vm::CSingleton<tInstance,tMutex>::mtMutex;
#endif // !vSingleTonInit
// }}} ! CSingleton init
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSingleton<tInstance,tMutex> Construct && Destruct realization                      == //
// ================================================================================================ //
// [ Class CSingleton<tInstance,tMutex> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CSingleton<tInstance,tMutex>::CSingleton()                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< class tInstance, class tMutex >
inline vm::CSingleton< tInstance,tMutex >::CSingleton(  )
// {{{
{
}
// }}} End of func CSingleton<tInstance,tMutex>::CSingleton()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CSingleton<tInstance,tMutex>::~CSingleton()                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< class tInstance, class tMutex >
inline vm::CSingleton< tInstance,tMutex >::~CSingleton(  )
// {{{
{
}
// }}} End of func CSingleton<tInstance,tMutex>::~CSingleton()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSingleton<tInstance,tMutex>::CSingleton( const CSingleton &obj )               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< class tInstance, class tMutex >
inline vm::CSingleton< tInstance,tMutex >::CSingleton( const CSingleton &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CSingleton<tInstance,tMutex>::CSingleton()
// ================================================================================================ //

// }}} ![ Class CSingleton<tInstance,tMutex> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSingleton<tInstance,tMutex> operator realization                                   == //
// ================================================================================================ //
// [ Class CSingleton<tInstance,tMutex> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CSingleton<tInstance,tMutex>::operator = ()                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CSingleton<tInstance,tMutex>& - [O] this object
template< class tInstance, class tMutex >
inline vm::CSingleton< tInstance,tMutex >& vm::CSingleton< tInstance,tMutex >::operator = ( const CSingleton &obj )
// {{{
{
    return *this;
}
// }}} End of func CSingleton<tInstance,tMutex>::operator=()
// ================================================================================================ //

// }}} ![ Class CSingleton<tInstance,tMutex> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CSingleton<tInstance,tMutex> Functional realization                                 == //
// ================================================================================================ //
// [ Class CSingleton<tInstance,tMutex> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CSingleton<tInstance,tMutex>::Instance(...)                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a new instance
// ==  Return  : tInstance*       - [O] Instance pointer
template< class tInstance, class tMutex >
inline tInstance* vm::CSingleton< tInstance,tMutex >::Instance(  )
// {{{ 
{
    // three time checked locking for multithreading safe and performance
    // the detail see the <Modern c++ design> singleton
    if ( mptInstance == nullptr )
    {
        vm::CLocker<tMutex> lock(mtMutex);

        if (mptInstance == nullptr)
            mptInstance = new tInstance;
    }

    return mptInstance;
}
// }}} end of func CSingleton<tInstance,tMutex>::Instance(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CSingleton<tInstance,tMutex>::Destory(...)                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destory instance object
// ==  Return  : void             - [O] Nothing for return
template< class tInstance, class tMutex >
inline void vm::CSingleton< tInstance,tMutex >::Destory(  )
// {{{ 
{
    if ( mptInstance != nullptr )
    {
        vm::CLocker<tMutex>  lock(mtMutex);

        if ( mptInstance != nullptr )
        {
            delete mptInstance;
            mptInstance = nullptr;
        }
    }
}
// }}} end of func CSingleton<tInstance,tMutex>::Destory(...)
// ================================================================================================ //


// }}} ![ Class CSingleton<tInstance,tMutex> Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
