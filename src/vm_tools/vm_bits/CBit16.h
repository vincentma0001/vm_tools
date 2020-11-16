// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CBit16.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 08:49:00                                               == //
// ==   Modify Time          : 2020-11-16 09:58:20                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBIT16_H__
#define  __CBIT16_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "CBitStr.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm {

// Class CBit16 : This class deal with Bit operation for 8bit(short type)
class CBit16
{ // {{{

// Typedefs  : {{{
public:
    // Bit struct
    struct stBit16
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
    };

    // Bit postion enum
    enum emBitPos
    {
        PosFF = 0xFFFF,
        Pos00 = 0x0000,

        Pos01 = 0x0001,
        Pos02 = 0x0002,
        Pos03 = 0x0004,
        Pos04 = 0x0008,
        Pos05 = 0x0010,
        Pos06 = 0x0020,
        Pos07 = 0x0040,
        Pos08 = 0x0080,

        Pos09 = 0x0100,
        Pos10 = 0x0200,
        Pos11 = 0x0400,
        Pos12 = 0x0800,
        Pos13 = 0x1000,
        Pos14 = 0x2000,
        Pos15 = 0x4000,
        Pos16 = 0x8000
    };
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBit16(           short&  sVal ):mBit(*((unsigned short*) &sVal)){};
    inline          CBit16( unsigned  short& usVal ):mBit(*((unsigned short*)&usVal)){};
    // Destruct define
    inline virtual ~CBit16(){};

private:
    // Copy construct define
    inline CBit16             ( const CBit16 &obj ):mBit(obj.mBit){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CBit16& operator = ( const        CBit16    &obj ){ mBit = obj.mBit; return *this;};
    // Assignment operation
    inline CBit16& operator = ( const unsigned short  usVal ){ mBit =    usVal; return *this;};
    // Assignment operation
    inline CBit16& operator = ( const          short   sVal ){ mBit =     sVal; return *this;};

    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned short operator & (const CBit16           &obj) { unsigned short lusVal = mBit & obj.mBit; return lusVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned short operator & (const unsigned short  usVal) { unsigned short lusVal = mBit & usVal;    return lusVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline short          operator & (const short            sVal) {          short  lsVal = mBit & sVal;     return  lsVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned short operator | (const CBit16           &obj) { unsigned short lusVal = mBit | obj.mBit; return lusVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned short operator | (const unsigned short  usVal) { unsigned short lusVal = mBit | usVal;    return lusVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline short          operator | (const short            sVal) {          short  lsVal = mBit | sVal;     return  lsVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned short operator ^ (const CBit16           &obj) { unsigned short lusVal = mBit ^ obj.mBit; return lusVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned short operator ^ (const unsigned short  usVal) { unsigned short lusVal = mBit ^ usVal;    return lusVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline short          operator ^ (const short            sVal) {          short  lsVal = mBit ^ sVal;     return  lsVal; };

    // Bit operation (~) [~00000011 = 11111100]
    inline unsigned short operator ~ ()                            { unsigned short lusVal = ~mBit; return lusVal; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned short&   mBit;
// }}} ! Members

// Methods   : {{{
public:
    // Return bit size
    inline size_t  size () const { return sizeof(mBit); };
    // Reset bit value to zero
    inline void    reset()       { mBit = 0;            };

    // Return          short value
    inline short           to_short  () { return           (short)mBit; };
    // Return unsigned short value
    inline unsigned short  to_ushort () { return  (unsigned short)mBit; };

    // Set bit value
    inline void Set(const short            sVal) { mBit = mBit |  sVal; };
    // Set bit value
    inline void Set(const unsigned short  usVal) { mBit = mBit | usVal; };
    // Set bit value
    inline void Set(const emBitPos        emPos) { mBit = mBit | emPos; };

    // Set bit 01 value
    inline void Set01() { ((stBit16*)&mBit)->bit01 = 1; };
    // Set bit 02 value
    inline void Set02() { ((stBit16*)&mBit)->bit02 = 1; };
    // Set bit 03 value
    inline void Set03() { ((stBit16*)&mBit)->bit03 = 1; };
    // Set bit 04 value
    inline void Set04() { ((stBit16*)&mBit)->bit04 = 1; };
    // Set bit 05 value
    inline void Set05() { ((stBit16*)&mBit)->bit05 = 1; };
    // Set bit 06 value
    inline void Set06() { ((stBit16*)&mBit)->bit06 = 1; };
    // Set bit 07 value
    inline void Set07() { ((stBit16*)&mBit)->bit07 = 1; };
    // Set bit 08 value
    inline void Set08() { ((stBit16*)&mBit)->bit08 = 1; };

    // Set bit 09 value
    inline void Set09() { ((stBit16*)&mBit)->bit09 = 1; };
    // Set bit 10 value
    inline void Set10() { ((stBit16*)&mBit)->bit10 = 1; };
    // Set bit 11 value
    inline void Set11() { ((stBit16*)&mBit)->bit11 = 1; };
    // Set bit 12 value
    inline void Set12() { ((stBit16*)&mBit)->bit12 = 1; };
    // Set bit 13 value
    inline void Set13() { ((stBit16*)&mBit)->bit13 = 1; };
    // Set bit 14 value
    inline void Set14() { ((stBit16*)&mBit)->bit14 = 1; };
    // Set bit 15 value
    inline void Set15() { ((stBit16*)&mBit)->bit15 = 1; };
    // Set bit 16 value
    inline void Set16() { ((stBit16*)&mBit)->bit16 = 1; };

    // UnSet bit value
    inline void UnSet(const short            sVal) { mBit = mBit ^  sVal; };
    // UnSet bit value
    inline void UnSet(const unsigned short  usVal) { mBit = mBit ^ usVal; };
    // UnSet bit value
    inline void UnSet(const emBitPos        emPos) { mBit = mBit ^ emPos; };

    // UnSet bit 01 value
    inline void UnSet01() { ((stBit16*)&mBit)->bit01 = 0; };
    // UnSet bit 02 value
    inline void UnSet02() { ((stBit16*)&mBit)->bit02 = 0; };
    // UnSet bit 03 value
    inline void UnSet03() { ((stBit16*)&mBit)->bit03 = 0; };
    // UnSet bit 04 value
    inline void UnSet04() { ((stBit16*)&mBit)->bit04 = 0; };
    // UnSet bit 05 value
    inline void UnSet05() { ((stBit16*)&mBit)->bit05 = 0; };
    // UnSet bit 06 value
    inline void UnSet06() { ((stBit16*)&mBit)->bit06 = 0; };
    // UnSet bit 07 value
    inline void UnSet07() { ((stBit16*)&mBit)->bit07 = 0; };
    // UnSet bit 08 value
    inline void UnSet08() { ((stBit16*)&mBit)->bit08 = 0; };

    // UnSet bit 09 value
    inline void UnSet09() { ((stBit16*)&mBit)->bit09 = 0; };
    // UnSet bit 10 value
    inline void UnSet10() { ((stBit16*)&mBit)->bit10 = 0; };
    // UnSet bit 11 value
    inline void UnSet11() { ((stBit16*)&mBit)->bit11 = 0; };
    // UnSet bit 12 value
    inline void UnSet12() { ((stBit16*)&mBit)->bit12 = 0; };
    // UnSet bit 13 value
    inline void UnSet13() { ((stBit16*)&mBit)->bit13 = 0; };
    // UnSet bit 14 value
    inline void UnSet14() { ((stBit16*)&mBit)->bit14 = 0; };
    // UnSet bit 15 value
    inline void UnSet15() { ((stBit16*)&mBit)->bit15 = 0; };
    // UnSet bit 16 value
    inline void UnSet16() { ((stBit16*)&mBit)->bit16 = 0; };

    // Check bit is set or not
    inline bool isSet(const short            sVal) { return ((mBit) &  sVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const unsigned short  usVal) { return ((mBit) & usVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const emBitPos        emPos) { return ((mBit) & emPos) ? true : false; };

    // Check bit 01 is set or not
    inline bool isSet01() { return (((stBit16*)&mBit)->bit01 & 1) ? true : false; };
    // Check bit 02 is set or not
    inline bool isSet02() { return (((stBit16*)&mBit)->bit02 & 1) ? true : false; };
    // Check bit 03 is set or not
    inline bool isSet03() { return (((stBit16*)&mBit)->bit03 & 1) ? true : false; };
    // Check bit 04 is set or not
    inline bool isSet04() { return (((stBit16*)&mBit)->bit04 & 1) ? true : false; };
    // Check bit 05 is set or not
    inline bool isSet05() { return (((stBit16*)&mBit)->bit05 & 1) ? true : false; };
    // Check bit 06 is set or not
    inline bool isSet06() { return (((stBit16*)&mBit)->bit06 & 1) ? true : false; };
    // Check bit 07 is set or not
    inline bool isSet07() { return (((stBit16*)&mBit)->bit07 & 1) ? true : false; };
    // Check bit 08 is set or not
    inline bool isSet08() { return (((stBit16*)&mBit)->bit08 & 1) ? true : false; };

    // Check bit 09 is set or not
    inline bool isSet09() { return (((stBit16*)&mBit)->bit09 & 1) ? true : false; };
    // Check bit 10 is set or not
    inline bool isSet10() { return (((stBit16*)&mBit)->bit10 & 1) ? true : false; };
    // Check bit 11 is set or not
    inline bool isSet11() { return (((stBit16*)&mBit)->bit11 & 1) ? true : false; };
    // Check bit 12 is set or not
    inline bool isSet12() { return (((stBit16*)&mBit)->bit12 & 1) ? true : false; };
    // Check bit 13 is set or not
    inline bool isSet13() { return (((stBit16*)&mBit)->bit13 & 1) ? true : false; };
    // Check bit 14 is set or not
    inline bool isSet14() { return (((stBit16*)&mBit)->bit14 & 1) ? true : false; };
    // Check bit 15 is set or not
    inline bool isSet15() { return (((stBit16*)&mBit)->bit15 & 1) ? true : false; };
    // Check bit 16 is set or not
    inline bool isSet16() { return (((stBit16*)&mBit)->bit16 & 1) ? true : false; };

// }}} ! Methods

// Friendefs : {{{
friend class CBitStr<CBit16>;
// }}} ! Friendefs

}; // }}} End of class CBit16

}; // }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CBIT16_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//
//  unsigned short          lusValue = 0;
//  vm::CBit16              loBit(lusValue);
//  vm::CBitStr<vm::CBit16> loBitStr(loBit);
//
//  loBit.Set01();
//
//  vCout << vT("Bin : ") << loBitStr.toBin() << vEndl;
//
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
