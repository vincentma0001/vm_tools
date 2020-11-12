// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CBit32.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 08:49:00                                               == //
// ==   Modify Time          : 2020-11-12 12:07:00                                               == //
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
#include "CBitStr.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CBit32 : This class deal with Bit operation for 8bit(long type)                     == //
// ------------------------------------------------------------------------------------------------ //
class CBit32
// {{{
{
// ------------------------------------------------------------------------------------------------ //
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
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBit32(           long&  lVal ):mBit(*((unsigned long*) &lVal)){};
    inline          CBit32( unsigned  long& ulVal ):mBit(*((unsigned long*)&ulVal)){};
    // Destruct define
    inline virtual ~CBit32(){};

private:
    // Copy construct define
    inline CBit32             ( const CBit32 &obj ):mBit(obj.mBit){};
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Operators : {{{
public:
    // Assignment operation
    inline CBit32& operator = ( const        CBit32   &obj ){ mBit = obj.mBit; return *this;};
    // Assignment operation
    inline CBit32& operator = ( const unsigned long  ulVal ){ mBit =    ulVal; return *this;};
    // Assignment operation
    inline CBit32& operator = ( const          long   lVal ){ mBit =     lVal; return *this;};

    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned long operator & (const CBit32          &obj) { unsigned long lulVal = mBit & obj.mBit; return lulVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned long operator & (const unsigned long  ulVal) { unsigned long lulVal = mBit & ulVal;    return lulVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline long          operator & (const long            lVal) {          long  llVal = mBit & lVal;     return  llVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned long operator | (const CBit32          &obj) { unsigned long lulVal = mBit | obj.mBit; return lulVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned long operator | (const unsigned long  ulVal) { unsigned long lulVal = mBit | ulVal;    return lulVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline long          operator | (const long            lVal) {          long  llVal = mBit | lVal;     return  llVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned long operator ^ (const CBit32          &obj) { unsigned long lulVal = mBit ^ obj.mBit; return lulVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned long operator ^ (const unsigned long  ulVal) { unsigned long lulVal = mBit ^ ulVal;    return lulVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline long          operator ^ (const long            lVal) {          long  llVal = mBit ^ lVal;     return  llVal; };

    // Bit operation (~) [~00000011 = 11111100]
    inline unsigned long operator ~ ()                            { unsigned long lulVal = ~mBit; return lulVal; };
// }}} ! Operators

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    unsigned long&      mBit;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // normal func {{{
    // Return bit size
    inline size_t  size () const { return sizeof(mBit); };
    // Reset bit value to zero
    inline void    reset()       { mBit = 0;            };
    // }}}

    // return func {{{
    // Return          long value
    inline long           to_long  () { return           (long)mBit; };
    // Return unsigned long value
    inline unsigned long  to_ulong () { return  (unsigned long)mBit; };
    // }}}

    // Set value {{{
    // Set bit value
    inline void Set(const long            lVal) { mBit = mBit |  lVal; };
    // Set bit value
    inline void Set(const unsigned long  ulVal) { mBit = mBit | ulVal; };
    // Set bit value
    inline void Set(const emBitPos       emPos) { mBit = mBit | emPos; };

    // Set (01-08) {{{
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
    // }}}

    // Set (09-16) {{{
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
    // }}}

    // Set (17-24) {{{
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
    // }}}

    // Set (25-32) {{{
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
    // }}}

    // }}}

    // UnSet value {{{
    // Unset bit value
    inline void unSet(const long            lVal) { mBit = mBit ^  lVal; };
    // Unset bit value
    inline void unSet(const unsigned long  ulVal) { mBit = mBit ^ ulVal; };
    // Unset bit value
    inline void unSet(const emBitPos        emPos) { mBit = mBit ^ emPos; };

    // Unset (01-08) {{{
    // Unset bit 01 value
    inline void unSet01() { ((stBit32*)&mBit)->bit01 = 0; };
    // Unset bit 02 value
    inline void unSet02() { ((stBit32*)&mBit)->bit02 = 0; };
    // Unset bit 03 value
    inline void unSet03() { ((stBit32*)&mBit)->bit03 = 0; };
    // Unset bit 04 value
    inline void unSet04() { ((stBit32*)&mBit)->bit04 = 0; };
    // Unset bit 05 value
    inline void unSet05() { ((stBit32*)&mBit)->bit05 = 0; };
    // Unset bit 06 value
    inline void unSet06() { ((stBit32*)&mBit)->bit06 = 0; };
    // Unset bit 07 value
    inline void unSet07() { ((stBit32*)&mBit)->bit07 = 0; };
    // Unset bit 08 value
    inline void unSet08() { ((stBit32*)&mBit)->bit08 = 0; };
    // }}}

    // Unset (09-16) {{{
    // Unset bit 09 value
    inline void unSet09() { ((stBit32*)&mBit)->bit09 = 0; };
    // Unset bit 10 value
    inline void unSet10() { ((stBit32*)&mBit)->bit10 = 0; };
    // Unset bit 11 value
    inline void unSet11() { ((stBit32*)&mBit)->bit11 = 0; };
    // Unset bit 12 value
    inline void unSet12() { ((stBit32*)&mBit)->bit12 = 0; };
    // Unset bit 13 value
    inline void unSet13() { ((stBit32*)&mBit)->bit13 = 0; };
    // Unset bit 14 value
    inline void unSet14() { ((stBit32*)&mBit)->bit14 = 0; };
    // Unset bit 15 value
    inline void unSet15() { ((stBit32*)&mBit)->bit15 = 0; };
    // Unset bit 16 value
    inline void unSet16() { ((stBit32*)&mBit)->bit16 = 0; };
    // }}}

    // Unset (17-24) {{{
    // Unset bit 17 value
    inline void unSet17() { ((stBit32*)&mBit)->bit17 = 0; };
    // Unset bit 18 value
    inline void unSet18() { ((stBit32*)&mBit)->bit18 = 0; };
    // Unset bit 19 value
    inline void unSet19() { ((stBit32*)&mBit)->bit19 = 0; };
    // Unset bit 20 value
    inline void unSet20() { ((stBit32*)&mBit)->bit20 = 0; };
    // Unset bit 21 value
    inline void unSet21() { ((stBit32*)&mBit)->bit21 = 0; };
    // Unset bit 22 value
    inline void unSet22() { ((stBit32*)&mBit)->bit22 = 0; };
    // Unset bit 23 value
    inline void unSet23() { ((stBit32*)&mBit)->bit23 = 0; };
    // Unset bit 24 value
    inline void unSet24() { ((stBit32*)&mBit)->bit24 = 0; };
    // }}}

    // Unset (25-32) {{{
    // Unset bit 25 value
    inline void unSet25() { ((stBit32*)&mBit)->bit25 = 0; };
    // Unset bit 26 value
    inline void unSet26() { ((stBit32*)&mBit)->bit26 = 0; };
    // Unset bit 27 value
    inline void unSet27() { ((stBit32*)&mBit)->bit27 = 0; };
    // Unset bit 28 value
    inline void unSet28() { ((stBit32*)&mBit)->bit28 = 0; };
    // Unset bit 29 value
    inline void unSet29() { ((stBit32*)&mBit)->bit29 = 0; };
    // Unset bit 30 value
    inline void unSet30() { ((stBit32*)&mBit)->bit30 = 0; };
    // Unset bit 31 value
    inline void unSet31() { ((stBit32*)&mBit)->bit31 = 0; };
    // Unset bit 32 value
    inline void unSet32() { ((stBit32*)&mBit)->bit32 = 0; };
    // }}}

    // }}}

    // IsSet func {{{
    // Check bit is set or not
    inline bool isSet(const long            lVal) { return ((mBit) &  lVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const unsigned long  ulVal) { return ((mBit) & ulVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const emBitPos        emPos) { return ((mBit) & emPos) ? true : false; };

    // IsSet (01-08) {{{
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
    // }}}

    // IsSet (09-16) {{{
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
    // }}}

    // IsSet (17-24) {{{
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
    // }}}

    // IsSet (25-32) {{{
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
    // }}}

    // }}}
// }}} ! Methods

// ------------------------------------------------------------------------------------------------ //
// Friendefs : {{{
friend class CBitStr<CBit32>;
// }}} ! Friendefs
};
// }}} ! [ class CBit32 ]
// ================================================================================================ /

}; 
// }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CBIT32_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//
//  unsigned long           lulValue = 0;
//  vm::CBit32              loBit(lulValue);
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
