// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CBit08.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-30 08:49:00                                               == //
// ==   Modify Time          : 2020-11-16 09:12:09                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CBIT08_H__
#define  __CBIT08_H__


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
// ==  Class CBit08 : This class deal with Bit operation for 8bit(char type)                     == //
// ------------------------------------------------------------------------------------------------ //
class CBit08
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // Bit struct
    struct stBit08
    {
        unsigned int  bit01 : 1;
        unsigned int  bit02 : 1;
        unsigned int  bit03 : 1;
        unsigned int  bit04 : 1;
        unsigned int  bit05 : 1;
        unsigned int  bit06 : 1;
        unsigned int  bit07 : 1;
        unsigned int  bit08 : 1;
    };

    // Bit postion enum
    enum emBitPos
    {
        PosFF = 0xFF,
        Pos00 = 0x00,

        Pos01 = 0x01,
        Pos02 = 0x02,
        Pos03 = 0x04,
        Pos04 = 0x08,
        Pos05 = 0x10,
        Pos06 = 0x20,
        Pos07 = 0x40,
        Pos08 = 0x80
    };
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CBit08(           char&  cVal ):mBit(*((unsigned char*) &cVal)){};
    inline          CBit08( unsigned  char& ucVal ):mBit(*((unsigned char*)&ucVal)){};
    // Destruct define
    inline virtual ~CBit08(){};

private:
    // Copy construct define
    inline CBit08             ( const CBit08 &obj ):mBit(obj.mBit){};
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Operators : {{{
public:
    // Assignment operation
    inline CBit08& operator = ( const        CBit08    &obj ){ mBit = obj.mBit; return *this;};
    // Assignment operation
    inline CBit08& operator = ( const unsigned char ucValue ){ mBit =  ucValue; return *this;};
    // Assignment operation
    inline CBit08& operator = ( const          char  cValue ){ mBit =   cValue; return *this;};

    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned char operator & (const CBit08           &obj) { unsigned char lucValue = mBit & obj.mBit; return lucValue; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline unsigned char operator & (const unsigned char   ucVal) { unsigned char lucValue = mBit & ucVal;    return lucValue; };
    // Bit operation (&) [00000011 & 00000101 = 00000001]
    inline char          operator & (const char             cVal) {          char  lcValue = mBit & cVal;     return  lcValue; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned char operator | (const CBit08           &obj) { unsigned char lucValue = mBit | obj.mBit; return lucValue; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline unsigned char operator | (const unsigned char   ucVal) { unsigned char lucValue = mBit | ucVal;    return lucValue; };
    // Bit operation (|) [00000011 | 00000101 = 00000111]
    inline char          operator | (const char             cVal) {          char  lcValue = mBit | cVal;     return  lcValue; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned char operator ^ (const CBit08           &obj) { unsigned char lucValue = mBit ^ obj.mBit; return lucValue; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline unsigned char operator ^ (const unsigned char   ucVal) { unsigned char lucValue = mBit ^ ucVal;    return lucValue; };
    // Bit operation (^) [00000011 ^ 00000101 = 00000110]
    inline char          operator ^ (const char             cVal) {          char  lcValue = mBit ^ cVal;     return  lcValue; };

    // Bit operation (~) [~00000011 = 11111100]
    inline unsigned char operator ~ (                           ) { unsigned char lucValue = ~mBit;           return lucValue; };
// }}} ! Operators

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    unsigned char&   mBit;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Return bit size
    inline size_t  size () const { return sizeof(mBit); };
    // Reset bit value to zero
    inline void    reset()       { mBit = 0;            };

    // Return          char value
    inline char           to_char  () { return           (char)mBit; };
    // Return unsigned char value
    inline unsigned char  to_uchar () { return  (unsigned char)mBit; };

    // Set bit value
    inline void Set(const char            cVal) { mBit = mBit |  cVal; };
    // Set bit value
    inline void Set(const unsigned char  ucVal) { mBit = mBit | ucVal; };
    // Set bit value
    inline void Set(const emBitPos       emPos) { mBit = mBit | emPos; };

    // Set bit 01 value
    inline void Set01() { ((stBit08*)&mBit)->bit01 = 1; };
    // Set bit 02 value
    inline void Set02() { ((stBit08*)&mBit)->bit02 = 1; };
    // Set bit 03 value
    inline void Set03() { ((stBit08*)&mBit)->bit03 = 1; };
    // Set bit 04 value
    inline void Set04() { ((stBit08*)&mBit)->bit04 = 1; };
    // Set bit 05 value
    inline void Set05() { ((stBit08*)&mBit)->bit05 = 1; };
    // Set bit 06 value
    inline void Set06() { ((stBit08*)&mBit)->bit06 = 1; };
    // Set bit 07 value
    inline void Set07() { ((stBit08*)&mBit)->bit07 = 1; };
    // Set bit 08 value
    inline void Set08() { ((stBit08*)&mBit)->bit08 = 1; };

    // UnSet bit value
    inline void UnSet(const char            cVal) { mBit = mBit ^  cVal; };
    // UnSet bit value
    inline void UnSet(const unsigned char  ucVal) { mBit = mBit ^ ucVal; };
    // UnSet bit value
    inline void UnSet(const emBitPos       emPos) { mBit = mBit ^ emPos; };

    // UnSet bit 01 value
    inline void UnSet01() { ((stBit08*)&mBit)->bit01 = 0; };
    // UnSet bit 02 value
    inline void UnSet02() { ((stBit08*)&mBit)->bit02 = 0; };
    // UnSet bit 03 value
    inline void UnSet03() { ((stBit08*)&mBit)->bit03 = 0; };
    // UnSet bit 04 value
    inline void UnSet04() { ((stBit08*)&mBit)->bit04 = 0; };
    // UnSet bit 05 value
    inline void UnSet05() { ((stBit08*)&mBit)->bit05 = 0; };
    // UnSet bit 06 value
    inline void UnSet06() { ((stBit08*)&mBit)->bit06 = 0; };
    // UnSet bit 07 value
    inline void UnSet07() { ((stBit08*)&mBit)->bit07 = 0; };
    // UnSet bit 08 value
    inline void UnSet08() { ((stBit08*)&mBit)->bit08 = 0; };

    // Check bit is set or not
    inline bool isSet(const char            cVal) { return ((mBit) &  cVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const unsigned char  ucVal) { return ((mBit) & ucVal) ? true : false; };
    // Check bit is set or not
    inline bool isSet(const emBitPos       emPos) { return ((mBit) & emPos) ? true : false; };

    // Check bit 01 is set or not
    inline bool isSet01() { return (((stBit08*)&mBit)->bit01 & 1) ? true : false; };
    // Check bit 02 is set or not
    inline bool isSet02() { return (((stBit08*)&mBit)->bit02 & 1) ? true : false; };
    // Check bit 03 is set or not
    inline bool isSet03() { return (((stBit08*)&mBit)->bit03 & 1) ? true : false; };
    // Check bit 04 is set or not
    inline bool isSet04() { return (((stBit08*)&mBit)->bit04 & 1) ? true : false; };
    // Check bit 05 is set or not
    inline bool isSet05() { return (((stBit08*)&mBit)->bit05 & 1) ? true : false; };
    // Check bit 06 is set or not
    inline bool isSet06() { return (((stBit08*)&mBit)->bit06 & 1) ? true : false; };
    // Check bit 07 is set or not
    inline bool isSet07() { return (((stBit08*)&mBit)->bit07 & 1) ? true : false; };
    // Check bit 08 is set or not
    inline bool isSet08() { return (((stBit08*)&mBit)->bit08 & 1) ? true : false; };
// }}} ! Methods

// ------------------------------------------------------------------------------------------------ //
// Friendefs : {{{
friend class CBitStr<CBit08>;
// }}} ! Friendefs
};
// }}} ! [ class CBit08 ]
// ================================================================================================ /

}; 
// }}} End of namespace vm
// ================================================================================================ //

#endif // ! __CBIT08_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
//
//  unsigned char           lucValue = 0;
//  vm::CBit08              loBit(lucValue);
//  vm::CBitStr<vm::CBit08> loBitStr(loBit);
//
//  loBit.Set01();
//
//  vCout << vT("Bin : ") << loBitStr.toBin() << vEndl;
//
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
