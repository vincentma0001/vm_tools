

#include <vm_tools/vm_datas.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_list_1 ] {{{
UT_FUNC_BEGIN( ut_list_1 )

vTry

    // Add unit test coder here
    int liVal1 = 10;
    int liVal2 = 20;
    int liVal3 = 30;
    int liVal4 = 40;
    int liVal5 = 50;

    vm::stListNote<int>* lpNote1 = vm::vl_init( &liVal1 );
    vm::stListNote<int>* lpNote2 = vm::vl_init( &liVal2 );
    vm::stListNote<int>* lpNote3 = vm::vl_init( &liVal3 );
    vm::stListNote<int>* lpNote4 = vm::vl_init( &liVal4 );
    vm::stListNote<int>* lpNote5 = vm::vl_init( &liVal5 );

    vm::stListNote<int>* lpNote = nullptr;
    lpNote = vm::vl_insert( lpNote, lpNote1 );
    lpNote = vm::vl_insert( lpNote, lpNote2 );
    lpNote = vm::vl_insert( lpNote, lpNote3 );
    lpNote = vm::vl_insert( lpNote, lpNote4 );
    lpNote = vm::vl_insert( lpNote, lpNote5 );

    lpNote = vm::vl_head( lpNote );
    while( lpNote != nullptr )
    {
        int* lpVal = vm::vl_data( lpNote );
        vPrintf( vT("Value : %d\n"), *lpVal );
        lpNote = vm::vl_next( lpNote );
    }

    vm::vl_clean( lpNote1 );


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_list_1
// ================================================================================================ //
// ================================================================================================ //
// [ ut_list_2 ] {{{
UT_FUNC_BEGIN( ut_list_2 )

vTry

    // Add unit test coder here
    vm::stListNote<int>* lpNote1 = vm::vl_init<int>(  );
    vm::vl_set( lpNote1, 10 );
    vm::stListNote<int>* lpNote2 = vm::vl_init<int>(  );
    vm::vl_set( lpNote2, 20 );
    vm::stListNote<int>* lpNote3 = vm::vl_init<int>(  );
    vm::vl_set( lpNote3, 30 );
    vm::stListNote<int>* lpNote4 = vm::vl_init<int>(  );
    vm::vl_set( lpNote4, 40 );
    vm::stListNote<int>* lpNote5 = vm::vl_init<int>(  );
    vm::vl_set( lpNote5, 50 );

    vm::stListNote<int>* lpNote = nullptr;
    lpNote = vm::vl_insert( lpNote, lpNote1 );
    lpNote = vm::vl_insert( lpNote, lpNote2 );
    lpNote = vm::vl_insert( lpNote, lpNote3 );
    lpNote = vm::vl_insert( lpNote, lpNote4 );
    lpNote = vm::vl_insert( lpNote, lpNote5 );

    lpNote = vm::vl_head( lpNote );
    while( lpNote != nullptr )
    {
        int* lpVal = vm::vl_data( lpNote );
        vPrintf( vT("Value : %d\n"), *lpVal );
        lpNote = vm::vl_next( lpNote );
    }

    vm::vl_clean( lpNote1, true );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_list_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_list_3 ] {{{
UT_FUNC_BEGIN( ut_list_3 )

vTry

    // Add unit test coder here
    int liVal1 = 10;
    int liVal2 = 20;
    int liVal3 = 30;
    int liVal4 = 40;
    int liVal5 = 50;

    vm::stListNote<int>* lpNote1 = vm::vl_init( liVal1 );
    vm::stListNote<int>* lpNote2 = vm::vl_init( liVal2 );
    vm::stListNote<int>* lpNote3 = vm::vl_init( liVal3 );
    vm::stListNote<int>* lpNote4 = vm::vl_init( liVal4 );
    vm::stListNote<int>* lpNote5 = vm::vl_init( liVal5 );

    vm::stListNote<int>* lpNote = nullptr;
    lpNote = vm::vl_insert( lpNote, lpNote1 );
    lpNote = vm::vl_insert( lpNote, lpNote2 );
    lpNote = vm::vl_insert( lpNote, lpNote3 );
    lpNote = vm::vl_insert( lpNote, lpNote4 );
    lpNote = vm::vl_insert( lpNote, lpNote5 );

    lpNote = vm::vl_head( lpNote );
    while( lpNote != nullptr )
    {
        int* lpVal = vm::vl_data( lpNote );
        vPrintf( vT("Value : %d\n"), *lpVal );
        lpNote = vm::vl_next( lpNote );
    }

    vm::vl_clean( lpNote1, true );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_list_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_list_4 ] {{{
UT_FUNC_BEGIN( ut_list_4 )

vTry

    // Add unit test coder here
    vm::stListNote<int>* lpNote1 = vm::vl_init( 10 );
    vm::stListNote<int>* lpNote2 = vm::vl_init( 20 );
    vm::stListNote<int>* lpNote3 = vm::vl_init( 30 );
    vm::stListNote<int>* lpNote4 = vm::vl_init( 40 );
    vm::stListNote<int>* lpNote5 = vm::vl_init( 50 );

    vm::stListNote<int>* lpNote  = nullptr;
    lpNote = vm::vl_insert( lpNote, lpNote1 );
    lpNote = vm::vl_insert( lpNote, lpNote2 );
    lpNote = vm::vl_insert( lpNote, lpNote3 );
    lpNote = vm::vl_insert( lpNote, lpNote4 );
    lpNote = vm::vl_insert( lpNote, lpNote5 );

    lpNote = vm::vl_head( lpNote );
    while( lpNote != nullptr )
    {
        int* lpVal = vm::vl_data( lpNote );
        vPrintf( vT("Value : %d\n"), *lpVal );
        lpNote = vm::vl_next( lpNote );
    }

    vm::vl_clean( lpNote1, true );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_list_4
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_list                                                            == //
// ================================================================================================ //
// [ tst_frame_list ] {{{
UT_FRAME_BEGIN ( tst_frame_list )
UT_FRAME_REGIST( ut_list_1 )
UT_FRAME_REGIST( ut_list_2 )
UT_FRAME_REGIST( ut_list_3 )
UT_FRAME_REGIST( ut_list_4 )
UT_FRAME_ENDED
// }}} ![ tst_frame_list ]
// ================================================================================================ //
