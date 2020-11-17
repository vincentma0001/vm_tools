
#include "TstRet.h"
#include <vm_tools/vm_error.h>
#include <vm_tools/vm_funcs.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_err_1 ] {{{
UT_FUNC_BEGIN( ut_err_1 )

vTry

    // Add unit test coder here
    long long lllErrCode = vMakeLLong( vm::emTstRet::emErrRet1, errno );
    long       llUsrCode =  vLowLLong( lllErrCode );
    long       llSysCode = vHighLLong( lllErrCode );
    vLine( vT("Err(%lld) -> UseErr(%ld):SysErr(%ld) "), lllErrCode, llUsrCode, llSysCode );

    vm::CErr<vm::eSysErr, vm::eTstRet,_V_CERR_BUF_SIZE_> loErr(lllErrCode);
    vLine( loErr.Fmt() );

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
