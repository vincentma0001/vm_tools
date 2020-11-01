
#include <vm_tools/vm_cbit.h>
#include <vm_tools/vm_utst.h>

#include <iostream>
// ================================================================================================ //
// [ ut_cbit16_1 ] {{{
UT_FUNC_BEGIN( ut_cbit16_1 )

vTry

    // Add unit test coder here
    short  lsValue = 0;
    vCout << vT("Size of           short : ") << sizeof(short)            << vEndl;
    vm::CBit16 loBit(lsValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit short - zero") << vEndl;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;
    
    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit short - min short") << vEndl;
    lsValue = vMinsShort;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit short - max short") << vEndl;
    lsValue = vMaxsShort;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit short - -1") << vEndl;
    lsValue = -1;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_1
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cbit16_2 ] {{{
UT_FUNC_BEGIN( ut_cbit16_2 )

vTry

    // Add unit test coder here
    unsigned short  lusValue = 0;
    vCout << vT("Size of           short : ") << sizeof(short)            << vEndl;
    vm::CBit16 loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit unsigned short - zero") << vEndl;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;
    
    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit unsigned short - max unsigned short") << vEndl;
    lusValue = vMaxuShort;
    vCout << vT("Bin     : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Oct04   : ") << loBitStr.toOct04() << vEndl;
    vCout << vT("Oct08   : ") << loBitStr.toOct08() << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Dec04   : ") << loBitStr.toDec04() << vEndl;
    vCout << vT("Dec08   : ") << loBitStr.toDec08() << vEndl;
    vCout << vT("Hex02   : ") << loBitStr.toHex02() << vEndl;
    vCout << vT("Hex04   : ") << loBitStr.toHex04() << vEndl;
    vCout << vT("Hex08   : ") << loBitStr.toHex08() << vEndl;
    vCout << vT("HeX02   : ") << loBitStr.toHeX02() << vEndl;
    vCout << vT("HeX04   : ") << loBitStr.toHeX04() << vEndl;
    vCout << vT("HeX08   : ") << loBitStr.toHeX08() << vEndl;
    vCout << vT("0xHex02 : ") << loBitStr.to0xHex02() << vEndl;
    vCout << vT("0xHex04 : ") << loBitStr.to0xHex04() << vEndl;
    vCout << vT("0xHex08 : ") << loBitStr.to0xHex08() << vEndl;
    vCout << vT("0xHeX02 : ") << loBitStr.to0xHeX02() << vEndl;
    vCout << vT("0xHeX04 : ") << loBitStr.to0xHeX04() << vEndl;
    vCout << vT("0xHeX08 : ") << loBitStr.to0xHeX08() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_3 ] {{{
UT_FUNC_BEGIN( ut_cbit16_3 )

vTry

    // Add unit test coder here
    unsigned short lsValue=0;
    vm::CBit16 loBit(lsValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set01();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set02();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set03();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set04();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set05();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set06();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set07();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set08();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet01();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet02();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet03();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet04();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet05();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet06();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet07();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet08();
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_4 ] {{{
UT_FUNC_BEGIN( ut_cbit16_4 )

vTry

    // Add unit test coder here
    unsigned short          lusValue = 0;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet01() ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet02() ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet03() ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet04() ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet05() ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet06() ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet07() ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet08() ) << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    lusValue = vMaxuShort;

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet01() ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet02() ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet03() ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet04() ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet05() ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet06() ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet07() ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet08() ) << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_4
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cbit16_5 ] {{{
UT_FUNC_BEGIN( ut_cbit16_5 )

vTry

    // Add unit test coder here
    unsigned short          lusValue = 0;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    loBit.Set01();
    loBit.Set03();
    vCout << vT("Bit  : ") << loBitStr.toBin() << vEndl;

    unsigned short          lusValue1 = 0;
    vm::CBit16              loBit1(lusValue1);
    vm::CBitStr<vm::CBit16> loBitStr1(loBit1);

    lusValue1 = ~loBit;
    vCout << vT("~Bit : ") << loBitStr1.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_5
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_6 ] {{{
UT_FUNC_BEGIN( ut_cbit16_6 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned short          lusValue;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    unsigned short          lusValue1 = 0;
    vm::CBit16              loBit1(lusValue1);
    vm::CBitStr<vm::CBit16> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned short          lusValue2 = 0;
    vm::CBit16              loBit2(lusValue2);
    vm::CBitStr<vm::CBit16> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 & loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 & Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned short          lusValue3 = 0;
    vm::CBit16              loBit3(lusValue3);
    vm::CBitStr<vm::CBit16> loBitStr3(loBit3);

    loBit3.Set02();

    lusValue = loBit1 & loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 & Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_6
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_7 ] {{{
UT_FUNC_BEGIN( ut_cbit16_7 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned short          lusValue;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    unsigned short          lusValue1 = 0;
    vm::CBit16              loBit1(lusValue1);
    vm::CBitStr<vm::CBit16> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned short          lusValue2 = 0;
    vm::CBit16              loBit2(lusValue2);
    vm::CBitStr<vm::CBit16> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 | loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 | Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned short          lusValue3 = 0;
    vm::CBit16              loBit3(lusValue3);
    vm::CBitStr<vm::CBit16> loBitStr3(loBit3);

    loBit3.Set02();

    lusValue = loBit1 | loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 | Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_7
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_8 ] {{{
UT_FUNC_BEGIN( ut_cbit16_8 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned short          lusValue;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    unsigned short          lusValue1 = 0;
    vm::CBit16              loBit1(lusValue1);
    vm::CBitStr<vm::CBit16> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned short          lusValue2 = 0;
    vm::CBit16              loBit2(lusValue2);
    vm::CBitStr<vm::CBit16> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 ^ loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned short          lusValue3 = 0;
    vm::CBit16              loBit3(lusValue3);
    vm::CBitStr<vm::CBit16> loBitStr3(loBit3);

    loBit3.Set02();

    lusValue = loBit1 ^ loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_8
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_9 ] {{{
UT_FUNC_BEGIN( ut_cbit16_9 )

vTry

    // Add unit test coder here
    unsigned short lsValue=0;
    vm::CBit16 loBit(lsValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit16::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit16::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_9
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit16_10 ] {{{
UT_FUNC_BEGIN( ut_cbit16_10 )

vTry

    // Add unit test coder here
    unsigned short          lusValue = 0;
    vm::CBit16              loBit(lusValue);
    vm::CBitStr<vm::CBit16> loBitStr(loBit);

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    lusValue = vMaxuShort;

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit16::emBitPos::Pos01) ) << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit16_10
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_cbit                                                            == //
// ================================================================================================ //
// [ tst_frame_cbit ] {{{
UT_FRAME_BEGIN ( tst_frame_cbit16 )
UT_FRAME_REGIST( ut_cbit16_1 )
UT_FRAME_REGIST( ut_cbit16_2 )
UT_FRAME_REGIST( ut_cbit16_3 )
UT_FRAME_REGIST( ut_cbit16_4 )
UT_FRAME_REGIST( ut_cbit16_5 )
UT_FRAME_REGIST( ut_cbit16_6 )
UT_FRAME_REGIST( ut_cbit16_7 )
UT_FRAME_REGIST( ut_cbit16_8 )
UT_FRAME_REGIST( ut_cbit16_9 )
UT_FRAME_REGIST( ut_cbit16_10 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cbit ]
// ================================================================================================ //
