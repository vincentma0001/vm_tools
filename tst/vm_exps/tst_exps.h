
#include "vm_tools/vm_exps/CExp.hpp"
#include <vm_tools/vm_exps.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_exps_1 ] {{{
UT_FUNC_BEGIN( ut_exps_1 )

vTry

    // Add unit test coder here
    vTry
        throw vm::CExp(__FILE__, __LINE__)( vT("ut_exps_1()"), vT("This is a test exception message! %lld"), 1024 );
    vCatch( vm::CExp& ex )
        vLine( ex.Fmt( vT("[%T] %N (%M:%F:%L)") ) );
    vEnd

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_exps_1
// ================================================================================================ //

void FuncForStr( void )
{
    vTry
        throw vT("This is a test exception from FuncForStr!");
    vCatch_throw( vT("FuncForStr") )
    vEnd
}

void FuncForExp( void )
{
    vTry
        FuncForStr();
    vCatch_throw( vT("FuncForExp") )
    vEnd
}

// ================================================================================================ //
// [ ut_exps_2 ] {{{
UT_FUNC_BEGIN( ut_exps_2 )

vTry

    // Add unit test coder here
    vTry
        FuncForExp();
    vCatch( vm::CExp& ex )
        vm::CExp* lpExp = &ex;
        while( lpExp != nullptr )
        {
            vLine( lpExp->Fmt( vT("[%T] %N (%M:%F:%L)") ) );
            lpExp = lpExp->Next( lpExp );
        }
    vEnd

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_exps_2
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_exps                                                            == //
// ================================================================================================ //
// [ tst_frame_exps ] {{{
UT_FRAME_BEGIN ( tst_frame_exps )
UT_FRAME_REGIST( ut_exps_1 )
UT_FRAME_REGIST( ut_exps_2 )
UT_FRAME_ENDED
// }}} ![ tst_frame_exps ]
// ================================================================================================ //
