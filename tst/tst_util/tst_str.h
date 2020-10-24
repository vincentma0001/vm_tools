

#include <vm_cfgs.h>
#include <vm_tools/vm_util/vm_util_mem.h>
#include <vm_tools/vm_util/vm_util_str.h>

#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_strset ] {{{
UT_FUNC_BEGIN( ut_strset )

vTry
    
    // 
    vCout << vEndl;
    vCout << vT("**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsTmp[] = {vT("This is a test!")};
    vCout << vT("Str = ") << lsTmp << vEndl;

    vm::v_strzero( lsTmp, sizeof(lsTmp) );
    vCout << vT("Str = ") << lsTmp << vEndl;

    vm::v_strset( lsTmp, 'A', sizeof(lsTmp) );
    vCout << vT("Str = ") << lsTmp << vEndl;

    vCout << vT("**************************************************************") << vEndl;
    vCout << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strset
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strchr ] {{{
UT_FUNC_BEGIN( ut_strchr )

vTry

    vCout << vEndl;
    vCout << vT("**************************************************************") << vEndl;
    // Add unit test coder here
    tchar lsTmp[] = {vT("This is a test!")};
    vCout << vT("Str = ") << lsTmp << vEndl;

    const tchar* lpPos1 = vm::v_strchr( lsTmp, 'i' );
    vCout << vT("Str = ") << lpPos1 << vEndl;

    const tchar* lpPos2 = vm::v_strchr( lsTmp, 'x' );
    vCout << vT("str = ") << (lpPos2==nullptr?"":lpPos2) << vEndl;

    const tchar* lpPos3 = vm::v_strrchr( lsTmp, 'i' );
    vCout << vT("Str = ") << lpPos3 << vEndl;
    
    const tchar* lpPos4 = vm::v_strchr( lsTmp, 'x' );
    vCout << vT("str = ") << (lpPos4==nullptr?"":lpPos4) << vEndl;

    // ISSUE #000001 : can's search sub string
    tchar lpTmp2[] = {vT("is")};
    const tchar* lpPos5 = vm::v_strstr( lsTmp, lpTmp2 );
    vCout << vT("str = ") << (lpPos4==nullptr?"":lpPos5) << vEndl;


    vCout << vT("**************************************************************") << vEndl;
    vCout << vEndl;
    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strchr
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strcmps ] {{{
UT_FUNC_BEGIN( ut_strcmps )

vTry
    vCout << vEndl;
    vCout << vT("**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsTmp1[] = {vT("AAAA")};
    vCout << vT("Str1 = ") << lsTmp1 << vEndl;
    tchar lsTmp2[] = {vT("aaaa")};
    vCout << vT("Str2 = ") << lsTmp2 << vEndl;
    tchar lsTmp3[] = {vT("BBBB")};
    vCout << vT("Str3 = ") << lsTmp3 << vEndl;

    vCout << vT("A(") << (int)'A' << vT(") a(") << (int)'a' << vT(")") << vEndl;
    vCout << vT("Str1 == Str2 is ") << ( vm::v_strcmp_equl( lsTmp1, lsTmp2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str2 is ") << ( vm::v_strcmp_more( lsTmp1, lsTmp2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str2 is ") << ( vm::v_strcmp_less( lsTmp1, lsTmp2 ) == true ? vT("true") : vT("false") ) << vEndl;

    vCout << vT("A(") << (int)'A' << vT(") B(") << (int)'B' << vT(")") << vEndl;
    vCout << vT("Str1 == Str3 is ") << ( vm::v_strcmp_equl( lsTmp1, lsTmp3 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str3 is ") << ( vm::v_strcmp_more( lsTmp1, lsTmp3 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str3 is ") << ( vm::v_strcmp_less( lsTmp1, lsTmp3 ) == true ? vT("true") : vT("false") ) << vEndl;

    vCout << vT("**************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strcmps
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strncmps ] {{{
UT_FUNC_BEGIN( ut_strncmps )

vTry
    vCout << vEndl;
    vCout << vT("**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsTmp1[] = {vT("AAAA")};
    vCout << vT("Str1 = ") << lsTmp1 << vEndl;
    tchar lsTmp2[] = {vT("aaaa")};
    vCout << vT("Str2 = ") << lsTmp2 << vEndl;
    tchar lsTmp3[] = {vT("BBBB")};
    vCout << vT("Str3 = ") << lsTmp3 << vEndl;

    vCout << vT("A(") << (int)'A' << vT(") a(") << (int)'a' << vT(")") << vEndl;
    vCout << vT("Str1 == Str2 is ") << ( vm::v_strncmp_equl( lsTmp1, lsTmp2, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str2 is ") << ( vm::v_strncmp_more( lsTmp1, lsTmp2, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str2 is ") << ( vm::v_strncmp_less( lsTmp1, lsTmp2, 2 ) == true ? vT("true") : vT("false") ) << vEndl;

    vCout << vT("A(") << (int)'A' << vT(") B(") << (int)'B' << vT(")") << vEndl;
    vCout << vT("Str1 == Str3 is ") << ( vm::v_strncmp_equl( lsTmp1, lsTmp3, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str3 is ") << ( vm::v_strncmp_more( lsTmp1, lsTmp3, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str3 is ") << ( vm::v_strncmp_less( lsTmp1, lsTmp3, 2 ) == true ? vT("true") : vT("false") ) << vEndl;

    tchar lsTmp4[] = {vT("AAAA")};
    vCout << vT("Str4 = ") << lsTmp4 << vEndl;
    vCout << vT("Str1 == Str4 is ") << ( vm::v_strncmp_equl( lsTmp1, lsTmp4, 4 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str4 is ") << ( vm::v_strncmp_more( lsTmp1, lsTmp4, 4 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str4 is ") << ( vm::v_strncmp_less( lsTmp1, lsTmp4, 4 ) == true ? vT("true") : vT("false") ) << vEndl;

    tchar lsTmp5[] = {vT("AAaa")};
    vCout << vT("Str5 = ") << lsTmp5 << vEndl;
    vCout << vT("Str1 == Str5 is ") << ( vm::v_strncmp_equl( lsTmp1, lsTmp5, 4 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str5 is ") << ( vm::v_strncmp_more( lsTmp1, lsTmp5, 4 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str5 is ") << ( vm::v_strncmp_less( lsTmp1, lsTmp5, 4 ) == true ? vT("true") : vT("false") ) << vEndl;

    vCout << vT("Str1 == Str5 is ") << ( vm::v_strncmp_equl( lsTmp1, lsTmp5, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 >  Str5 is ") << ( vm::v_strncmp_more( lsTmp1, lsTmp5, 2 ) == true ? vT("true") : vT("false") ) << vEndl;
    vCout << vT("Str1 <  Str5 is ") << ( vm::v_strncmp_less( lsTmp1, lsTmp5, 2 ) == true ? vT("true") : vT("false") ) << vEndl;

    vCout << vT("**************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strncmps
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strcat ] {{{
UT_FUNC_BEGIN( ut_strcat )

vTry

    vCout << vT("\n**************************************************************") << vEndl;
    
    // Add unit test coder here
    tchar lsDst[256] = {vT("Dst string")};
    vCout << vT("Dst : ") << lsDst << vEndl;
    tchar lsSrc[] = {vT("Src string")};
    vCout << vT("Src : ") << lsSrc << vEndl;

    tchar* lpStr = vm::v_strcat( lsDst, sizeof(lsDst), lsSrc );
    vCout << "Cated Dst : " << (( lpStr == nullptr ) ? "" : lpStr) << vEndl; 
    vCout << vT("Src : ") << lsSrc << vEndl;

    tchar* lpStr1 = vm::v_strncat( lsDst, sizeof(lsDst), lsSrc, 3 );
    vCout << "Cated Dst : " << (( lpStr1 == nullptr ) ? "" : lpStr1) << vEndl; 


    vCout << vT("**************************************************************\n") << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strcat
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strcpy ] {{{
UT_FUNC_BEGIN( ut_strcpy )

vTry

    vCout << vT("\n**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsDst[256] = {vT("Dst string")};
    vCout << vT("Dst : ") << lsDst << vEndl;
    tchar lsSrc[] = {vT("Src string")};
    vCout << vT("Src : ") << lsSrc << vEndl;

    size_t lsztNum = vm::v_strcpy( lsDst, sizeof(lsDst), lsSrc );
    vCout << vT("Dst : ") << lsDst << vT(" Num : ") << lsztNum << vEndl;

    vStrZero(lsDst);
    size_t lsztNum2 = vm::v_strncpy( lsDst, sizeof(lsDst), lsSrc, 3 );
    vCout << vT("Dst : ") << lsDst << vT(" Num : ") << lsztNum2 << vEndl;

    vCout << vT("**************************************************************\n") << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strcpy
// ================================================================================================ //

// ================================================================================================ //
// [ ut_toupper ] {{{
UT_FUNC_BEGIN( ut_toupper_tolower )

vTry

    vCout << vT("\n**************************************************************") << vEndl;
    // Add unit test coder here
    tchar lsTmp[] = {vT("AaBbCc")};
    vCout << vT("Str : ") << lsTmp << vEndl;
    tchar lsBuf1[256] = {0x00};
    vm::v_toupper( lsBuf1, sizeof(lsBuf1), lsTmp, sizeof(lsTmp) );
    vCout << vT("Buf1 : ") << lsBuf1 << vEndl;
    tchar lsBuf2[256] = {0x00};
    vm::v_tolower( lsBuf2, sizeof(lsBuf2), lsTmp, sizeof(lsTmp) );
    vCout << vT("Buf2 : ") << lsBuf2 << vEndl;

    vm::v_tolower( lsBuf1 );
    vCout << vT("Buf1 : ") << lsBuf1 << vEndl;
    vm::v_toupper( lsBuf2 );
    vCout << vT("Buf2 : ") << lsBuf2 << vEndl;

    vCout << vT("**************************************************************\n") << vEndl;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_toupper
// ================================================================================================ //

#include <stdarg.h>
void func_vsprintf( const tchar* const cpFmt, ... )
{
    tchar lsTmp[256] = {0x00};

    va_list lvList;
    va_start( lvList, cpFmt );
    size_t lsztRetNum = vm::v_vsprintf( lsTmp, sizeof(lsTmp), cpFmt, lvList );
    va_end(lvList);

    vCout << vT("Tmp (") << lsTmp << vT(") Num : ") << lsztRetNum << vEndl;
}

// ================================================================================================ //
// [ ut_sprintf ] {{{
UT_FUNC_BEGIN( ut_sprintf )

vTry
    vCout << vT("\n**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsTmp[256] = {0x00};
    size_t lsztRetNum = vm::v_sprintf( lsTmp, sizeof(lsTmp), vT("This is a test! %s %d"), vT("String"), 20 );
    vCout << vT("Tmp (") << lsTmp << vT(") Num : ") << lsztRetNum << vEndl;

    func_vsprintf( vT("This is an other test! %s %d"), vT("string"), 30 );

    vCout << vT("**************************************************************\n") << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_sprintf
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strtrim ] {{{
UT_FUNC_BEGIN( ut_strtrim )

vTry
    vCout << vT("\n**************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsStr1 []  = {vT(" \n\tABCD\t\n ")};
    vCout << vT("Str1 : ") << lsStr1 << vEndl;
    tchar lsTmp[256] = {0x00};
    vm::v_strtrim( lsTmp, sizeof(lsTmp), lsStr1, vStrlen(lsStr1) );
    vCout << vT("Tmp : ") << lsTmp << vEndl;

    tchar lsStr2 []  = {vT("  ABCD")};
    vCout << vT("Str2 : ") << lsStr2 << vEndl;
    vm::v_strtrim( lsStr2 );
    vCout << vT("Str2 : ") << lsStr2 << vEndl;

    tchar lsStr3 []  = {vT("ABCD  ")};
    vCout << vT("Str3 : ") << lsStr3 << vEndl;
    vm::v_strtrim( lsStr3 );
    vCout << vT("Str3 : ") << lsStr3 << vEndl;

    tchar lsStr4 []  = {vT("ABCD")};
    vCout << vT("Str4 : ") << lsStr4 << vEndl;
    vm::v_strtrim( lsStr4 );
    vCout << vT("Str4 : ") << lsStr4 << vEndl;

    /*
    tchar lsStr5 [256]  = {vT("")};
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    vm::v_strtrim_left( lsStr5 );
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    //*/

    vCout << vT("**************************************************************\n") << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strtrim
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strtrim_left ] {{{
UT_FUNC_BEGIN( ut_strtrim_left )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsStr1 []  = {vT(" \n\tABCD\t\n ")};
    vCout << vT("Str1 : ") << lsStr1 << vEndl;
    tchar lsTmp[256] = {0x00};
    vm::v_strtrim_left( lsTmp, sizeof(lsTmp), lsStr1, vStrlen(lsStr1) );
    vCout << vT("Tmp : ") << lsTmp << vEndl;

    tchar lsStr2 []  = {vT("  ABCD")};
    vCout << vT("Str2 : ") << lsStr2 << vEndl;
    vm::v_strtrim_left( lsStr2 );
    vCout << vT("Str2 : ") << lsStr2 << vEndl;

    tchar lsStr3 []  = {vT("ABCD  ")};
    vCout << vT("Str3 : ") << lsStr3 << vEndl;
    vm::v_strtrim_left( lsStr3 );
    vCout << vT("Str3 : ") << lsStr3 << vEndl;

    tchar lsStr4 []  = {vT("ABCD")};
    vCout << vT("Str4 : ") << lsStr4 << vEndl;
    vm::v_strtrim_left( lsStr4 );
    vCout << vT("Str4 : ") << lsStr4 << vEndl;

    /*
    tchar lsStr5 [256]  = {vT("")};
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    vm::v_strtrim_left( lsStr5 );
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    //*/

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strtrim_left
// ================================================================================================ //

// ================================================================================================ //
// [ ut_strtrim_right ] {{{
UT_FUNC_BEGIN( ut_strtrim_right )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    tchar lsStr1 []  = {vT(" \n\tABCD\n\t ")};
    vCout << vT("Str1 : ") << lsStr1 << vEndl;
    tchar lsTmp[256] = {0x00};
    vm::v_strtrim_right( lsTmp, sizeof(lsTmp), lsStr1, vStrlen(lsStr1) );
    vCout << vT("Tmp : ") << lsTmp << vEndl;

    tchar lsStr2 []  = {vT("  ABCD")};
    vCout << vT("Str2 : ") << lsStr2 << vEndl;
    vm::v_strtrim_right( lsStr2 );
    vCout << vT("Str2 : ") << lsStr2 << vEndl;

    tchar lsStr3 []  = {vT("ABCD  ")};
    vCout << vT("Str3 : ") << lsStr3 << vEndl;
    vm::v_strtrim_right( lsStr3 );
    vCout << vT("Str3 : ") << lsStr3 << vEndl;

    tchar lsStr4 []  = {vT("ABCD")};
    vCout << vT("Str4 : ") << lsStr4 << vEndl;
    vm::v_strtrim_right( lsStr4 );
    vCout << vT("Str4 : ") << lsStr4 << vEndl;

    /*
    tchar lsStr5 [256]  = {vT("")};
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    vm::v_strtrim_right( lsStr5 );
    vCout << vT("Str5 : ") << lsStr5 << vEndl;
    //*/


    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_strtrim_right
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_str                                                             == //
// ================================================================================================ //
// [ tst_frame_str ] {{{
UT_FRAME_BEGIN ( tst_frame_str )
UT_FRAME_REGIST( ut_strtrim_right )
UT_FRAME_REGIST( ut_strtrim_left )
UT_FRAME_REGIST( ut_strtrim )
UT_FRAME_REGIST( ut_sprintf )
UT_FRAME_REGIST( ut_toupper_tolower )
UT_FRAME_REGIST( ut_strcpy )
UT_FRAME_REGIST( ut_strcat )
UT_FRAME_REGIST( ut_strncmps )
UT_FRAME_REGIST( ut_strcmps )
UT_FRAME_REGIST( ut_strchr )
UT_FRAME_REGIST( ut_strset )
UT_FRAME_ENDED
// }}} ![ tst_frame_str ]
// ================================================================================================ //
