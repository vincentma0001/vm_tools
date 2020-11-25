// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CAny.hpp                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-05 10:06                                                  == //
// ==   Modify Time          : 2020-11-25 19:22                                                  == //
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
#include "CAnyPtr.h"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    vAnyToStr
#   define vAnyToStr(tsztBufSize,val)           vm::CAny<tsztBufSize>( val ).toStr()
#endif // !vAnyToStr

#ifndef    vAnyToStr2
#   define vAnyToStr2(tsztBufSize,val,fmt)      vm::CAny<tsztBufSize>( val ).toStr2(fmt)
#endif // !vAnyToStr2

#ifndef    vStrToChar
#   define vStrToChar(tsztBufSize,str)          vm::CAny<tsztBufSize>( str ).toChar()
#endif // !vStrToChar

#ifndef    vStrtoBool
#   define vStrtoBool(tsztBufSize,str)          vm::CAny<tsztBufSize>( str ).toBool()
#endif // !vStrtoBool

#ifndef    vStrToSize
#   define vStrToSize(tsztBufSize,str)          vm::CAny<tsztBufSize>( str ).toSize()
#endif // !vStrToSize

#ifndef    vStrToUChar
#   define vStrToUChar(tsztBufSize,str)         vm::CAny<tsztBufSize>( str ).toUChar()
#endif // !vStrToUChar

#ifndef    vStrToInt
#   define vStrToInt(tsztBufSize,str)           vm::CAny<tsztBufSize>( str ).toInt()
#endif // !vStrToInt

#ifndef    vStrToUInt
#   define vStrToUInt(tsztBufSize,str)          vm::CAny<tsztBufSize>( str ).toUInt()
#endif // !vStrToUInt

#ifndef    vStrToLong
#   define vStrToLong(tsztBufSize,str)          vm::CAny<tsztBufSize>( str ).toLong()
#endif // !vStrToLong

#ifndef    vStrToULong
#   define vStrToULong(tsztBufSize,str)         vm::CAny<tsztBufSize>( str ).toULong()
#endif // !vStrToULong

#ifndef    vStrToLLong
#   define vStrToLLong(tsztBufSize,str)         vm::CAny<tsztBufSize>( str ).toLLong()
#endif // !vStrToLLong

#ifndef    vStrToULLong
#   define vStrToULLong(tsztBufSize,str)        vm::CAny<tsztBufSize>( str ).toULLong()
#endif // !vStrToULLong

#ifndef    vStrToFloat
#   define vStrToFloat(tsztBufSize,str)         vm::CAny<tsztBufSize>( str ).toFloat()
#endif // !vStrToFloat

#ifndef    vStrToDouble
#   define vStrToDouble(tsztBufSize,str)        vm::CAny<tsztBufSize>( str ).toDouble()
#endif // !vStrToDouble

#ifndef    vStrToLDouble
#   define vStrToLDouble (tsztBufSize,str)      vm::CAny<tsztBufSize>( str ).toLDouble()
#endif // !vStrToLDouble
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CAny : This class deal with convent operation between string and other types
template< size_t tsztBufSize >
class CAny : public CAnyPtr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construc define 
    inline CAny(const bool               Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const char               Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned char      Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const wchar_t            Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const short              Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned short     Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const int                Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned int       Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long               Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned long      Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long long          Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const unsigned long long Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const float              Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const double             Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};
    // Construc define
    inline CAny(const long double        Val ):CAnyPtr(  Val,mszBuf,tsztBufSize),mszBuf{0x00}{};

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

// Menbers   : {{{
private:
    tchar       mszBuf[tsztBufSize];
// }}} ! Members

}; // }}} End of class CAny

// ------------------------------------------------------------------------------------------------ //
};// }}} End of namespace vm
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
