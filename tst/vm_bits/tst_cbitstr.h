
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_cbitstr_1 ] {{{
UT_FUNC_BEGIN( ut_cbitstr_1 )

vTry

    // Add unit test coder here
    char            lcVal = 'A';
    vm::CBit08      loBit08( lcVal );
    vm::CBitStr<vm::CBit08> loBitStr08( loBit08 );

    vLine( vT("Bit " vStrFmtChar), lcVal  );
    vLine( "***********************************************" );
    vLine( vT("Bit bin   str : %s"), loBitStr08.toBin() );
    vLine( vT("Bit oct   str : %s"), loBitStr08.toOct() );
    vLine( vT("Bit dec   str : %s"), loBitStr08.toDec() );
    vLine( vT("Bit hex   str : %s"), loBitStr08.toHex() );
    vLine( vT("Bit 0xHex str ：%s"), loBitStr08.toHex( vT("0x" vStrFmtHeX) ) );
    vLine( vT("") );

    lcVal  = -1;
    vLine( vT("Bit " vStrFmtCharNum), lcVal  );
    vLine( "***********************************************" );
    vLine( vT("Bit bin   str : %s"), loBitStr08.toBin() );
    vLine( vT("Bit oct   str : %s"), loBitStr08.toOct() );
    vLine( vT("Bit dec   str : %s"), loBitStr08.toDec() );
    vLine( vT("Bit hex   str : %s"), loBitStr08.toHex() );
    vLine( vT("Bit 0xHex str ：%s"), loBitStr08.toHex( vT("0x" vStrFmtHeX) ) );
    vLine( vT("") );

    lcVal  = 0;
    vLine( vT("Bit " vStrFmtCharNum), lcVal  );
    vLine( "***********************************************" );
    vLine( vT("Bit bin   str : %s"), loBitStr08.toBin() );
    vLine( vT("Bit oct   str : %s"), loBitStr08.toOct() );
    vLine( vT("Bit dec   str : %s"), loBitStr08.toDec() );
    vLine( vT("Bit hex   str : %s"), loBitStr08.toHex() );
    vLine( vT("Bit 0xHex str ：%s"), loBitStr08.toHex( vT("0x" vStrFmtHeX) ) );
    vLine( vT("") );

    lcVal  = vMaxsChar;
    vLine( vT("Bit " vStrFmtCharNum), lcVal  );
    vLine( "***********************************************" );
    vLine( vT("Bit bin   str : %s"), loBitStr08.toBin() );
    vLine( vT("Bit oct   str : %s"), loBitStr08.toOct() );
    vLine( vT("Bit dec   str : %s"), loBitStr08.toDec() );
    vLine( vT("Bit hex   str : %s"), loBitStr08.toHex() );
    vLine( vT("Bit 0xHex str ：%s"), loBitStr08.toHex( vT("0x" vStrFmtHeX) ) );
    vLine( vT("") );

    lcVal  = vMinsChar;
    vLine( vT("Bit " vStrFmtCharNum), lcVal  );
    vLine( "***********************************************" );
    vLine( vT("Bit bin   str : %s"), loBitStr08.toBin() );
    vLine( vT("Bit oct   str : %s"), loBitStr08.toOct() );
    vLine( vT("Bit dec   str : %s"), loBitStr08.toDec() );
    vLine( vT("Bit hex   str : %s"), loBitStr08.toHex() );
    vLine( vT("Bit 0xHex str ：%s"), loBitStr08.toHex( vT("0x" vStrFmtHeX) ) );
    vLine( vT("") );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cbitstr_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_cbitstr                                                         == //
// ================================================================================================ //
// [ tst_frame_cbitstr ] {{{
UT_FRAME_BEGIN ( tst_frame_cbitstr )
UT_FRAME_REGIST( ut_cbitstr_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cbitstr ]
// ================================================================================================ //
