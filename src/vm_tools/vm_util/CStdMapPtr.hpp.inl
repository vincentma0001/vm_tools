// ================================================================================================ //
// ==                                                                                            == //
// ==                                  CStdMapPtr.hpp.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-06 09:04                                                  == //
// ==   Modify Time          : 2020-11-06 09:04                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTDMAPPTR_HPP_INL__
#define  __CSTDMAPPTR_HPP_INL__


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CStdMapPtr<tKey,tData> Construct && Destruct realization                            == //
// ================================================================================================ //
// [ Class CStdMapPtr<tKey,tData> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::CStdMapPtr()                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< typename tKey,typename tData >
inline vm::CStdMapPtr< tKey,tData >::CStdMapPtr(  )
// {{{
{
}
// }}} End of func CStdMapPtr<tKey,tData>::CStdMapPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CStdMapPtr<tKey,tData>::~CStdMapPtr()                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< typename tKey,typename tData >
inline vm::CStdMapPtr< tKey,tData >::~CStdMapPtr(  )
// {{{
{
}
// }}} End of func CStdMapPtr<tKey,tData>::~CStdMapPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::CStdMapPtr( const CStdMapPtr &obj )                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< typename tKey,typename tData >
inline vm::CStdMapPtr< tKey,tData >::CStdMapPtr( const CStdMapPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CStdMapPtr<tKey,tData>::CStdMapPtr()
// ================================================================================================ //

// }}} ![ Class CStdMapPtr<tKey,tData> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStdMapPtr<tKey,tData> operator realization                                         == //
// ================================================================================================ //
// [ Class CStdMapPtr<tKey,tData> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::operator = ()                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CStdMapPtr<tKey,tData>& - [O] this object
template< typename tKey,typename tData >
inline vm::CStdMapPtr< tKey,tData >& vm::CStdMapPtr< tKey,tData >::operator = ( const CStdMapPtr &obj )
// {{{
{
    return *this;
}
// }}} End of func CStdMapPtr<tKey,tData>::operator=()
// ================================================================================================ //

// }}} ![ Class CStdMapPtr<tKey,tData> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStdMapPtr<tKey,tData> Functional realization                                       == //
// ================================================================================================ //
// [ Class CStdMapPtr<tKey,tData> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Size(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get data count in map
// ==  Return  : size_t           - [O] Data count in map
template< typename tKey, typename tData >
inline size_t vm::CStdMapPtr< tKey,tData >::Size( void ) const
// {{{ 
{
    return mMap.size();
}
// }}} end of func CStdMapPtr<tKey,tData>::Size(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::IsEmpty(...)                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide map is empty or not
// ==  Return  : bool             - [O] true  - map is empty
// ==                                   false - map isn't empty
template< typename tKey, typename tData >
inline bool vm::CStdMapPtr< tKey,tData >::IsEmpty( void ) const
// {{{ 
{
    return mMap.empty();
}
// }}} end of func CStdMapPtr<tKey,tData>::IsEmpty(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::IsExist(...)                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide Key is in map or not
// ==  Return  : bool             - [O] true  - key is in map
// ==                                   false - key isn't in map
// ==  Params  : oKey             - [I] key object
template< typename tKey, typename tData >
inline bool vm::CStdMapPtr< tKey,tData >::IsExist( tKey oKey ) const
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
// }}} end of func CStdMapPtr<tKey,tData>::IsExist(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Insert(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Add data to map 
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : oKey             - [I] key object
// ==            pData            - [I] Data object
template< typename tKey, typename tData >
inline bool vm::CStdMapPtr< tKey,tData >::Insert( tKey oKey, tData* pData )
// {{{ 
{
    std::pair<tMapItor, bool> temp_pair = mMap.insert(tMapValue(oKey,pData));
    return temp_pair.second;
}
// }}} end of func CStdMapPtr<tKey,tData>::Insert(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Find(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get data pointer by key from map 
// ==  Return  : tData*           - [O] Data pointer
// ==  Params  : oKey             - [I] Key object
template< typename tKey, typename tData >
inline tData* vm::CStdMapPtr< tKey,tData >::Find( tKey oKey )
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
// }}} end of func CStdMapPtr<tKey,tData>::GetDA(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Remove(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Remove data by key from map 
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : oKey             - [I] Key object
template< typename tKey, typename tData >
inline bool  vm::CStdMapPtr< tKey,tData >::Remove( tKey oKey )
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
// }}} end of func CStdMapPtr<tKey,tData>::Remove(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Clean(...)                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Delete all data in map 
// ==  Return  : void             - [O] Nothing for return
template< typename tKey, typename tData >
inline void vm::CStdMapPtr< tKey,tData >::Clean( void )
// {{{ 
{
    mMap.clear();
}
// }}} end of func CStdMapPtr<tKey,tData>::Clean(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::First(...)                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get first data in map 
// ==  Return  : vm::CStdMapPtr::tMapItor - [O] the first data in map 
template< typename tKey, typename tData >
inline typename vm::CStdMapPtr<tKey,tData>::tMapItor vm::CStdMapPtr<tKey,tData>::First( void )
// {{{ 
{
    return mMap.begin();
}
// }}} end of func CStdMapPtr<tKey,tData>::First(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStdMapPtr<tKey,tData>::Last(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get last data in map 
// ==  Return  : vm::CStdMapPtr::tMapItor - [O] the last data in map
template< typename tKey, typename tData >
inline typename vm::CStdMapPtr<tKey,tData>::tMapItor vm::CStdMapPtr<tKey,tData>::Last( void )
// {{{ 
{
    return mMap.end();
}
// }}} end of func CStdMapPtr<tKey,tData>::Last(...)
// ================================================================================================ //

// }}} ![ Class CStdMapPtr<tKey,tData> Functional realization ]
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CSTDMAPPTR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
