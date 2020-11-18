// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CStdMap.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-06 08:46                                                  == //
// ==   Modify Time          : 2020-11-18 09:13                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTDMAP_HPP__
#define  __CSTDMAP_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <map>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    vStdMapKey
#   define vStdMapKey(oIter)         (oIter->first)
#endif // !vStdMapKey

#ifndef    vStdMapVal
#   define vStdMapVal(oIter)        (oIter->second)
#endif // !vStdMapVal
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CStdMap : this class has simplified std::map
template< typename tKey, typename tData >
class CStdMap
{ // {{{

// Typedefs  : {{{
public:
    // Redefined std::map
    typedef typename std::map < tKey, tData >                    tMap;
    // Redefined std::iterator
    typedef typename std::map < tKey, tData >::iterator          tMapItor;
    // Redfined std::map::value_type
    typedef typename std::map < tKey, tData >::value_type        tMapValue;
    // Redfeined std::map::const_iterator
    typedef typename std::map < tKey, tData >::const_iterator    tcMapItor;
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CStdMap();
    // Destruct define
    inline virtual ~CStdMap();

private:
    // Copy construct define
    inline CStdMap             ( const CStdMap &obj );
    // Assignment operation
    inline CStdMap& operator = ( const CStdMap &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tMap                            mMap;
// }}} ! Members

// Methods   : {{{
public:
    // Get data's count in map
    inline size_t   Size   (void) const;
    // Decide map is empty or not
    inline bool     IsEmpty(void) const;

    // Decide key is in map or not
    inline bool     IsExist(tKey oKey) const;

    // Add data to map
    inline bool     Insert (tKey oKey, tData oData);
    // Get data pointer by key from map 
    inline tData*   Find   (tKey oKey);
    // Rempve data by key from map
    inline bool     Remove (tKey oKey);

    // Delete all data in map
    inline void     Clean  (void);

    // Get first data in map
    inline tMapItor First  (void);
    // Get last data in map
    inline tMapItor Last   (void);
// }}} ! Methods

}; // }}} End of class CStdMap

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CStdMap.hpp.inl"
// ================================================================================================ //


#endif // ! __CSTDMAP_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
