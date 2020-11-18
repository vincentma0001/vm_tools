
#ifndef  __TST_USRERR_H__
#define  __TST_USRERR_H__

#include "eTstRet.h"
#include <vm_tools/vm_utst.h>
#include <vm_tools/vm_funcs.h>

// ================================================================================================ //
// [ ut_usrerr_1 ] {{{
UT_FUNC_BEGIN( ut_usrerr_1 )

vTry

    // Add unit test coder here
    vm::eTstRet loTstErr(vm::emRet::emSucess);
    vLine( loTstErr.Fmt ( vT("[%s:%d] - This is a test! [%EC:%EM]"), vT("func"), 10 ) );

    vm::eTstRet loTstErr2(emTstRet::emErrRet1);
    vLine( loTstErr2.Fmt( vT("[%s:%d] - This is a test! [%EC:%EM]"), vT("func"), 20 ) );


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_usrerr_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_usrerr                                                          == //
// ================================================================================================ //
// [ tst_frame_usrerr ] {{{
UT_FRAME_BEGIN ( tst_frame_usrerr )
UT_FRAME_REGIST( ut_usrerr_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_usrerr ]
// ================================================================================================ //

#endif // ! __TST_USRERR_H__

