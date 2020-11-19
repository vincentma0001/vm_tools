// ================================================================================================ //
// ==                                                                                            == //
// ==                                    CStdMap.hpp.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-06 09:04                                                  == //
// ==   Modify Time          : 2020-11-19 09:50                                                  == //
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
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "CStdMap.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStdMap<tKey,tData> Construct && Destruct realization                               == //
// ================================================================================================ //
// [ Class CStdMap<tKey,tData> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::CStdMap()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< typename tKey,typename tData >
inline vm::CStdMap< tKey,tData >::CStdMap(  )
// {{{
{
}
// }}} End of func CStdMap<tKey,tData>::CStdMap()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CStdMap<tKey,tData>::~CStdMap()                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< typename tKey,typename tData >
inline vm::CStdMap< tKey,tData >::~CStdMap(  )
// {{{
{
}
// }}} End of func CStdMap<tKey,tData>::~CStdMap()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::CStdMap( const CStdMap &obj )                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< typename tKey,typename tData >
inline vm::CStdMap< tKey,tData >::CStdMap( const CStdMap &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CStdMap<tKey,tData>::CStdMap()
// ================================================================================================ //

// }}} ![ Class CStdMap<tKey,tData> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStdMap<tKey,tData> operator realization                                            == //
// ================================================================================================ //
// [ Class CStdMap<tKey,tData> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::operator = ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CStdMap<tKey,tData>& - [O] this object
template< typename tKey,typename tData >
inline vm::CStdMap< tKey,tData >& vm::CStdMap< tKey,tData >::operator = ( const CStdMap &obj )
// {{{
{
    return *this;
}
// }}} End of func CStdMap<tKey,tData>::operator=()
// ================================================================================================ //

// }}} ![ Class CStdMap<tKey,tData> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStdMap<tKey,tData> Functional realization                                          == //
// ================================================================================================ //
// [ Class CStdMap<tKey,tData> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Size(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get data count in map
// ==  Return  : size_t           - [O] Data count in map
template< typename tKey, typename tData >
inline size_t vm::CStdMap< tKey,tData >::Size( void ) const
// {{{ 
{
    return mMap.size();
}
// }}} end of func CStdMap<tKey,tData>::Size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::IsEmpty(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide map is empty or not
// ==  Return  : bool             - [O] true  - map is empty
// ==                                   false - map isn't empty
template< typename tKey, typename tData >
inline bool vm::CStdMap< tKey,tData >::IsEmpty( void ) const
// {{{ 
{
    return mMap.empty();
}
// }}} end of func CStdMap<tKey,tData>::IsEmpty(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::IsExist(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide Key is in map or not
// ==  Return  : bool             - [O] true  - key is in map
// ==                                   false - key isn't in map
// ==  Params  : oKey             - [I] key object
template< typename tKey, typename tData >
inline bool vm::CStdMap< tKey,tData >::IsExist( tKey oKey ) const
// {{{ 
{
    // confirm map isn't empty
    if (this->IsEmpty())
        return false;

    // find data in map
    tcMapItor iter = mMap.find(oKey);
    if (iter == mMap.end())
        return false;

    return true;
}
// }}} end of func CStdMap<tKey,tData>::IsExist(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Insert(...)                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Add data to map 
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : oKey             - [I] key object
// ==            &oData           - [I] Data object
template< typename tKey, typename tData >
inline bool vm::CStdMap< tKey,tData >::Insert( tKey oKey, tData &oData )
// {{{ 
{
    std::pair<tMapItor, bool> temp_pair = mMap.insert(tMapValue(oKey,oData));
    return temp_pair.second;
}
// }}} end of func CStdMap<tKey,tData>::Insert(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Find(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get data pointer by key from map 
// ==  Return  : tData*           - [O] Data pointer
// ==  Params  : oKey             - [I] Key object
template< typename tKey, typename tData >
inline tData* vm::CStdMap< tKey,tData >::Find( tKey oKey )
// {{{ 
{
    tData* pData = nullptr;

    // Confirm map is empty or not
    if (this->IsEmpty())
        return nullptr;

    // Find data by key in map
    tMapItor iter = mMap.find(oKey);
    if (iter == mMap.end())
        return nullptr;
    else
        pData = &vStdMapVal(iter);

    return pData;
}
// }}} end of func CStdMap<tKey,tData>::GetDA(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Remove(...)                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Remove data by key from map 
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : oKey             - [I] Key object
template< typename tKey, typename tData >
inline bool  vm::CStdMap< tKey,tData >::Remove( tKey oKey )
// {{{ 
{
    // Confirm map is empty or not
    if (this->IsEmpty())
        return false;

    // fine data by key in map
    tMapItor iter = mMap.find(oKey);
    if (iter == mMap.end())
        return false;
    
    // remove data from map
    mMap.erase(iter);
    return true;
}
// }}} end of func CStdMap<tKey,tData>::Remove(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Clean(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Delete all data in map 
// ==  Return  : void             - [O] Nothing for return
template< typename tKey, typename tData >
inline void vm::CStdMap< tKey,tData >::Clean( void )
// {{{ 
{
    mMap.clear();
}
// }}} end of func CStdMap<tKey,tData>::Clean(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::First(...)                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get first data in map 
// ==  Return  : vm::CStdMap::tMapItor - [O] the first data in map 
template< typename tKey, typename tData >
inline typename vm::CStdMap<tKey,tData>::tMapItor vm::CStdMap<tKey,tData>::First( void )
// {{{ 
{
    return mMap.begin();
}
// }}} end of func CStdMap<tKey,tData>::First(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMap<tKey,tData>::Last(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get last data in map 
// ==  Return  : vm::CStdMap::tMapItor - [O] the last data in map
template< typename tKey, typename tData >
inline typename vm::CStdMap<tKey,tData>::tMapItor vm::CStdMap<tKey,tData>::Last( void )
// {{{ 
{
    return mMap.end();
}
// }}} end of func CStdMap<tKey,tData>::Last(...)
// ================================================================================================ //

// }}} ![ Class CStdMap<tKey,tData> Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
