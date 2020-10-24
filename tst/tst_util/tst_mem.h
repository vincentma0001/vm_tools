

#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_mem ] {{{
UT_FUNC_BEGIN( ut_mem )

vTry

    // Add unit test coder here
    tchar lsTmp[256] = { vT("This is test!") };
    vCout << vT("Str : ") << lsTmp << vEndl;

    vMemZero( lsTmp );
    vCout << vT("Str : ") << lsTmp << vEndl;

    vMemSet( lsTmp, 'A' );
    vCout << vT("Str : ") << lsTmp << vEndl;

    vMemSet(lsTmp, 0x00);
    vCout << vT("Str : ") << lsTmp << vEndl;

vCatch( ... )
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_mem
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memchr ] {{{
UT_FUNC_BEGIN( ut_memchr )

vTry

    // Add unit test coder here
    tchar lsTmp1[] = { vT("This is test!") };
    vCout << vT("lsTmp1 : ") << lsTmp1 << vEndl;
    tchar* lpPos = (tchar*)vm::v_memchr( lsTmp1, 't', sizeof(lsTmp1) );
    vCout << lpPos << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memchr
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memmove ] {{{
UT_FUNC_BEGIN( ut_memmove )

vTry

    // Add unit test coder here
    tchar lpTmp1[] = { vT("This is a test!") };
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

    tchar* lpPos1  = (tchar*)vm::v_memchr( lpTmp1, 't', sizeof(lpTmp1) );
    tchar* lpPos2  = (tchar*)vm::v_memchr( lpTmp1, 's', sizeof(lpTmp1) );

    vm::v_memmove( lpPos2, 5, lpPos1, 5 ); 
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memmove
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memcpy_1 ] {{{
UT_FUNC_BEGIN( ut_memcpy_1 )

vTry

    // Add unit test coder here
    tchar lpTmp1[256] = { vT("ABCDE") };
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;
    tchar lpTmp2[256] = { vT("abcde") };
    vCout << vT("lsTmp2 : ") << lpTmp2 << vEndl;

    vm::v_memcpy( lpTmp1, sizeof(lpTmp1), lpTmp2, strlen(lpTmp2) );
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memcpy_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memcpy_2 ] {{{
UT_FUNC_BEGIN( ut_memcpy_2 )

vTry

    // Add unit test coder here
    tchar lpTmp1[] = { vT("This is a test!") };
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

    tchar* lpPos1  = (tchar*)vm::v_memchr( lpTmp1, 't', sizeof(lpTmp1) );
    tchar* lpPos2  = (tchar*)vm::v_memchr( lpTmp1, 's', sizeof(lpTmp1) );

    vm::v_memcpy( lpPos2, 5, lpPos1, 5 ); 
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memcpy_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memccpy ] {{{
UT_FUNC_BEGIN( ut_memccpy )

vTry

    // Add unit test coder here
    tchar lpTmp1[256] = { 0x00 };
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;
    tchar lpTmp2[] = { vT("This is a test 2!") };
    vCout << vT("lsTmp2 : ") << lpTmp2 << vEndl;

    size_t lnum = vm::v_memccpy( lpTmp1, sizeof(lpTmp1), lpTmp2, 'a', strlen(lpTmp2) );
    vCout << vT("copy num : ") << lnum << vEndl;
    vCout << vT("lsTmp1 : ") << lpTmp1 << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memccpy
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memcmp ] {{{
UT_FUNC_BEGIN( ut_memcmp )

vTry

    // Add unit test coder here
    tchar lsTmp1[] = { vT("AAAA") };
    vCout << vT("lsTmp1 : ") << lsTmp1 << vEndl;
    tchar lsTmp2[] = { vT("aaaa") };
    vCout << vT("lsTmp2 : ") << lsTmp2 << vEndl;

    vCout << "A(" << (int)'A' << ")  a(" << (int)'a' << ")" << vEndl;

    vCout << "lsTmp1 > lsTmp2 is " << (vm::v_memcmp_more(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 < lsTmp2 is " << (vm::v_memcmp_less(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 = lsTmp2 is " << (vm::v_memcmp_equl(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;

    vCout << "lsTmp1 == lsTmp1 is "<< (vm::v_memcmp_equl(lsTmp1,lsTmp1,4) == true ? "true":"false") << vEndl;


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memcmp
// ================================================================================================ //

// ================================================================================================ //
// [ ut_memicmp ] {{{
UT_FUNC_BEGIN( ut_memicmp )

vTry

    // Add unit test coder here
    // Add unit test coder here
    tchar lsTmp1[] = { vT("AAAA") };
    vCout << vT("lsTmp1 : ") << lsTmp1 << vEndl;
    tchar lsTmp2[] = { vT("aaaa") };
    vCout << vT("lsTmp2 : ") << lsTmp2 << vEndl;

    vCout << "A(" << (int)'A' << ")  a(" << (int)'a' << ")" << vEndl;

    vCout << "lsTmp1 > lsTmp2 is " << (vm::v_memicmp_more(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 < lsTmp2 is " << (vm::v_memicmp_less(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 = lsTmp2 is " << (vm::v_memicmp_equl(lsTmp1,lsTmp2,4) == true ? "true":"false") << vEndl;

    vCout << "lsTmp1 == lsTmp1 is "<< (vm::v_memicmp_equl(lsTmp1,lsTmp1,4) == true ? "true":"false") << vEndl;

    tchar* lsTmp3[] = { vT("BBBB") };
    vCout << "A(" << (int)'A' << ")  B(" << (int)'B' << ")" << vEndl;
    vCout << "lsTmp1 > lsTmp3 is " << (vm::v_memicmp_more(lsTmp1,lsTmp3,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 < lsTmp3 is " << (vm::v_memicmp_less(lsTmp1,lsTmp3,4) == true ? "true":"false") << vEndl;
    vCout << "lsTmp1 = lsTmp3 is " << (vm::v_memicmp_equl(lsTmp1,lsTmp3,4) == true ? "true":"false") << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_memicmp
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_mem                                                             == //
// ================================================================================================ //
// [ tst_frame_mem ] {{{
UT_FRAME_BEGIN ( tst_frame_mem  )
UT_FRAME_REGIST( ut_mem         )
UT_FRAME_REGIST( ut_memchr      )
UT_FRAME_REGIST( ut_memmove     )
UT_FRAME_REGIST( ut_memcpy_1    )
UT_FRAME_REGIST( ut_memcpy_2    )
UT_FRAME_REGIST( ut_memccpy     )
UT_FRAME_REGIST( ut_memcmp      )
UT_FRAME_REGIST( ut_memicmp     )
UT_FRAME_ENDED
// }}} ![ tst_frame_mem ]
// ================================================================================================ //
