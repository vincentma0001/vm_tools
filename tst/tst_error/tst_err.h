
#include <vm_cfgs.h>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_err_1 ] {{{
UT_FUNC_BEGIN( ut_err_1 )

vTry

    // Add unit test coder here
    long long lllErrCode = vMakeLLong( 10, 20 );
    long       llUsrCode = vHighLLong( lllErrCode );
    long       llSysCode =  vLowLLong( lllErrCode );

    vm::v_output_line( vT("Err(%lld) -> UseErr(%ld):SysErr(%ld) "), lllErrCode, llUsrCode, llSysCode );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_err_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_err                                                             == //
// ================================================================================================ //
// [ tst_frame_err ] {{{
UT_FRAME_BEGIN ( tst_frame_err )
UT_FRAME_REGIST( ut_err_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_err ]
// ================================================================================================ //
