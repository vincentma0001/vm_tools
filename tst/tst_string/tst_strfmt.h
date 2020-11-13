
#include <vm_tools/vm_string/CStrFmtPtr.h>
#include <vm_tools/vm_utst.h>
#include <vm_tools/vm_funcs.h>

// ================================================================================================ //
// [ ut_strfmt_1 ] {{{
UT_FUNC_BEGIN( ut_strfmt_1 )

vTry

    // Add unit test coder here
    tchar lsztBuf[1024] = {0x00};

    vm::CStrFmtPtr loStrFmt( lsztBuf, sizeof(lsztBuf) );
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
// ==  unit test frame tst_frame_strfmt                                                          == //
// ================================================================================================ //
// [ tst_frame_strfmt ] {{{
UT_FRAME_BEGIN ( tst_frame_strfmt )
UT_FRAME_REGIST( ut_strfmt_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_strfmt ]
// ================================================================================================ //
