
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_utst.h>

#include <iostream>
// ================================================================================================ //
// [ ut_cbit64_1 ] {{{
UT_FUNC_BEGIN( ut_cbit64_1 )

vTry

    // Add unit test coder here
    long long  lllValue = 0;
    vCout << vT("Size of           long long : ") << sizeof(long long) << vEndl;
    vm::CBit64 loBit(lllValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit long long - zero") << vEndl;
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
    vCout << vT("Bit long long - min long long") << vEndl;
    lllValue = vMinsLLong;
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
    vCout << vT("Bit long long - max long long") << vEndl;
    lllValue = vMaxsLLong;
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
    vCout << vT("Bit long long - -1") << vEndl;
    lllValue = -1;
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
// }}} ! ut_cbit64_1
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cbit64_2 ] {{{
UT_FUNC_BEGIN( ut_cbit64_2 )

vTry

    // Add unit test coder here
    vCout << vT("Size of  unsigned long long : ") << sizeof(unsigned long long) << vEndl;
    unsigned long long      lullValue = 0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);


    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit unsigned long long - zero") << vEndl;
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
    vCout << vT("Bit unsigned long long - max unsigned long long") << vEndl;
    lullValue = vMaxuLLong;
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
// }}} ! ut_cbit64_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_3 ] {{{
UT_FUNC_BEGIN( ut_cbit64_3 )

vTry

    // Add unit test coder here
    unsigned long long      lullValue=0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

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
// }}} ! ut_cbit64_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_4 ] {{{
UT_FUNC_BEGIN( ut_cbit64_4 )

vTry

    // Add unit test coder here
    unsigned long long      lullValue = 0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

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
    lullValue = vMaxuLLong;

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
// }}} ! ut_cbit64_4
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cbit64_5 ] {{{
UT_FUNC_BEGIN( ut_cbit64_5 )

vTry

    // Add unit test coder here
    unsigned long long      lullValue = 0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    loBit.Set01();
    loBit.Set03();
    vCout << vT("Bit  : ") << loBitStr.toBin() << vEndl;

    unsigned long long      lullValue1 = 0;
    vm::CBit64              loBit1(lullValue1);
    vm::CBitStr<vm::CBit64> loBitStr1(loBit1);

    lullValue1 = ~loBit;
    vCout << vT("~Bit : ") << loBitStr1.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_5
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_6 ] {{{
UT_FUNC_BEGIN( ut_cbit64_6 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned long long      lullValue;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    unsigned long long      lullValue1 = 0;
    vm::CBit64              loBit1(lullValue1);
    vm::CBitStr<vm::CBit64> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned long long      lullValue2 = 0;
    vm::CBit64              loBit2(lullValue2);
    vm::CBitStr<vm::CBit64> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 & loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 & Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned long long      lullValue3 = 0;
    vm::CBit64              loBit3(lullValue3);
    vm::CBitStr<vm::CBit64> loBitStr3(loBit3);

    loBit3.Set02();

    lullValue = loBit1 & loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 & Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_6
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_7 ] {{{
UT_FUNC_BEGIN( ut_cbit64_7 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned long long      lullValue;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    unsigned long long      lullValue1 = 0;
    vm::CBit64              loBit1(lullValue1);
    vm::CBitStr<vm::CBit64> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned long long      lullValue2 = 0;
    vm::CBit64              loBit2(lullValue2);
    vm::CBitStr<vm::CBit64> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 | loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 | Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned long long      lullValue3 = 0;
    vm::CBit64              loBit3(lullValue3);
    vm::CBitStr<vm::CBit64> loBitStr3(loBit3);

    loBit3.Set02();

    lullValue = loBit1 | loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 | Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_7
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_8 ] {{{
UT_FUNC_BEGIN( ut_cbit64_8 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned long long      lullValue;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    unsigned long long      lullValue1 = 0;
    vm::CBit64              loBit1(lullValue1);
    vm::CBitStr<vm::CBit64> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned long long      lullValue2 = 0;
    vm::CBit64              loBit2(lullValue2);
    vm::CBitStr<vm::CBit64> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 ^ loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned long long      lullValue3 = 0;
    vm::CBit64              loBit3(lullValue3);
    vm::CBitStr<vm::CBit64> loBitStr3(loBit3);

    loBit3.Set02();

    lullValue = loBit1 ^ loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_8
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_9 ] {{{
UT_FUNC_BEGIN( ut_cbit64_9 )

vTry

    // Add unit test coder here
    unsigned long long      lullValue=0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit64::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit64::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_9
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit64_10 ] {{{
UT_FUNC_BEGIN( ut_cbit64_10 )

vTry

    // Add unit test coder here
    unsigned long long      lullValue = 0;
    vm::CBit64              loBit(lullValue);
    vm::CBitStr<vm::CBit64> loBitStr(loBit);

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    lullValue = vMaxuLLong;

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit64::emBitPos::Pos01) ) << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit64_10
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_cbit                                                            == //
// ================================================================================================ //
// [ tst_frame_cbit ] {{{
UT_FRAME_BEGIN ( tst_frame_cbit64 )
UT_FRAME_REGIST( ut_cbit64_1 )
UT_FRAME_REGIST( ut_cbit64_2 )
UT_FRAME_REGIST( ut_cbit64_3 )
UT_FRAME_REGIST( ut_cbit64_4 )
UT_FRAME_REGIST( ut_cbit64_5 )
UT_FRAME_REGIST( ut_cbit64_6 )
UT_FRAME_REGIST( ut_cbit64_7 )
UT_FRAME_REGIST( ut_cbit64_8 )
UT_FRAME_REGIST( ut_cbit64_9 )
UT_FRAME_REGIST( ut_cbit64_10 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cbit ]
// ================================================================================================ //
