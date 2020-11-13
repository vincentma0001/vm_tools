
#include <vm_tools/vm_string/CStrFmtPtr.h>
#include <vm_tools/vm_utst.h>
#include <vm_tools/vm_funcs.h>

// ================================================================================================ //
// [ ut_strfmt_1 ] {{{
UT_FUNC_BEGIN( ut_strfmt_1 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024] = {0x00};

    vm::CStrFmtPtr loStrFmt( lszBuf, sizeof(lszBuf) );
    loStrFmt( vT("This is a test!") );
    vLine( *loStrFmt );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strfmt_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strfmt_2 ] {{{
UT_FUNC_BEGIN( ut_strfmt_2 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024] = {0x00};
    vm::CStrFmtPtr lStrFmt( lszBuf, sizeof(lszBuf) );
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_str<32> (50).str(vT(")")), vT("string") );

    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_c<32>   (50).str(vT(")")), vT('A')      );

    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_cn<32>  (50).str(vT(")")), vT('A')      );

    lStrFmt.reset();
    short       lsVal = vMinsShort;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_s<32>   (50).str(vT(")")), lsVal        );

    lStrFmt.reset();
    unsigned short  lusVal = vMaxuShort;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_us<32>  (50).str(vT(")")), lusVal       );

    lStrFmt.reset();
    int liVal = vMinsInt;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_i<32>   (50).str(vT(")")), liVal        );

    lStrFmt.reset();
    unsigned int luiVal = vMaxuInt;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_ui<32>  (50).str(vT(")")), luiVal       );

    lStrFmt.reset();
    long llVal = vMinsLong;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_l<32>   (50).str(vT(")")), llVal        );

    lStrFmt.reset();
    unsigned long lulVal = vMaxuLong;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_ul<32>  (50).str(vT(")")), lulVal       );

    lStrFmt.reset();
    long long lllVal = vMinsLLong;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_ll<32>  (50).str(vT(")")), lllVal       );

    lStrFmt.reset();
    unsigned long long lullVal = vMaxuLong;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_ull<32> (50).str(vT(")")), lullVal       );

    lStrFmt.reset();
    size_t lsztVal = vMaxuLong;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_szt<32> (50).str(vT(")")), lsztVal       );

    lStrFmt.reset();
    float lfVal = vMaxFloat;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>   (50).str(vT(")")), lfVal         );

    lStrFmt.reset();
    double ldVal = vMaxDouble;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_d<32>   (50).str(vT(")")), ldVal         );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strfmt_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strfmt_3 ] {{{
UT_FUNC_BEGIN( ut_strfmt_3 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024] = {0x00};
    vm::CStrFmtPtr lStrFmt( lszBuf, sizeof(lszBuf) );

    lStrFmt.reset();
    float lfVal = 10.12345;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50).str(vT(")")),                 lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3).str(vT(")")),               lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,true).str(vT(")")),          lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,true,true).str(vT(")")),     lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,false,true).str(vT(")")),    lfVal );

    lStrFmt.reset();
    lfVal = -10.12345;
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50).str(vT(")")),                 lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3).str(vT(")")),               lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,true).str(vT(")")),          lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,true,true).str(vT(")")),     lfVal );
    lStrFmt.reset();
    vLine( *lStrFmt.str(vT("This is a test! (")).fmt_f<32>(50,3,false,true).str(vT(")")),    lfVal );



vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strfmt_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strfmt_4 ] {{{
UT_FUNC_BEGIN( ut_strfmt_4 )

vTry

    // Add unit test coder here
    tchar lcVal = vT('A');
    vLine( vT("Str : (") vStrFmtChar         vT(")"), lcVal );
    vLine( vT("Str : (") vStrFmtChar_l       vT(")"), lcVal );
    vLine( vT("Str : (") vStrFmtChar_d(10)   vT(")"), lcVal );
    vLine( vT("Str : (") vStrFmtChar_zd(10)  vT(")"), lcVal );
    vLine( vT("Str : (") vStrFmtChar_ld(10)  vT(")"), lcVal );
    vLine( vT("Str : (") vStrFmtChar_lzd(10) vT(")"), lcVal );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strfmt_4
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_strfmt                                                          == //
// ================================================================================================ //
// [ tst_frame_strfmt ] {{{
UT_FRAME_BEGIN ( tst_frame_strfmt )
UT_FRAME_REGIST( ut_strfmt_1 )
UT_FRAME_REGIST( ut_strfmt_2 )
UT_FRAME_REGIST( ut_strfmt_3 )
UT_FRAME_REGIST( ut_strfmt_4 )
UT_FRAME_ENDED
// }}} ![ tst_frame_strfmt ]
// ================================================================================================ //
