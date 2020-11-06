
#include <string>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_stdmap_1 ] {{{
UT_FUNC_BEGIN( ut_stdmap_1 )

vTry

    // Add unit test coder here
    vm::CStdMap<int, std::string>  lMap;
    lMap.AddData( 1, std::string("String 1") );
    lMap.AddData( 2, std::string("String 2") );
    lMap.AddData( 3, std::string("String 3") );

    vm::CStdMap<int, std::string>::tMapItor loIter = lMap.GetFirst();
    for( ;loIter!=lMap.GetLast();loIter++ )
    {
        vCout << vStdMapValue(loIter).c_str() << vEndl;
    }

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_stdmap_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_stdmap                                                          == //
// ================================================================================================ //
// [ tst_frame_stdmap ] {{{
UT_FRAME_BEGIN ( tst_frame_stdmap )
UT_FRAME_REGIST( ut_stdmap_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_stdmap ]
// ================================================================================================ //
