
#ifndef  __TST_ACTFRAME_H__
#define  __TST_ACTFRAME_H__

#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ------------------------------------------------------------------------------------------------ //

AC_FUNC_BEGIN( act_func_tst1, "test" )
    vLine( vT("this is a test!") );
AC_FUNC_ENDED;

// ------------------------------------------------------------------------------------------------ //

AC_FRAME_BEGIN( acTestFrame )
AC_FRAME_REGIST( act_func_tst1 )
AC_FRAME_ENDED

// ------------------------------------------------------------------------------------------------ //

#endif // ! __TST_ACTFRAME_H__
