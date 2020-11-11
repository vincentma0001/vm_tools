
#include "vm_tools/vm_error/CSysErr.hpp"
#include <vm_tools/vm_error.h>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_syserr_1 ] {{{
UT_FUNC_BEGIN( ut_syserr_1 )

vTry

    // Add unit test coder here
    tchar lsztBuf[1024] = {0x00};
    vm::CSysErrPtr  loSysErr1( 10, lsztBuf, sizeof(lsztBuf) );
    vm::v_output_line( vT("SysErr1 [%d:%s]"), loSysErr1.toCode(), loSysErr1.toString() );

    vm::CSysErr<_V_CSYSERR_BUF_SIZE_> loSysErr2( 20 );
    vm::v_output_line( vT("SysErr2 [%d:%s]"), loSysErr2.toCode(), loSysErr2.toString() );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_syserr_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_syserr_2 ] {{{
UT_FUNC_BEGIN( ut_syserr_2 )

vTry

    // Add unit test coder here
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_syserr_2
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
