
#include <vm_tools/vm_string.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_cstr_1 ] {{{
UT_FUNC_BEGIN( ut_cstr_1 )

vTry
    // Add unit test coder here
    vm::CString<256> lstrString1;
    lstrString1 = vT("This is string 1!");
    vPrintf( vT( "Str1 (%zd:%zd) [%s]\n" ), lstrString1.size(), lstrString1.len(), *lstrString1 );

    vm::CString<256> lstrString2( vT("this is string 2!") );
    vPrintf( vT( "Str2 (%zd:%zd) [%s]\n" ), lstrString2.size(), lstrString2.len(), *lstrString2 );

    vm::CString<256> lstrString21 = vT("this is string 2!");
    vPrintf( vT( "Str21(%zd:%zd) [%s]\n" ), lstrString21.size(), lstrString21.len(), *lstrString21 );

    vm::CString<256> lstrString3( lstrString1 );
    vPrintf( vT( "Str3 (%zd:%zd) [%s]\n" ), lstrString3.size(), lstrString3.len(), *lstrString3 );
    vm::CString<256> lstrString31 = lstrString1;
    vPrintf( vT( "Str31(%zd:%zd) [%s]\n" ), lstrString31.size(), lstrString31.len(), *lstrString31 );

    vm::CString<128> lstrString4( lstrString1 );
    vPrintf( vT( "Str4 (%zd:%zd) [%s]\n" ), lstrString4.size(), lstrString4.len(), *lstrString4 );
    vm::CString<128> lstrString41 = lstrString1;
    vPrintf( vT( "Str41(%zd:%zd) [%s]\n" ), lstrString41.size(), lstrString41.len(), *lstrString41 );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cstr_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cstr_2 ] {{{
UT_FUNC_BEGIN( ut_cstr_2 )

vTry

    // Add unit test coder here
    vm::CString<256> lstrString1 = vT("B1");
    vCout << vT("Str : ") << *lstrString1 << vEndl;
    lstrString1 + vT("B2") + vT("B3") + vT('\\');
    vCout << vT("Str : ") << *lstrString1 << vEndl;
    lstrString1 += vT("A1");
    lstrString1 += vT('\\');
    vCout << vT("Str : ") << *lstrString1 << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cstr_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cstr_3 ] {{{
UT_FUNC_BEGIN( ut_cstr_3 )

vTry

    // Add unit test coder here
    vm::CString<1024>  lstrString;
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cstr_3
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_cstr                                                            == //
// ================================================================================================ //
// [ tst_frame_cstr ] {{{
UT_FRAME_BEGIN ( tst_frame_cstr )
UT_FRAME_REGIST( ut_cstr_3 )
UT_FRAME_REGIST( ut_cstr_2 )
UT_FRAME_REGIST( ut_cstr_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cstr ]
// ================================================================================================ //
