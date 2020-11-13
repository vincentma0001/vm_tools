
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
    vLine( *vm::CStrFmtPtr(lszBuf, sizeof(lszBuf)).str(vT("This is a test! (")).fmt_str<32>(20).str(vT(")")), vT("string") );

    vMemZero( lszBuf );
    vLine( *vm::CStrFmtPtr(lszBuf, sizeof(lszBuf)).str(vT("This is a test! (")).fmt_c<32>  (20).str(vT(")")), vT('A') );

    vMemZero( lszBuf );
    vLine( *vm::CStrFmtPtr(lszBuf, sizeof(lszBuf)).str(vT("This is a test! (")).fmt_cn<32> (20).str(vT(")")), vT('A') );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strfmt_2
// ================================================================================================ //
// ================================================================================================ //
// ==  unit test frame tst_frame_strfmt                                                          == //
// ================================================================================================ //
// [ tst_frame_strfmt ] {{{
UT_FRAME_BEGIN ( tst_frame_strfmt )
UT_FRAME_REGIST( ut_strfmt_1 )
UT_FRAME_REGIST( ut_strfmt_2 )
UT_FRAME_ENDED
// }}} ![ tst_frame_strfmt ]
// ================================================================================================ //
