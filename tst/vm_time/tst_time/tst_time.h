
#include "vm_tools/vm_time/CTimePtr.h"
#include <vm_tools/vm_time.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_time_1 ] {{{
UT_FUNC_BEGIN( ut_time_1 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024]    = {0x00};
    tTimeb  lTimeb;

    vm::CTimePtr loTime( lTimeb, lszBuf, sizeof(lszBuf) );
    loTime.Now();
    vLine( vT("%s.%03d"), loTime.toTimeStr(vT("%y-%m-%d %H:%M:%S")), loTime.msec() );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_time_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_time                                                            == //
// ================================================================================================ //
// [ tst_frame_time ] {{{
UT_FRAME_BEGIN ( tst_frame_time )
UT_FRAME_REGIST( ut_time_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_time ]
// ================================================================================================ //
