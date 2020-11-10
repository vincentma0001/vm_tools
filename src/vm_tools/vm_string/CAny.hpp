// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CAny.hpp                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-05 10:06                                                  == //
// ==   Modify Time          : 2020-11-05 10:06                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CANY_HPP__
#define  __CANY_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_string.h>

#include "CAnyPtr.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CAny : This class deal with convent operation between string and other types        == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CAny : public CAnyPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construc define 
    inline CAny(const bool               Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define 
//  inline CAny(const size_t             Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const char               Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned char      Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const wchar_t            Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const short              Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned short     Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const int                Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned int       Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long               Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned long      Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long long          Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned long long Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const float              Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const double             Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long double        Val ):CAnyPtr(Val,mszBuf,tsztBufSize),mszBuf{0x00}{};

    // Construc define
    inline CAny(const tchar* const     cpVal ):CAnyPtr(cpVal,mszBuf,tsztBufSize),mszBuf{0x00}{};

    // Destruct define
    inline virtual ~CAny(){};

private:
    // Copy construct define
    inline CAny             ( const CAny &obj ){               };
    // Assignment operation
    inline CAny& operator = ( const CAny &obj ){ return *this; };
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar       mszBuf[tsztBufSize];
// }}} ! Members

};
// }}} ! [ class CAny ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CANY_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
