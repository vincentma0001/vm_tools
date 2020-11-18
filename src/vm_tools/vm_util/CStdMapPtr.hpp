// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CStdMapPtr.hpp                                        == //
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

#ifndef  __CSTDMAPPTR_HPP__
#define  __CSTDMAPPTR_HPP__


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
#ifndef    vStdMapPtrKey
#   define vStdMapPtrKey(oIter)           (oIter->first)
#endif // !vStdMapPtrKey

#ifndef    vStdMapPtrVal
#   define vStdMapPtrVal(oIter)       (*(oIter->second))
#endif // !vStdMapPtrVal
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CStdMapPtr : this class has simplified std::map
template< typename tKey, typename tData >
class CStdMapPtr
{ // {{{

// Typedefs  : {{{
public:
    // Redefined std::map
    typedef typename std::map < tKey, tData* >                    tMap;
    // Redefined std::iterator
    typedef typename std::map < tKey, tData* >::iterator          tMapItor;
    // Redfined std::map::value_type
    typedef typename std::map < tKey, tData* >::value_type        tMapValue;
    // Redfeined std::map::const_iterator
    typedef typename std::map < tKey, tData* >::const_iterator    tcMapItor;
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CStdMapPtr();
    // Destruct define
    inline virtual ~CStdMapPtr();

private:
    // Copy construct define
    inline CStdMapPtr             ( const CStdMapPtr &obj );
    // Assignment operation
    inline CStdMapPtr& operator = ( const CStdMapPtr &obj );
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
    inline bool     Insert (tKey oKey, tData* oData);
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

}; // }}} End of class CStdMapPtr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CStdMapPtr.hpp.inl"
// ================================================================================================ //

#endif // ! __CSTDMAPPTR_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
