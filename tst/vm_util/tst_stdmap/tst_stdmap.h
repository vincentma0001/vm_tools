
#include "vm_tools/vm_util/CStdMapPtr.hpp"
#include <string>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_stdmap_1 ] {{{
UT_FUNC_BEGIN( ut_stdmap_1 )

vTry

    // Add unit test coder here
    vm::CStdMap<int, std::string>  lMap;
    lMap.Insert( 1, std::string("String 1") );
    lMap.Insert( 2, std::string("String 2") );
    lMap.Insert( 3, std::string("String 3") );

    vm::CStdMap<int, std::string>::tMapItor loIter = lMap.First();
    for( ;loIter!=lMap.Last();loIter++ )
    {
        vCout << vT("Key : ")    << vStdMapKey(loIter) 
              << vT(" Value : ") << vStdMapVal(loIter).c_str() 
              << vEndl;
    }

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_stdmap_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_stdmap_2 ] {{{
UT_FUNC_BEGIN( ut_stdmap_2 )

vTry

    // Add unit test coder here
    vm::CStdMap<int, std::string>  lMap;
    lMap.Insert( 1, std::string("String 1") );
    lMap.Insert( 2, std::string("String 2") );
    lMap.Insert( 3, std::string("String 3") );

    vm::CStdMap<int, std::string>::tMapItor loIter = lMap.Find(2);
    vCout << vT("Key : ") << 2 << vT(" Value : ") << vStdMapVal(loIter).c_str() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_stdmap_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_stdmap_3 ] {{{
UT_FUNC_BEGIN( ut_stdmap_3 )

vTry

    // Add unit test coder here
    vm::CStdMap<int, std::string>  lMap;
    lMap.Insert( 1, std::string("String 1") );
    lMap.Insert( 2, std::string("String 2") );
    lMap.Insert( 3, std::string("String 3") );

    vm::CStdMap<int, std::string>::tMapItor loIter = lMap.First();
    for( ;loIter!=lMap.Last();loIter++ )
    {
        vCout << vT("Key : ")    << vStdMapKey(loIter) 
              << vT(" Value : ") << vStdMapVal(loIter).c_str() 
              << vEndl;
    }
    
    lMap.Remove( 2 );
    vm::CStdMap<int, std::string>::tMapItor loIter2 = lMap.First();
    for( ;loIter2!=lMap.Last();loIter2++ )
    {
        vCout << vT("Key : ")    << vStdMapKey(loIter2) 
              << vT(" Value : ") << vStdMapVal(loIter2).c_str() 
              << vEndl;
    }

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_stdmap_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_stdmap_4 ] {{{
UT_FUNC_BEGIN( ut_stdmap_4 )

vTry

    // Add unit test coder here
    vm::CStdMap<std::string, std::string> lMap;
    lMap.Insert( std::string("#1"), std::string("String 1") );
    lMap.Insert( std::string("#2"), std::string("String 2") );
    lMap.Insert( std::string("#3"), std::string("String 3") );

    vm::CStdMap< std::string, std::string>::tMapItor loIter2 = lMap.First();
    for( ;loIter2!=lMap.Last();loIter2++ )
    {
        vCout << vT("Key : ")    << vStdMapKey(loIter2) 
              << vT(" Value : ") << vStdMapVal(loIter2).c_str() 
              << vEndl;
    }

    vLine("************************************");

    vm::CStdMap<std::string, std::string>::tMapItor loIter = lMap.Find("#2");
    vCout << vT("Key : ") << "#2" << vT(" Value : ") << vStdMapVal(loIter).c_str() << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_stdmap_4
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_stdmap                                                          == //
// ================================================================================================ //
// [ tst_frame_stdmap ] {{{
UT_FRAME_BEGIN ( tst_frame_stdmap )
UT_FRAME_REGIST( ut_stdmap_1 )
UT_FRAME_REGIST( ut_stdmap_2 )
UT_FRAME_REGIST( ut_stdmap_3 )
UT_FRAME_REGIST( ut_stdmap_4 )
UT_FRAME_ENDED
// }}} ![ tst_frame_stdmap ]
// ================================================================================================ //
