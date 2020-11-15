
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_utst.h>

#include <iostream>
// ================================================================================================ //
// [ ut_cbit08_1 ] {{{
UT_FUNC_BEGIN( ut_cbit08_1 )

vTry

    // Add unit test coder here
    char  lcValue = 0;
    vCout << vT("Size of           char : ") << sizeof(char)            << vEndl;
    vm::CBit08 loBit08(lcValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit08);

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit char - zero") << vEndl;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;
    
    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit char - min char") << vEndl;
    lcValue = vMinsChar;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit char - max char") << vEndl;
    lcValue = vMaxsChar;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit char - -1") << vEndl;
    lcValue = -1;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_2 ] {{{
UT_FUNC_BEGIN( ut_cbit08_2 )

vTry

    // Add unit test coder here
    unsigned char  lucValue = 0;
    vCout << vT("Size of           char : ") << sizeof(char)            << vEndl;
    vm::CBit08 loBit08(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit08);

    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit unsigned char - zero") << vEndl;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;
    
    vCout << vT("------------------------------------------") << vEndl;
    vCout << vT("Bit unsigned char - max unsigned char") << vEndl;
    lucValue = vMaxuChar;
    vCout << vT("Bin     : ") << loBitStr.toBin()   << vEndl;
    vCout << vT("Oct     : ") << loBitStr.toOct()   << vEndl;
    vCout << vT("Dec     : ") << loBitStr.toDec()   << vEndl;
    vCout << vT("Hex     : ") << loBitStr.toHex()   << vEndl;
    vCout << vT("0xHex   : ") << loBitStr.to0xHex() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_3 ] {{{
UT_FUNC_BEGIN( ut_cbit08_3 )

vTry

    // Add unit test coder here
    unsigned char lcValue=0;
    vm::CBit08 loBit(lcValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

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
// }}} ! ut_cbit08_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_4 ] {{{
UT_FUNC_BEGIN( ut_cbit08_4 )

vTry

    // Add unit test coder here
    unsigned char           lucValue = 0;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

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
    lucValue = 255;

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
// }}} ! ut_cbit08_4
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cbit08_5 ] {{{
UT_FUNC_BEGIN( ut_cbit08_5 )

vTry

    // Add unit test coder here
    unsigned char           lucValue = 0;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    loBit.Set01();
    loBit.Set03();
    vCout << vT("Bit  : ") << loBitStr.toBin() << vEndl;

    unsigned char           lucValue1 = 0;
    vm::CBit08              loBit1(lucValue1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);

    lucValue1 = ~loBit;
    vCout << vT("~Bit : ") << loBitStr1.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_5
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_6 ] {{{
UT_FUNC_BEGIN( ut_cbit08_6 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned char           lucValue;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    unsigned char           lucValue1 = 0;
    vm::CBit08              loBit1(lucValue1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned char           lucValue2 = 0;
    vm::CBit08              loBit2(lucValue2);
    vm::CBitStr<vm::CBit08> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 & loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 & Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned char           lucValue3 = 0;
    vm::CBit08              loBit3(lucValue3);
    vm::CBitStr<vm::CBit08> loBitStr3(loBit3);

    loBit3.Set02();

    lucValue = loBit1 & loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 & Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_6
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_7 ] {{{
UT_FUNC_BEGIN( ut_cbit08_7 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned char           lucValue;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    unsigned char           lucValue1 = 0;
    vm::CBit08              loBit1(lucValue1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned char           lucValue2 = 0;
    vm::CBit08              loBit2(lucValue2);
    vm::CBitStr<vm::CBit08> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 | loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 | Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned char           lucValue3 = 0;
    vm::CBit08              loBit3(lucValue3);
    vm::CBitStr<vm::CBit08> loBitStr3(loBit3);

    loBit3.Set02();

    lucValue = loBit1 | loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 | Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_7
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_8 ] {{{
UT_FUNC_BEGIN( ut_cbit08_8 )

vTry

// ------------------------------------------------------------------------------------------------ //
    // Add unit test coder here
    unsigned char           lucValue;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    unsigned char           lucValue1 = 0;
    vm::CBit08              loBit1(lucValue1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set03();

// ------------------------------------------------------------------------------------------------ //

    unsigned char           lucValue2 = 0;
    vm::CBit08              loBit2(lucValue2);
    vm::CBitStr<vm::CBit08> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set02();

    loBit = loBit1 ^ loBit2;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit2 : ") << loBitStr2.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit2 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //
    vCout << vT("------------------------------------------") << vEndl;

    unsigned char           lucValue3 = 0;
    vm::CBit08              loBit3(lucValue3);
    vm::CBitStr<vm::CBit08> loBitStr3(loBit3);

    loBit3.Set02();

    lucValue = loBit1 ^ loBit3;
    vCout << vT("Bit1 : ") << loBitStr1.toBin() << vEndl;
    vCout << vT("Bit3 : ") << loBitStr3.toBin() << vEndl;
    vCout << vT("Bit1 ^ Bit3 : ") << loBitStr.toBin() << vEndl;

// ------------------------------------------------------------------------------------------------ //

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_8
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_9 ] {{{
UT_FUNC_BEGIN( ut_cbit08_9 )

vTry

    // Add unit test coder here
    unsigned char lcValue=0;
    vm::CBit08 loBit(lcValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.Set( vm::CBit08::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos01 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos02 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos03 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos04 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos05 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos06 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos07 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;
    loBit.unSet( vm::CBit08::emBitPos::Pos08 );
    vCout << vT("Bit : ") << loBitStr.toBin() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_9
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cbit08_10 ] {{{
UT_FUNC_BEGIN( ut_cbit08_10 )

vTry

    // Add unit test coder here
    unsigned char           lucValue = 0;
    vm::CBit08              loBit(lucValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;

    vCout << vT("------------------------------------------") << vEndl;
    lucValue = 255;

    vCout << vT("Bit           : ") << loBitStr.toBin() << vEndl;
    vCout << vT("Bit 01 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 02 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 03 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 04 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 05 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 06 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 07 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;
    vCout << vT("Bit 08 is set : ") << vStrBool( loBit.isSet(vm::CBit08::emBitPos::Pos01) ) << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_10
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_cbit                                                            == //
// ================================================================================================ //
// [ tst_frame_cbit ] {{{
UT_FRAME_BEGIN ( tst_frame_cbit08 )
UT_FRAME_REGIST( ut_cbit08_1 )
UT_FRAME_REGIST( ut_cbit08_2 )
UT_FRAME_REGIST( ut_cbit08_3 )
UT_FRAME_REGIST( ut_cbit08_4 )
UT_FRAME_REGIST( ut_cbit08_5 )
UT_FRAME_REGIST( ut_cbit08_6 )
UT_FRAME_REGIST( ut_cbit08_7 )
UT_FRAME_REGIST( ut_cbit08_8 )
UT_FRAME_REGIST( ut_cbit08_9 )
UT_FRAME_REGIST( ut_cbit08_10 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cbit ]
// ================================================================================================ //
