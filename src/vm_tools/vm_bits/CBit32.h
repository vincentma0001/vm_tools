// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CBit32.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 08:49                                                  == //
// ==   Modify Time          : 2020-11-16 13:27                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBIT32_H__
#define  __CBIT32_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include "CBitStr.hpp"
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {

// Class CBit32 : This class deal with Bit operation for 8bit(int type)
class CBit32
{ // {{{

// Typedefs  : {{{
public:
    // Bit struct
    struct stBit32
    {
        unsigned int  bit01 : 1;
        unsigned int  bit02 : 1;
        unsigned int  bit03 : 1;
        unsigned int  bit04 : 1;
        unsigned int  bit05 : 1;
        unsigned int  bit06 : 1;
        unsigned int  bit07 : 1;
        unsigned int  bit08 : 1;

        unsigned int  bit09 : 1;
        unsigned int  bit10 : 1;
        unsigned int  bit11 : 1;
        unsigned int  bit12 : 1;
        unsigned int  bit13 : 1;
        unsigned int  bit14 : 1;
        unsigned int  bit15 : 1;
        unsigned int  bit16 : 1;

        unsigned int  bit17 : 1;
        unsigned int  bit18 : 1;
        unsigned int  bit19 : 1;
        unsigned int  bit20 : 1;
        unsigned int  bit21 : 1;
        unsigned int  bit22 : 1;
        unsigned int  bit23 : 1;
        unsigned int  bit24 : 1;

        unsigned int  bit25 : 1;
        unsigned int  bit26 : 1;
        unsigned int  bit27 : 1;
        unsigned int  bit28 : 1;
        unsigned int  bit29 : 1;
        unsigned int  bit30 : 1;
        unsigned int  bit31 : 1;
        unsigned int  bit32 : 1;
    };

    // Bit postion enum
    enum emBitPos
    {
        PosFF = 0xFFFFFFFF,
        Pos00 = 0x00000000,

        Pos01 = 0x00000001,
        Pos02 = 0x00000002,
        Pos03 = 0x00000004,
        Pos04 = 0x00000008,
        Pos05 = 0x00000010,
        Pos06 = 0x00000020,
        Pos07 = 0x00000040,
        Pos08 = 0x00000080,

        Pos09 = 0x00000100,
        Pos10 = 0x00000200,
        Pos11 = 0x00000400,
        Pos12 = 0x00000800,
        Pos13 = 0x00001000,
        Pos14 = 0x00002000,
        Pos15 = 0x00004000,
        Pos16 = 0x00008000,

        Pos17 = 0x00010000,
        Pos18 = 0x00020000,
        Pos19 = 0x00040000,
        Pos20 = 0x00080000,
        Pos21 = 0x00100000,
        Pos22 = 0x00200000,
        Pos23 = 0x00400000,
        Pos24 = 0x00800000,

        Pos25 = 0x01000000,
        Pos26 = 0x02000000,
        Pos27 = 0x04000000,
        Pos28 = 0x08000000,
        Pos29 = 0x10000000,
        Pos30 = 0x20000000,
        Pos31 = 0x40000000,
        Pos32 = 0x80000000
    };
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBit32(           int&  iVal ):mBit(*((unsigned int*) &iVal)){};
    inline          CBit32( unsigned  int& uiVal ):mBit(*((unsigned int*)&uiVal)){};
    // Destruct define
    inline virtual ~CBit32(){};

private:
    // Copy construct define
    inline CBit32             ( const CBit32 &obj ):mBit(obj.mBit){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CBit32& operator = ( const       CBit32   &obj ){ mBit = obj.mBit; return *this;};
    // Assignment operation
    inline CBit32& operator = ( const unsigned int  uiVal ){ mBit =    uiVal; return *this;};
    // Assignment operation
    inline CBit32& operator = ( const          int   iVal ){ mBit =     iVal; return *this;};

    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned int operator & (const CBit32         &obj) { unsigned int luiVal = mBit & obj.mBit; return luiVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned int operator & (const unsigned int  uiVal) { unsigned int luiVal = mBit & uiVal;    return luiVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline int          operator & (const int            iVal) {          int  liVal = mBit & iVal;     return  liVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned int operator | (const CBit32         &obj) { unsigned int luiVal = mBit | obj.mBit; return luiVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned int operator | (const unsigned int  uiVal) { unsigned int luiVal = mBit | uiVal;    return luiVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline int          operator | (const int            iVal) {          int  liVal = mBit | iVal;     return  liVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned int operator ^ (const CBit32         &obj) { unsigned int luiVal = mBit ^ obj.mBit; return luiVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned int operator ^ (const unsigned int  uiVal) { unsigned int luiVal = mBit ^ uiVal;    return luiVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline int          operator ^ (const int            iVal) {          int  liVal = mBit ^ iVal;     return  liVal; };

    // Bit operation (~) [~00000011 = 11111100]
    inline unsigned int operator ~ ()                          { unsigned int luiVal = ~mBit; return luiVal; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned int&      mBit;
// }}} ! Members

// Methods   : {{{
public:
    // Return bit size
    inline size_t  size () const { return sizeof(mBit); };
    // Reset bit value to zero
    inline void    reset()       { mBit = 0;            };

    // Return          int value
    inline int           to_int  () { return           (int)mBit; };
    // Return unsigned int value
    inline unsigned int  to_uint () { return  (unsigned int)mBit; };

    // Set bit value
    inline void Set(const int            iVal) { mBit = mBit |  iVal; };
    // Set bit value
    inline void Set(const unsigned int  uiVal) { mBit = mBit | uiVal; };
    // Set bit value
    inline void Set(const emBitPos      emPos) { mBit = mBit | emPos; };

    // Set bit 01 value
    inline void Set01() { ((stBit32*)&mBit)->bit01 = 1; };
    // Set bit 02 value
    inline void Set02() { ((stBit32*)&mBit)->bit02 = 1; };
    // Set bit 03 value
    inline void Set03() { ((stBit32*)&mBit)->bit03 = 1; };
    // Set bit 04 value
    inline void Set04() { ((stBit32*)&mBit)->bit04 = 1; };
    // Set bit 05 value
    inline void Set05() { ((stBit32*)&mBit)->bit05 = 1; };
    // Set bit 06 value
    inline void Set06() { ((stBit32*)&mBit)->bit06 = 1; };
    // Set bit 07 value
    inline void Set07() { ((stBit32*)&mBit)->bit07 = 1; };
    // Set bit 08 value
    inline void Set08() { ((stBit32*)&mBit)->bit08 = 1; };

    // Set bit 09 value
    inline void Set09() { ((stBit32*)&mBit)->bit09 = 1; };
    // Set bit 10 value
    inline void Set10() { ((stBit32*)&mBit)->bit10 = 1; };
    // Set bit 11 value
    inline void Set11() { ((stBit32*)&mBit)->bit11 = 1; };
    // Set bit 12 value
    inline void Set12() { ((stBit32*)&mBit)->bit12 = 1; };
    // Set bit 13 value
    inline void Set13() { ((stBit32*)&mBit)->bit13 = 1; };
    // Set bit 14 value
    inline void Set14() { ((stBit32*)&mBit)->bit14 = 1; };
    // Set bit 15 value
    inline void Set15() { ((stBit32*)&mBit)->bit15 = 1; };
    // Set bit 16 value
    inline void Set16() { ((stBit32*)&mBit)->bit16 = 1; };

    // Set bit 17 value
    inline void Set17() { ((stBit32*)&mBit)->bit17 = 1; };
    // Set bit 18 value
    inline void Set18() { ((stBit32*)&mBit)->bit18 = 1; };
    // Set bit 19 value
    inline void Set19() { ((stBit32*)&mBit)->bit19 = 1; };
    // Set bit 20 value
    inline void Set20() { ((stBit32*)&mBit)->bit20 = 1; };
    // Set bit 21 value
    inline void Set21() { ((stBit32*)&mBit)->bit21 = 1; };
    // Set bit 22 value
    inline void Set22() { ((stBit32*)&mBit)->bit22 = 1; };
    // Set bit 23 value
    inline void Set23() { ((stBit32*)&mBit)->bit23 = 1; };
    // Set bit 24 value
    inline void Set24() { ((stBit32*)&mBit)->bit24 = 1; };

    // Set bit 25 value
    inline void Set25() { ((stBit32*)&mBit)->bit25 = 1; };
    // Set bit 26 value
    inline void Set26() { ((stBit32*)&mBit)->bit26 = 1; };
    // Set bit 27 value
    inline void Set27() { ((stBit32*)&mBit)->bit27 = 1; };
    // Set bit 28 value
    inline void Set28() { ((stBit32*)&mBit)->bit28 = 1; };
    // Set bit 29 value
    inline void Set29() { ((stBit32*)&mBit)->bit29 = 1; };
    // Set bit 30 value
    inline void Set30() { ((stBit32*)&mBit)->bit30 = 1; };
    // Set bit 31 value
    inline void Set31() { ((stBit32*)&mBit)->bit31 = 1; };
    // Set bit 32 value
    inline void Set32() { ((stBit32*)&mBit)->bit32 = 1; };

    // UnSet bit value
    inline void UnSet(const int            iVal) { mBit = mBit ^  iVal; };
    // UnSet bit value
    inline void UnSet(const unsigned int  uiVal) { mBit = mBit ^ uiVal; };
    // UnSet bit value
    inline void UnSet(const emBitPos      emPos) { mBit = mBit ^ emPos; };

    // UnSet bit 01 value
    inline void UnSet01() { ((stBit32*)&mBit)->bit01 = 0; };
    // UnSet bit 02 value
    inline void UnSet02() { ((stBit32*)&mBit)->bit02 = 0; };
    // UnSet bit 03 value
    inline void UnSet03() { ((stBit32*)&mBit)->bit03 = 0; };
    // UnSet bit 04 value
    inline void UnSet04() { ((stBit32*)&mBit)->bit04 = 0; };
    // UnSet bit 05 value
    inline void UnSet05() { ((stBit32*)&mBit)->bit05 = 0; };
    // UnSet bit 06 value
    inline void UnSet06() { ((stBit32*)&mBit)->bit06 = 0; };
    // UnSet bit 07 value
    inline void UnSet07() { ((stBit32*)&mBit)->bit07 = 0; };
    // UnSet bit 08 value
    inline void UnSet08() { ((stBit32*)&mBit)->bit08 = 0; };

    // UnSet bit 09 value
    inline void UnSet09() { ((stBit32*)&mBit)->bit09 = 0; };
    // UnSet bit 10 value
    inline void UnSet10() { ((stBit32*)&mBit)->bit10 = 0; };
    // UnSet bit 11 value
    inline void UnSet11() { ((stBit32*)&mBit)->bit11 = 0; };
    // UnSet bit 12 value
    inline void UnSet12() { ((stBit32*)&mBit)->bit12 = 0; };
    // UnSet bit 13 value
    inline void UnSet13() { ((stBit32*)&mBit)->bit13 = 0; };
    // UnSet bit 14 value
    inline void UnSet14() { ((stBit32*)&mBit)->bit14 = 0; };
    // UnSet bit 15 value
    inline void UnSet15() { ((stBit32*)&mBit)->bit15 = 0; };
    // UnSet bit 16 value
    inline void UnSet16() { ((stBit32*)&mBit)->bit16 = 0; };

    // UnSet bit 17 value
    inline void UnSet17() { ((stBit32*)&mBit)->bit17 = 0; };
    // UnSet bit 18 value
    inline void UnSet18() { ((stBit32*)&mBit)->bit18 = 0; };
    // UnSet bit 19 value
    inline void UnSet19() { ((stBit32*)&mBit)->bit19 = 0; };
    // UnSet bit 20 value
    inline void UnSet20() { ((stBit32*)&mBit)->bit20 = 0; };
    // UnSet bit 21 value
    inline void UnSet21() { ((stBit32*)&mBit)->bit21 = 0; };
    // UnSet bit 22 value
    inline void UnSet22() { ((stBit32*)&mBit)->bit22 = 0; };
    // UnSet bit 23 value
    inline void UnSet23() { ((stBit32*)&mBit)->bit23 = 0; };
    // UnSet bit 24 value
    inline void UnSet24() { ((stBit32*)&mBit)->bit24 = 0; };

    // UnSet bit 25 value
    inline void UnSet25() { ((stBit32*)&mBit)->bit25 = 0; };
    // UnSet bit 26 value
    inline void UnSet26() { ((stBit32*)&mBit)->bit26 = 0; };
    // UnSet bit 27 value
    inline void UnSet27() { ((stBit32*)&mBit)->bit27 = 0; };
    // UnSet bit 28 value
    inline void UnSet28() { ((stBit32*)&mBit)->bit28 = 0; };
    // UnSet bit 29 value
    inline void UnSet29() { ((stBit32*)&mBit)->bit29 = 0; };
    // UnSet bit 30 value
    inline void UnSet30() { ((stBit32*)&mBit)->bit30 = 0; };
    // UnSet bit 31 value
    inline void UnSet31() { ((stBit32*)&mBit)->bit31 = 0; };
    // UnSet bit 32 value
    inline void UnSet32() { ((stBit32*)&mBit)->bit32 = 0; };

    // Check bit is set or not
    inline bool isSet(const int            iVal) { return ((mBit) &  iVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const unsigned int  uiVal) { return ((mBit) & uiVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const emBitPos      emPos) { return ((mBit) & emPos) ? true : false; };

    // Check bit 01 is set or not
    inline bool isSet01() { return (((stBit32*)&mBit)->bit01 & 1) ? true : false; };
    // Check bit 02 is set or not
    inline bool isSet02() { return (((stBit32*)&mBit)->bit02 & 1) ? true : false; };
    // Check bit 03 is set or not
    inline bool isSet03() { return (((stBit32*)&mBit)->bit03 & 1) ? true : false; };
    // Check bit 04 is set or not
    inline bool isSet04() { return (((stBit32*)&mBit)->bit04 & 1) ? true : false; };
    // Check bit 05 is set or not
    inline bool isSet05() { return (((stBit32*)&mBit)->bit05 & 1) ? true : false; };
    // Check bit 06 is set or not
    inline bool isSet06() { return (((stBit32*)&mBit)->bit06 & 1) ? true : false; };
    // Check bit 07 is set or not
    inline bool isSet07() { return (((stBit32*)&mBit)->bit07 & 1) ? true : false; };
    // Check bit 08 is set or not
    inline bool isSet08() { return (((stBit32*)&mBit)->bit08 & 1) ? true : false; };

    // Check bit 09 is set or not
    inline bool isSet09() { return (((stBit32*)&mBit)->bit09 & 1) ? true : false; };
    // Check bit 10 is set or not
    inline bool isSet10() { return (((stBit32*)&mBit)->bit10 & 1) ? true : false; };
    // Check bit 11 is set or not
    inline bool isSet11() { return (((stBit32*)&mBit)->bit11 & 1) ? true : false; };
    // Check bit 12 is set or not
    inline bool isSet12() { return (((stBit32*)&mBit)->bit12 & 1) ? true : false; };
    // Check bit 13 is set or not
    inline bool isSet13() { return (((stBit32*)&mBit)->bit13 & 1) ? true : false; };
    // Check bit 14 is set or not
    inline bool isSet14() { return (((stBit32*)&mBit)->bit14 & 1) ? true : false; };
    // Check bit 15 is set or not
    inline bool isSet15() { return (((stBit32*)&mBit)->bit15 & 1) ? true : false; };
    // Check bit 16 is set or not
    inline bool isSet16() { return (((stBit32*)&mBit)->bit16 & 1) ? true : false; };

    // Check bit 17 is set or not
    inline bool isSet17() { return (((stBit32*)&mBit)->bit17 & 1) ? true : false; };
    // Check bit 18 is set or not
    inline bool isSet18() { return (((stBit32*)&mBit)->bit18 & 1) ? true : false; };
    // Check bit 19 is set or not
    inline bool isSet19() { return (((stBit32*)&mBit)->bit19 & 1) ? true : false; };
    // Check bit 20 is set or not
    inline bool isSet20() { return (((stBit32*)&mBit)->bit20 & 1) ? true : false; };
    // Check bit 21 is set or not
    inline bool isSet21() { return (((stBit32*)&mBit)->bit21 & 1) ? true : false; };
    // Check bit 22 is set or not
    inline bool isSet22() { return (((stBit32*)&mBit)->bit22 & 1) ? true : false; };
    // Check bit 23 is set or not
    inline bool isSet23() { return (((stBit32*)&mBit)->bit23 & 1) ? true : false; };
    // Check bit 24 is set or not
    inline bool isSet24() { return (((stBit32*)&mBit)->bit24 & 1) ? true : false; };

    // Check bit 25 is set or not
    inline bool isSet25() { return (((stBit32*)&mBit)->bit25 & 1) ? true : false; };
    // Check bit 26 is set or not
    inline bool isSet26() { return (((stBit32*)&mBit)->bit26 & 1) ? true : false; };
    // Check bit 27 is set or not
    inline bool isSet27() { return (((stBit32*)&mBit)->bit27 & 1) ? true : false; };
    // Check bit 28 is set or not
    inline bool isSet28() { return (((stBit32*)&mBit)->bit28 & 1) ? true : false; };
    // Check bit 29 is set or not
    inline bool isSet29() { return (((stBit32*)&mBit)->bit29 & 1) ? true : false; };
    // Check bit 30 is set or not
    inline bool isSet30() { return (((stBit32*)&mBit)->bit30 & 1) ? true : false; };
    // Check bit 31 is set or not
    inline bool isSet31() { return (((stBit32*)&mBit)->bit31 & 1) ? true : false; };
    // Check bit 32 is set or not
    inline bool isSet32() { return (((stBit32*)&mBit)->bit32 & 1) ? true : false; };

// }}} ! Methods

// Friendefs : {{{
friend class CBitStr<CBit32>;
// }}} ! Friendefs

}; // }}} End of class CBit32

}; // }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CBIT32_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//
//  unsigned int           luiValue = 0;
//  vm::CBit32              loBit(luiValue);
//  vm::CBitStr<vm::CBit32> loBitStr(loBit);
//
//  loBit.Set01();
//
//  vCout << vT("Bin : ") << loBitStr.toBin() << vEndl;
//
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
