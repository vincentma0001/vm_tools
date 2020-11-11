
#include "vm_tools/vm_error/CSysErrPtr.h"
#include <vm_tools/vm_error.h>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_syserr_1 ] {{{
UT_FUNC_BEGIN( ut_syserr_1 )

vTry

    // Add unit test coder here
    tchar lsztBuf[1024] = {0x00};
    vm::CSysErrPtr  loSysErr( 10, lsztBuf, sizeof(lsztBuf) );
    vm::v_output_line( vT("SysErr [%d:%s]"), loSysErr.toCode(), loSysErr.toString() );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_syserr_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_syserr                                                          == //
// ================================================================================================ //
// [ tst_frame_syserr ] {{{
UT_FRAME_BEGIN ( tst_frame_syserr )
UT_FRAME_REGIST( ut_syserr_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_syserr ]
// ================================================================================================ //
