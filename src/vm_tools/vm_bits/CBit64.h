// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CBit64.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 08:49                                                  == //
// ==   Modify Time          : 2020-11-16 13:26                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBIT64_H__
#define  __CBIT64_H__


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

// Class CBit64 : This class deal with Bit operation for 8bit(long long type)
class CBit64
{ // {{{

// Typedefs  : {{{
public:
    // Bit struct
    struct stBit64
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

        unsigned int  bit33 : 1;
        unsigned int  bit34 : 1;
        unsigned int  bit35 : 1;
        unsigned int  bit36 : 1;
        unsigned int  bit37 : 1;
        unsigned int  bit38 : 1;
        unsigned int  bit39 : 1;
        unsigned int  bit40 : 1;

        unsigned int  bit41 : 1;
        unsigned int  bit42 : 1;
        unsigned int  bit43 : 1;
        unsigned int  bit44 : 1;
        unsigned int  bit45 : 1;
        unsigned int  bit46 : 1;
        unsigned int  bit47 : 1;
        unsigned int  bit48 : 1;

        unsigned int  bit49 : 1;
        unsigned int  bit50 : 1;
        unsigned int  bit51 : 1;
        unsigned int  bit52 : 1;
        unsigned int  bit53 : 1;
        unsigned int  bit54 : 1;
        unsigned int  bit55 : 1;
        unsigned int  bit56 : 1;

        unsigned int  bit57 : 1;
        unsigned int  bit58 : 1;
        unsigned int  bit59 : 1;
        unsigned int  bit60 : 1;
        unsigned int  bit61 : 1;
        unsigned int  bit62 : 1;
        unsigned int  bit63 : 1;
        unsigned int  bit64 : 1;
    };

    // Bit postion enum
    enum emBitPos
    {
        PosFF = 0xFFFFFFFFFFFFFFFF,
        Pos00 = 0x0000000000000000,

        Pos01 = 0x0000000000000001,
        Pos02 = 0x0000000000000002,
        Pos03 = 0x0000000000000004,
        Pos04 = 0x0000000000000008,
        Pos05 = 0x0000000000000010,
        Pos06 = 0x0000000000000020,
        Pos07 = 0x0000000000000040,
        Pos08 = 0x0000000000000080,

        Pos09 = 0x0000000000000100,
        Pos10 = 0x0000000000000200,
        Pos11 = 0x0000000000000400,
        Pos12 = 0x0000000000000800,
        Pos13 = 0x0000000000001000,
        Pos14 = 0x0000000000002000,
        Pos15 = 0x0000000000004000,
        Pos16 = 0x0000000000008000,

        Pos17 = 0x0000000000010000,
        Pos18 = 0x0000000000020000,
        Pos19 = 0x0000000000040000,
        Pos20 = 0x0000000000080000,
        Pos21 = 0x0000000000100000,
        Pos22 = 0x0000000000200000,
        Pos23 = 0x0000000000400000,
        Pos24 = 0x0000000000800000,

        Pos25 = 0x0000000001000000,
        Pos26 = 0x0000000002000000,
        Pos27 = 0x0000000004000000,
        Pos28 = 0x0000000008000000,
        Pos29 = 0x0000000010000000,
        Pos30 = 0x0000000020000000,
        Pos31 = 0x0000000040000000,
        Pos32 = 0x0000000080000000,

        Pos33 = 0x0000000100000000,
        Pos34 = 0x0000000200000000,
        Pos35 = 0x0000000400000000,
        Pos36 = 0x0000000800000000,
        Pos37 = 0x0000001000000000,
        Pos38 = 0x0000002000000000,
        Pos39 = 0x0000004000000000,
        Pos40 = 0x0000008000000000,

        Pos41 = 0x0000010000000000,
        Pos42 = 0x0000020000000000,
        Pos43 = 0x0000040000000000,
        Pos44 = 0x0000080000000000,
        Pos45 = 0x0000100000000000,
        Pos46 = 0x0000200000000000,
        Pos47 = 0x0000400000000000,
        Pos48 = 0x0000800000000000,

        Pos49 = 0x0001000000000000,
        Pos50 = 0x0002000000000000,
        Pos51 = 0x0004000000000000,
        Pos52 = 0x0008000000000000,
        Pos53 = 0x0010000000000000,
        Pos54 = 0x0020000000000000,
        Pos55 = 0x0040000000000000,
        Pos56 = 0x0080000000000000,

        Pos57 = 0x0100000000000000,
        Pos58 = 0x0200000000000000,
        Pos59 = 0x0400000000000000,
        Pos60 = 0x0800000000000000,
        Pos61 = 0x1000000000000000,
        Pos62 = 0x2000000000000000,
        Pos63 = 0x4000000000000000,
        Pos64 = 0x8000000000000000
    };
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBit64(           long long&  lVal ):mBit(*((unsigned long long*) &lVal)){};
    inline          CBit64( unsigned  long long& ulVal ):mBit(*((unsigned long long*)&ulVal)){};
    // Destruct define
    inline virtual ~CBit64(){};

private:
    // Copy construct define
    inline CBit64             ( const CBit64 &obj ):mBit(obj.mBit){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CBit64& operator = ( const             CBit64  &obj ){ mBit = obj.mBit; return *this;};
    // Assignment operation
    inline CBit64& operator = ( const unsigned long long ulVal ){ mBit =    ulVal; return *this;};
    // Assignment operation
    inline CBit64& operator = ( const          long long  lVal ){ mBit =     lVal; return *this;};

    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned long long operator & (const CBit64               &obj) { unsigned long long lulVal = mBit & obj.mBit; return lulVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned long long operator & (const unsigned long long  ulVal) { unsigned long long lulVal = mBit & ulVal;    return lulVal; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline long long          operator & (const long long            lVal) {          long long  llVal = mBit & lVal;     return  llVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned long long operator | (const CBit64               &obj) { unsigned long long lulVal = mBit | obj.mBit; return lulVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned long long operator | (const unsigned long long  ulVal) { unsigned long long lulVal = mBit | ulVal;    return lulVal; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline long long          operator | (const long long            lVal) {          long long  llVal = mBit | lVal;     return  llVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned long long operator ^ (const CBit64               &obj) { unsigned long long lulVal = mBit ^ obj.mBit; return lulVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned long long operator ^ (const unsigned long long  ulVal) { unsigned long long lulVal = mBit ^ ulVal;    return lulVal; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline long long          operator ^ (const long long            lVal) {          long long  llVal = mBit ^ lVal;     return  llVal; };

    // Bit operation (~) [~00000011 = 11111100]
    inline unsigned long long operator ~ ()                            { unsigned long long lulVal = ~mBit; return lulVal; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned long long&      mBit;
// }}} ! Members

// Methods   : {{{
public:
    // Return bit size
    inline size_t  size () const { return sizeof(mBit); };
    // Reset bit value to zero
    inline void    reset()       { mBit = 0;            };

    // Return          long long value
    inline long long           to_longlong  () { return           (long long)mBit; };
    // Return unsigned long long value
    inline unsigned long long  to_ulonglong () { return  (unsigned long long)mBit; };

    // Set bit value
    inline void Set(const long long            lVal) { mBit = mBit |  lVal; };
    // Set bit value
    inline void Set(const unsigned long long  ulVal) { mBit = mBit | ulVal; };
    // Set bit value
    inline void Set(const emBitPos            emPos) { mBit = mBit | emPos; };

    // Set bit 01 value
    inline void Set01() { ((stBit64*)&mBit)->bit01 = 1; };
    // Set bit 02 value
    inline void Set02() { ((stBit64*)&mBit)->bit02 = 1; };
    // Set bit 03 value
    inline void Set03() { ((stBit64*)&mBit)->bit03 = 1; };
    // Set bit 04 value
    inline void Set04() { ((stBit64*)&mBit)->bit04 = 1; };
    // Set bit 05 value
    inline void Set05() { ((stBit64*)&mBit)->bit05 = 1; };
    // Set bit 06 value
    inline void Set06() { ((stBit64*)&mBit)->bit06 = 1; };
    // Set bit 07 value
    inline void Set07() { ((stBit64*)&mBit)->bit07 = 1; };
    // Set bit 08 value
    inline void Set08() { ((stBit64*)&mBit)->bit08 = 1; };

    // Set bit 09 value
    inline void Set09() { ((stBit64*)&mBit)->bit09 = 1; };
    // Set bit 10 value
    inline void Set10() { ((stBit64*)&mBit)->bit10 = 1; };
    // Set bit 11 value
    inline void Set11() { ((stBit64*)&mBit)->bit11 = 1; };
    // Set bit 12 value
    inline void Set12() { ((stBit64*)&mBit)->bit12 = 1; };
    // Set bit 13 value
    inline void Set13() { ((stBit64*)&mBit)->bit13 = 1; };
    // Set bit 14 value
    inline void Set14() { ((stBit64*)&mBit)->bit14 = 1; };
    // Set bit 15 value
    inline void Set15() { ((stBit64*)&mBit)->bit15 = 1; };
    // Set bit 16 value
    inline void Set16() { ((stBit64*)&mBit)->bit16 = 1; };

    // Set bit 17 value
    inline void Set17() { ((stBit64*)&mBit)->bit17 = 1; };
    // Set bit 18 value
    inline void Set18() { ((stBit64*)&mBit)->bit18 = 1; };
    // Set bit 19 value
    inline void Set19() { ((stBit64*)&mBit)->bit19 = 1; };
    // Set bit 20 value
    inline void Set20() { ((stBit64*)&mBit)->bit20 = 1; };
    // Set bit 21 value
    inline void Set21() { ((stBit64*)&mBit)->bit21 = 1; };
    // Set bit 22 value
    inline void Set22() { ((stBit64*)&mBit)->bit22 = 1; };
    // Set bit 23 value
    inline void Set23() { ((stBit64*)&mBit)->bit23 = 1; };
    // Set bit 24 value
    inline void Set24() { ((stBit64*)&mBit)->bit24 = 1; };

    // Set bit 25 value
    inline void Set25() { ((stBit64*)&mBit)->bit25 = 1; };
    // Set bit 26 value
    inline void Set26() { ((stBit64*)&mBit)->bit26 = 1; };
    // Set bit 27 value
    inline void Set27() { ((stBit64*)&mBit)->bit27 = 1; };
    // Set bit 28 value
    inline void Set28() { ((stBit64*)&mBit)->bit28 = 1; };
    // Set bit 29 value
    inline void Set29() { ((stBit64*)&mBit)->bit29 = 1; };
    // Set bit 30 value
    inline void Set30() { ((stBit64*)&mBit)->bit30 = 1; };
    // Set bit 31 value
    inline void Set31() { ((stBit64*)&mBit)->bit31 = 1; };
    // Set bit 32 value
    inline void Set32() { ((stBit64*)&mBit)->bit32 = 1; };

    // Set bit 33 value
    inline void Set33() { ((stBit64*)&mBit)->bit33 = 1; };
    // Set bit 34 value
    inline void Set34() { ((stBit64*)&mBit)->bit34 = 1; };
    // Set bit 35 value
    inline void Set35() { ((stBit64*)&mBit)->bit35 = 1; };
    // Set bit 36 value
    inline void Set36() { ((stBit64*)&mBit)->bit36 = 1; };
    // Set bit 37 value
    inline void Set37() { ((stBit64*)&mBit)->bit37 = 1; };
    // Set bit 38 value
    inline void Set38() { ((stBit64*)&mBit)->bit38 = 1; };
    // Set bit 39 value
    inline void Set39() { ((stBit64*)&mBit)->bit39 = 1; };
    // Set bit 40 value
    inline void Set40() { ((stBit64*)&mBit)->bit40 = 1; };

    // Set bit 41 value
    inline void Set41() { ((stBit64*)&mBit)->bit41 = 1; };
    // Set bit 42 value
    inline void Set42() { ((stBit64*)&mBit)->bit42 = 1; };
    // Set bit 43 value
    inline void Set43() { ((stBit64*)&mBit)->bit43 = 1; };
    // Set bit 44 value
    inline void Set44() { ((stBit64*)&mBit)->bit44 = 1; };
    // Set bit 45 value
    inline void Set45() { ((stBit64*)&mBit)->bit45 = 1; };
    // Set bit 46 value
    inline void Set46() { ((stBit64*)&mBit)->bit46 = 1; };
    // Set bit 47 value
    inline void Set47() { ((stBit64*)&mBit)->bit47 = 1; };
    // Set bit 48 value
    inline void Set48() { ((stBit64*)&mBit)->bit48 = 1; };

    // Set bit 49 value
    inline void Set49() { ((stBit64*)&mBit)->bit49 = 1; };
    // Set bit 50 value
    inline void Set50() { ((stBit64*)&mBit)->bit50 = 1; };
    // Set bit 51 value
    inline void Set51() { ((stBit64*)&mBit)->bit51 = 1; };
    // Set bit 52 value
    inline void Set52() { ((stBit64*)&mBit)->bit52 = 1; };
    // Set bit 53 value
    inline void Set53() { ((stBit64*)&mBit)->bit53 = 1; };
    // Set bit 54 value
    inline void Set54() { ((stBit64*)&mBit)->bit54 = 1; };
    // Set bit 55 value
    inline void Set55() { ((stBit64*)&mBit)->bit55 = 1; };
    // Set bit 56 value
    inline void Set56() { ((stBit64*)&mBit)->bit56 = 1; };

    // Set bit 57 value
    inline void Set57() { ((stBit64*)&mBit)->bit57 = 1; };
    // Set bit 58 value
    inline void Set58() { ((stBit64*)&mBit)->bit58 = 1; };
    // Set bit 59 value
    inline void Set59() { ((stBit64*)&mBit)->bit59 = 1; };
    // Set bit 60 value
    inline void Set60() { ((stBit64*)&mBit)->bit60 = 1; };
    // Set bit 61 value
    inline void Set61() { ((stBit64*)&mBit)->bit61 = 1; };
    // Set bit 62 value
    inline void Set62() { ((stBit64*)&mBit)->bit62 = 1; };
    // Set bit 63 value
    inline void Set63() { ((stBit64*)&mBit)->bit63 = 1; };
    // Set bit 64 value
    inline void Set64() { ((stBit64*)&mBit)->bit64 = 1; };

    // UnSet bit value
    inline void UnSet(const long long            lVal) { mBit = mBit ^  lVal; };
    // UnSet bit value
    inline void UnSet(const unsigned long long  ulVal) { mBit = mBit ^ ulVal; };
    // UnSet bit value
    inline void UnSet(const emBitPos        emPos) { mBit = mBit ^ emPos; };

    // UnSet bit 01 value
    inline void UnSet01() { ((stBit64*)&mBit)->bit01 = 0; };
    // UnSet bit 02 value
    inline void UnSet02() { ((stBit64*)&mBit)->bit02 = 0; };
    // UnSet bit 03 value
    inline void UnSet03() { ((stBit64*)&mBit)->bit03 = 0; };
    // UnSet bit 04 value
    inline void UnSet04() { ((stBit64*)&mBit)->bit04 = 0; };
    // UnSet bit 05 value
    inline void UnSet05() { ((stBit64*)&mBit)->bit05 = 0; };
    // UnSet bit 06 value
    inline void UnSet06() { ((stBit64*)&mBit)->bit06 = 0; };
    // UnSet bit 07 value
    inline void UnSet07() { ((stBit64*)&mBit)->bit07 = 0; };
    // UnSet bit 08 value
    inline void UnSet08() { ((stBit64*)&mBit)->bit08 = 0; };

    // UnSet bit 09 value
    inline void UnSet09() { ((stBit64*)&mBit)->bit09 = 0; };
    // UnSet bit 10 value
    inline void UnSet10() { ((stBit64*)&mBit)->bit10 = 0; };
    // UnSet bit 11 value
    inline void UnSet11() { ((stBit64*)&mBit)->bit11 = 0; };
    // UnSet bit 12 value
    inline void UnSet12() { ((stBit64*)&mBit)->bit12 = 0; };
    // UnSet bit 13 value
    inline void UnSet13() { ((stBit64*)&mBit)->bit13 = 0; };
    // UnSet bit 14 value
    inline void UnSet14() { ((stBit64*)&mBit)->bit14 = 0; };
    // UnSet bit 15 value
    inline void UnSet15() { ((stBit64*)&mBit)->bit15 = 0; };
    // UnSet bit 16 value
    inline void UnSet16() { ((stBit64*)&mBit)->bit16 = 0; };

    // UnSet bit 17 value
    inline void UnSet17() { ((stBit64*)&mBit)->bit17 = 0; };
    // UnSet bit 18 value
    inline void UnSet18() { ((stBit64*)&mBit)->bit18 = 0; };
    // UnSet bit 19 value
    inline void UnSet19() { ((stBit64*)&mBit)->bit19 = 0; };
    // UnSet bit 20 value
    inline void UnSet20() { ((stBit64*)&mBit)->bit20 = 0; };
    // UnSet bit 21 value
    inline void UnSet21() { ((stBit64*)&mBit)->bit21 = 0; };
    // UnSet bit 22 value
    inline void UnSet22() { ((stBit64*)&mBit)->bit22 = 0; };
    // UnSet bit 23 value
    inline void UnSet23() { ((stBit64*)&mBit)->bit23 = 0; };
    // UnSet bit 24 value
    inline void UnSet24() { ((stBit64*)&mBit)->bit24 = 0; };

    // UnSet bit 25 value
    inline void UnSet25() { ((stBit64*)&mBit)->bit25 = 0; };
    // UnSet bit 26 value
    inline void UnSet26() { ((stBit64*)&mBit)->bit26 = 0; };
    // UnSet bit 27 value
    inline void UnSet27() { ((stBit64*)&mBit)->bit27 = 0; };
    // UnSet bit 28 value
    inline void UnSet28() { ((stBit64*)&mBit)->bit28 = 0; };
    // UnSet bit 29 value
    inline void UnSet29() { ((stBit64*)&mBit)->bit29 = 0; };
    // UnSet bit 30 value
    inline void UnSet30() { ((stBit64*)&mBit)->bit30 = 0; };
    // UnSet bit 31 value
    inline void UnSet31() { ((stBit64*)&mBit)->bit31 = 0; };
    // UnSet bit 32 value
    inline void UnSet32() { ((stBit64*)&mBit)->bit32 = 0; };

    // UnSet bit 33 value
    inline void UnSet33() { ((stBit64*)&mBit)->bit33 = 0; };
    // UnSet bit 34 value
    inline void UnSet34() { ((stBit64*)&mBit)->bit34 = 0; };
    // UnSet bit 35 value
    inline void UnSet35() { ((stBit64*)&mBit)->bit35 = 0; };
    // UnSet bit 36 value
    inline void UnSet36() { ((stBit64*)&mBit)->bit36 = 0; };
    // UnSet bit 37 value
    inline void UnSet37() { ((stBit64*)&mBit)->bit37 = 0; };
    // UnSet bit 38 value
    inline void UnSet38() { ((stBit64*)&mBit)->bit38 = 0; };
    // UnSet bit 39 value
    inline void UnSet39() { ((stBit64*)&mBit)->bit39 = 0; };
    // UnSet bit 40 value
    inline void UnSet40() { ((stBit64*)&mBit)->bit40 = 0; };

    // UnSet bit 41 value
    inline void UnSet41() { ((stBit64*)&mBit)->bit41 = 0; };
    // UnSet bit 42 value
    inline void UnSet42() { ((stBit64*)&mBit)->bit42 = 0; };
    // UnSet bit 43 value
    inline void UnSet43() { ((stBit64*)&mBit)->bit43 = 0; };
    // UnSet bit 44 value
    inline void UnSet44() { ((stBit64*)&mBit)->bit44 = 0; };
    // UnSet bit 45 value
    inline void UnSet45() { ((stBit64*)&mBit)->bit45 = 0; };
    // UnSet bit 46 value
    inline void UnSet46() { ((stBit64*)&mBit)->bit46 = 0; };
    // UnSet bit 47 value
    inline void UnSet47() { ((stBit64*)&mBit)->bit47 = 0; };
    // UnSet bit 48 value
    inline void UnSet48() { ((stBit64*)&mBit)->bit48 = 0; };

    // UnSet bit 49 value
    inline void UnSet49() { ((stBit64*)&mBit)->bit49 = 0; };
    // UnSet bit 50 value
    inline void UnSet50() { ((stBit64*)&mBit)->bit50 = 0; };
    // UnSet bit 51 value
    inline void UnSet51() { ((stBit64*)&mBit)->bit51 = 0; };
    // UnSet bit 52 value
    inline void UnSet52() { ((stBit64*)&mBit)->bit52 = 0; };
    // UnSet bit 53 value
    inline void UnSet53() { ((stBit64*)&mBit)->bit53 = 0; };
    // UnSet bit 54 value
    inline void UnSet54() { ((stBit64*)&mBit)->bit54 = 0; };
    // UnSet bit 55 value
    inline void UnSet55() { ((stBit64*)&mBit)->bit55 = 0; };
    // UnSet bit 56 value
    inline void UnSet56() { ((stBit64*)&mBit)->bit56 = 0; };

    // UnSet bit 57 value
    inline void UnSet57() { ((stBit64*)&mBit)->bit57 = 0; };
    // UnSet bit 58 value
    inline void UnSet58() { ((stBit64*)&mBit)->bit58 = 0; };
    // UnSet bit 59 value
    inline void UnSet59() { ((stBit64*)&mBit)->bit59 = 0; };
    // UnSet bit 60 value
    inline void UnSet60() { ((stBit64*)&mBit)->bit60 = 0; };
    // UnSet bit 61 value
    inline void UnSet61() { ((stBit64*)&mBit)->bit61 = 0; };
    // UnSet bit 62 value
    inline void UnSet62() { ((stBit64*)&mBit)->bit62 = 0; };
    // UnSet bit 63 value
    inline void UnSet63() { ((stBit64*)&mBit)->bit63 = 0; };
    // UnSet bit 64 value
    inline void UnSet64() { ((stBit64*)&mBit)->bit64 = 0; };

    // Check bit is set or not
    inline bool isSet(const long long            lVal) { return ((mBit) &  lVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const unsigned long long  ulVal) { return ((mBit) & ulVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const emBitPos        emPos) { return ((mBit) & emPos) ? true : false; };

    // Check bit 01 is set or not
    inline bool isSet01() { return (((stBit64*)&mBit)->bit01 & 1) ? true : false; };
    // Check bit 02 is set or not
    inline bool isSet02() { return (((stBit64*)&mBit)->bit02 & 1) ? true : false; };
    // Check bit 03 is set or not
    inline bool isSet03() { return (((stBit64*)&mBit)->bit03 & 1) ? true : false; };
    // Check bit 04 is set or not
    inline bool isSet04() { return (((stBit64*)&mBit)->bit04 & 1) ? true : false; };
    // Check bit 05 is set or not
    inline bool isSet05() { return (((stBit64*)&mBit)->bit05 & 1) ? true : false; };
    // Check bit 06 is set or not
    inline bool isSet06() { return (((stBit64*)&mBit)->bit06 & 1) ? true : false; };
    // Check bit 07 is set or not
    inline bool isSet07() { return (((stBit64*)&mBit)->bit07 & 1) ? true : false; };
    // Check bit 08 is set or not
    inline bool isSet08() { return (((stBit64*)&mBit)->bit08 & 1) ? true : false; };

    // Check bit 09 is set or not
    inline bool isSet09() { return (((stBit64*)&mBit)->bit09 & 1) ? true : false; };
    // Check bit 10 is set or not
    inline bool isSet10() { return (((stBit64*)&mBit)->bit10 & 1) ? true : false; };
    // Check bit 11 is set or not
    inline bool isSet11() { return (((stBit64*)&mBit)->bit11 & 1) ? true : false; };
    // Check bit 12 is set or not
    inline bool isSet12() { return (((stBit64*)&mBit)->bit12 & 1) ? true : false; };
    // Check bit 13 is set or not
    inline bool isSet13() { return (((stBit64*)&mBit)->bit13 & 1) ? true : false; };
    // Check bit 14 is set or not
    inline bool isSet14() { return (((stBit64*)&mBit)->bit14 & 1) ? true : false; };
    // Check bit 15 is set or not
    inline bool isSet15() { return (((stBit64*)&mBit)->bit15 & 1) ? true : false; };
    // Check bit 16 is set or not
    inline bool isSet16() { return (((stBit64*)&mBit)->bit16 & 1) ? true : false; };

    // Check bit 17 is set or not
    inline bool isSet17() { return (((stBit64*)&mBit)->bit17 & 1) ? true : false; };
    // Check bit 18 is set or not
    inline bool isSet18() { return (((stBit64*)&mBit)->bit18 & 1) ? true : false; };
    // Check bit 19 is set or not
    inline bool isSet19() { return (((stBit64*)&mBit)->bit19 & 1) ? true : false; };
    // Check bit 20 is set or not
    inline bool isSet20() { return (((stBit64*)&mBit)->bit20 & 1) ? true : false; };
    // Check bit 21 is set or not
    inline bool isSet21() { return (((stBit64*)&mBit)->bit21 & 1) ? true : false; };
    // Check bit 22 is set or not
    inline bool isSet22() { return (((stBit64*)&mBit)->bit22 & 1) ? true : false; };
    // Check bit 23 is set or not
    inline bool isSet23() { return (((stBit64*)&mBit)->bit23 & 1) ? true : false; };
    // Check bit 24 is set or not
    inline bool isSet24() { return (((stBit64*)&mBit)->bit24 & 1) ? true : false; };

    // Check bit 25 is set or not
    inline bool isSet25() { return (((stBit64*)&mBit)->bit25 & 1) ? true : false; };
    // Check bit 26 is set or not
    inline bool isSet26() { return (((stBit64*)&mBit)->bit26 & 1) ? true : false; };
    // Check bit 27 is set or not
    inline bool isSet27() { return (((stBit64*)&mBit)->bit27 & 1) ? true : false; };
    // Check bit 28 is set or not
    inline bool isSet28() { return (((stBit64*)&mBit)->bit28 & 1) ? true : false; };
    // Check bit 29 is set or not
    inline bool isSet29() { return (((stBit64*)&mBit)->bit29 & 1) ? true : false; };
    // Check bit 30 is set or not
    inline bool isSet30() { return (((stBit64*)&mBit)->bit30 & 1) ? true : false; };
    // Check bit 31 is set or not
    inline bool isSet31() { return (((stBit64*)&mBit)->bit31 & 1) ? true : false; };
    // Check bit 32 is set or not
    inline bool isSet32() { return (((stBit64*)&mBit)->bit32 & 1) ? true : false; };

    // Check bit 33 is set or not
    inline bool isSet33() { return (((stBit64*)&mBit)->bit33 & 1) ? true : false; };
    // Check bit 34 is set or not
    inline bool isSet34() { return (((stBit64*)&mBit)->bit34 & 1) ? true : false; };
    // Check bit 35 is set or not
    inline bool isSet35() { return (((stBit64*)&mBit)->bit35 & 1) ? true : false; };
    // Check bit 36 is set or not
    inline bool isSet36() { return (((stBit64*)&mBit)->bit36 & 1) ? true : false; };
    // Check bit 37 is set or not
    inline bool isSet37() { return (((stBit64*)&mBit)->bit37 & 1) ? true : false; };
    // Check bit 38 is set or not
    inline bool isSet38() { return (((stBit64*)&mBit)->bit38 & 1) ? true : false; };
    // Check bit 39 is set or not
    inline bool isSet39() { return (((stBit64*)&mBit)->bit39 & 1) ? true : false; };
    // Check bit 40 is set or not
    inline bool isSet40() { return (((stBit64*)&mBit)->bit40 & 1) ? true : false; };

    // Check bit 41 is set or not
    inline bool isSet41() { return (((stBit64*)&mBit)->bit41 & 1) ? true : false; };
    // Check bit 42 is set or not
    inline bool isSet42() { return (((stBit64*)&mBit)->bit42 & 1) ? true : false; };
    // Check bit 43 is set or not
    inline bool isSet43() { return (((stBit64*)&mBit)->bit43 & 1) ? true : false; };
    // Check bit 44 is set or not
    inline bool isSet44() { return (((stBit64*)&mBit)->bit44 & 1) ? true : false; };
    // Check bit 45 is set or not
    inline bool isSet45() { return (((stBit64*)&mBit)->bit45 & 1) ? true : false; };
    // Check bit 46 is set or not
    inline bool isSet46() { return (((stBit64*)&mBit)->bit46 & 1) ? true : false; };
    // Check bit 47 is set or not
    inline bool isSet47() { return (((stBit64*)&mBit)->bit47 & 1) ? true : false; };
    // Check bit 48 is set or not
    inline bool isSet48() { return (((stBit64*)&mBit)->bit48 & 1) ? true : false; };

    // Check bit 49 is set or not
    inline bool isSet49() { return (((stBit64*)&mBit)->bit49 & 1) ? true : false; };
    // Check bit 50 is set or not
    inline bool isSet50() { return (((stBit64*)&mBit)->bit50 & 1) ? true : false; };
    // Check bit 51 is set or not
    inline bool isSet51() { return (((stBit64*)&mBit)->bit51 & 1) ? true : false; };
    // Check bit 52 is set or not
    inline bool isSet52() { return (((stBit64*)&mBit)->bit52 & 1) ? true : false; };
    // Check bit 53 is set or not
    inline bool isSet53() { return (((stBit64*)&mBit)->bit53 & 1) ? true : false; };
    // Check bit 54 is set or not
    inline bool isSet54() { return (((stBit64*)&mBit)->bit54 & 1) ? true : false; };
    // Check bit 55 is set or not
    inline bool isSet55() { return (((stBit64*)&mBit)->bit55 & 1) ? true : false; };
    // Check bit 56 is set or not
    inline bool isSet56() { return (((stBit64*)&mBit)->bit56 & 1) ? true : false; };

    // Check bit 57 is set or not
    inline bool isSet57() { return (((stBit64*)&mBit)->bit57 & 1) ? true : false; };
    // Check bit 58 is set or not
    inline bool isSet58() { return (((stBit64*)&mBit)->bit58 & 1) ? true : false; };
    // Check bit 59 is set or not
    inline bool isSet59() { return (((stBit64*)&mBit)->bit59 & 1) ? true : false; };
    // Check bit 60 is set or not
    inline bool isSet60() { return (((stBit64*)&mBit)->bit60 & 1) ? true : false; };
    // Check bit 61 is set or not
    inline bool isSet61() { return (((stBit64*)&mBit)->bit61 & 1) ? true : false; };
    // Check bit 62 is set or not
    inline bool isSet62() { return (((stBit64*)&mBit)->bit62 & 1) ? true : false; };
    // Check bit 63 is set or not
    inline bool isSet63() { return (((stBit64*)&mBit)->bit63 & 1) ? true : false; };
    // Check bit 64 is set or not
    inline bool isSet64() { return (((stBit64*)&mBit)->bit64 & 1) ? true : false; };

// }}} ! Methods

// Friendefs : {{{
friend class CBitStr<CBit64>;
// }}} ! Friendefs

}; // }}} End of class CBit64

}; // }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CBIT64_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//
//  unsigned long long      lullValue = 0;
//  vm::CBit64              loBit(lullValue);
//  vm::CBitStr<vm::CBit64> loBitStr(loBit);
//
//  loBit.Set01();
//
//  vCout << vT("Bin : ") << loBitStr.toBin() << vEndl;
//
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
