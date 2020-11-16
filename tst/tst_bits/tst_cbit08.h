
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_utst.h>

#include <iostream>
// ================================================================================================ //
// [ ut_cbit08_1 ] {{{
UT_FUNC_BEGIN( ut_cbit08_1 )

vTry

    // Add unit test coder here
    char  lcValue = 0;
    vm::CBit08 loBit08(lcValue);
    vm::CBitStr<vm::CBit08> loBitStr08(loBit08);
    vLine( "Size of value : %zu", loBit08.size()  );
    vLine( "*******************************************" );

    loBit08.Set01();
    vLine( vT("%s | IsSet01(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet01()) );
    loBit08.Set02();
    vLine( vT("%s | IsSet02(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet02()) );
    loBit08.Set03();
    vLine( vT("%s | IsSet03(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet03()) );
    loBit08.Set04();
    vLine( vT("%s | IsSet04(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet04()) );
    loBit08.Set05();
    vLine( vT("%s | IsSet05(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet05()) );
    loBit08.Set06();
    vLine( vT("%s | IsSet06(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet06()) );
    loBit08.Set07();
    vLine( vT("%s | IsSet07(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet07()) );
    loBit08.Set08();
    vLine( vT("%s | IsSet08(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet08()) );

    loBit08.UnSet01();
    vLine( vT("%s | IsSet01(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet01()) );
    loBit08.UnSet02();
    vLine( vT("%s | IsSet02(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet02()) );
    loBit08.UnSet03();
    vLine( vT("%s | IsSet03(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet03()) );
    loBit08.UnSet04();
    vLine( vT("%s | IsSet04(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet04()) );
    loBit08.UnSet05();
    vLine( vT("%s | IsSet05(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet05()) );
    loBit08.UnSet06();
    vLine( vT("%s | IsSet06(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet06()) );
    loBit08.UnSet07();
    vLine( vT("%s | IsSet07(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet07()) );
    loBit08.UnSet08();
    vLine( vT("%s | IsSet08(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet08()) );

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
    char  lcValue = 0;
    vm::CBit08 loBit08(lcValue);
    vm::CBitStr<vm::CBit08> loBitStr08(loBit08);
    vLine( "Size of value : %zu", loBit08.size()  );
    vLine( "*******************************************" );

    loBit08.Set( vm::CBit08::emBitPos::Pos01 );
    vLine( vT("%s | IsSet01(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet01()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos02 );
    vLine( vT("%s | IsSet02(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet02()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos03 );
    vLine( vT("%s | IsSet03(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet03()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos04 );
    vLine( vT("%s | IsSet04(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet04()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos05 );
    vLine( vT("%s | IsSet05(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet05()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos06 );
    vLine( vT("%s | IsSet06(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet06()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos07 );
    vLine( vT("%s | IsSet07(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet07()) );
    loBit08.Set( vm::CBit08::emBitPos::Pos08 );
    vLine( vT("%s | IsSet08(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet08()) );

    loBit08.UnSet( vm::CBit08::emBitPos::Pos01 );
    vLine( vT("%s | IsSet01(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet01()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos02 );
    vLine( vT("%s | IsSet02(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet02()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos03 );
    vLine( vT("%s | IsSet03(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet03()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos04 );
    vLine( vT("%s | IsSet04(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet04()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos05 );
    vLine( vT("%s | IsSet05(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet05()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos06 );
    vLine( vT("%s | IsSet06(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet06()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos07 );
    vLine( vT("%s | IsSet07(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet07()) );
    loBit08.UnSet( vm::CBit08::emBitPos::Pos08 );
    vLine( vT("%s | IsSet08(%s)"), loBitStr08.toBin(), vStrBool(loBit08.isSet08()) );

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
    unsigned char           lcVal1=0;
    vm::CBit08              loBit1(lcVal1);
    vm::CBitStr<vm::CBit08> loBitStr1(loBit1);
    loBit1.Set01();
    loBit1.Set02();

    unsigned char           lcVal2=0;
    vm::CBit08              loBit2(lcVal2);
    vm::CBitStr<vm::CBit08> loBitStr2(loBit2);
    loBit2.Set01();
    loBit2.Set03();

    unsigned char           lcVal3=0;
    vm::CBit08              loBit3(lcVal3);
    vm::CBitStr<vm::CBit08> loBitStr3(loBit3);

    lcVal3  = loBit1 & loBit2;
    vLine( vT(" %s & %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lcVal3 = loBit1 | loBit2;
    vLine( vT(" %s | %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lcVal3 = loBit1 ^ loBit2;
    vLine( vT(" %s ^ %s = %s "), loBitStr1.toBin(), loBitStr2.toBin(), loBitStr3.toBin() );

    lcVal3 = ~loBit1;
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
