
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_utst.h>

#include <iostream>
// ================================================================================================ //
// [ ut_cbit08_1 ] {{{
UT_FUNC_BEGIN( ut_cbit08_1 )

vTry

    // Add unit test coder here
    char                    lValue = 0;
    vm::CBit08              loBit(lValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);
    vLine( "Size of value : %zu", loBit.size()  );
    vLine( "*******************************************" );

    loBit.Set01();
    vLine( vT("%s | IsSet01(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet01()) );
    loBit.Set02();
    vLine( vT("%s | IsSet02(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet02()) );
    loBit.Set03();
    vLine( vT("%s | IsSet03(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet03()) );
    loBit.Set04();
    vLine( vT("%s | IsSet04(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet04()) );
    loBit.Set05();
    vLine( vT("%s | IsSet05(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet05()) );
    loBit.Set06();
    vLine( vT("%s | IsSet06(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet06()) );
    loBit.Set07();
    vLine( vT("%s | IsSet07(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet07()) );
    loBit.Set08();
    vLine( vT("%s | IsSet08(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet08()) );

    loBit.UnSet01();
    vLine( vT("%s | IsSet01(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet01()) );
    loBit.UnSet02();
    vLine( vT("%s | IsSet02(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet02()) );
    loBit.UnSet03();
    vLine( vT("%s | IsSet03(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet03()) );
    loBit.UnSet04();
    vLine( vT("%s | IsSet04(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet04()) );
    loBit.UnSet05();
    vLine( vT("%s | IsSet05(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet05()) );
    loBit.UnSet06();
    vLine( vT("%s | IsSet06(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet06()) );
    loBit.UnSet07();
    vLine( vT("%s | IsSet07(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet07()) );
    loBit.UnSet08();
    vLine( vT("%s | IsSet08(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet08()) );

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
    char                    lValue = 0;
    vm::CBit08              loBit(lValue);
    vm::CBitStr<vm::CBit08> loBitStr(loBit);
    vLine( "Size of value : %zu", loBit.size()  );
    vLine( "*******************************************" );

    loBit.Set( vm::CBit08::emBitPos::Pos01 );
    vLine( vT("%s | IsSet01(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet01()) );
    loBit.Set( vm::CBit08::emBitPos::Pos02 );
    vLine( vT("%s | IsSet02(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet02()) );
    loBit.Set( vm::CBit08::emBitPos::Pos03 );
    vLine( vT("%s | IsSet03(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet03()) );
    loBit.Set( vm::CBit08::emBitPos::Pos04 );
    vLine( vT("%s | IsSet04(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet04()) );
    loBit.Set( vm::CBit08::emBitPos::Pos05 );
    vLine( vT("%s | IsSet05(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet05()) );
    loBit.Set( vm::CBit08::emBitPos::Pos06 );
    vLine( vT("%s | IsSet06(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet06()) );
    loBit.Set( vm::CBit08::emBitPos::Pos07 );
    vLine( vT("%s | IsSet07(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet07()) );
    loBit.Set( vm::CBit08::emBitPos::Pos08 );
    vLine( vT("%s | IsSet08(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet08()) );

    loBit.UnSet( vm::CBit08::emBitPos::Pos01 );
    vLine( vT("%s | IsSet01(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet01()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos02 );
    vLine( vT("%s | IsSet02(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet02()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos03 );
    vLine( vT("%s | IsSet03(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet03()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos04 );
    vLine( vT("%s | IsSet04(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet04()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos05 );
    vLine( vT("%s | IsSet05(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet05()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos06 );
    vLine( vT("%s | IsSet06(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet06()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos07 );
    vLine( vT("%s | IsSet07(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet07()) );
    loBit.UnSet( vm::CBit08::emBitPos::Pos08 );
    vLine( vT("%s | IsSet08(%s)"), loBitStr.toBin(), vStrBool(loBit.isSet08()) );

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
    unsigned char           lVal1=0;
    vm::CBit08              loBit1(lVal1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set02();

    unsigned char           lVal2=0;
    vm::CBit08              loBit2(lVal2);
    vm::CBitStr<vm::CBit08> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set03();

    unsigned char           lVal3=0;
    vm::CBit08              loBit3(lVal3);
    vm::CBitStr<vm::CBit08> loBitStr3(loBit3);

    lVal3  = loBit1 & loBit2;
    vLine( vT(" %s & %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lVal3 = loBit1 | loBit2;
    vLine( vT(" %s | %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lVal3 = loBit1 ^ loBit2;
    vLine( vT(" %s ^ %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lVal3 = ~loBit1;
    vLine( vT(" %s = ~%s " ),    loBitStr3.toBin(), loBitStr1.toBin() );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbit08_3
// ================================================================================================ //


// ================================================================================================ //
// ==  unit test frame tst_frame_cbit                                                            == //
// ================================================================================================ //
// [ tst_frame_cbit ] {{{
UT_FRAME_BEGIN ( tst_frame_cbit08 )
UT_FRAME_REGIST( ut_cbit08_1 )
UT_FRAME_REGIST( ut_cbit08_2 )
UT_FRAME_REGIST( ut_cbit08_3 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cbit ]
// ================================================================================================ //
