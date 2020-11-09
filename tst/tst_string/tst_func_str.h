
#include <vm_tools/vm_string.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_fstr_1 ] {{{
UT_FUNC_BEGIN( ut_fstr_1 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024]  = {0x00};
    const tchar* lpSrc = vT("this is a test string! (%EUC:%EUM)");
    vPrintf( vT("Src string(%zd) : [%s]\n"), vStrlen(lpSrc), lpSrc);

    const tchar* lpOldStr1 = vT("%EUC");
    const tchar* lpNewStr1 = vT("1024");
    vPrintf( vT("OldStr[%s] NewStr[%s]\n"), lpOldStr1, lpNewStr1 );


    size_t lsztNewStrlen1 = vm::v_str_replace(    lszBuf,     sizeof(lszBuf),     lpSrc,     vStrlen(lpSrc), 
                                               lpOldStr1, vStrlen(lpOldStr1), lpNewStr1, vStrlen(lpNewStr1) );
    vPrintf( vT("New string(%zd) : [%s]\n"), lsztNewStrlen1, lszBuf );

    tchar lszBuf2[1024] = {0x00};
    const tchar* lpOldStr2 = vT("%EUM");
    const tchar* lpNewStr2 = vT("error information");
    vPrintf( vT("OldStr[%s] NewStr[%s]\n"), lpOldStr2, lpNewStr2 );

    size_t lsztNewStrlen2 = vm::v_str_replace(   lszBuf2,    sizeof(lszBuf2),    lszBuf,    vStrlen(lszBuf), 
                                               lpOldStr2, vStrlen(lpOldStr2), lpNewStr2, vStrlen(lpNewStr2) );
    vPrintf( vT("New string(%zd) : [%s]\n"), lsztNewStrlen2, lszBuf2 );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_fstr_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_fstr_2 ] {{{
UT_FUNC_BEGIN( ut_fstr_2 )

vTry

    // Add unit test coder here
    tchar lszBuf[1024]  = {0x00};
    const tchar* lpSrc = vT("this is a test string!");
    vPrintf( vT("Src string(%zd) : [%s]\n"), vStrlen(lpSrc), lpSrc);

    const tchar* lpOldStr1 = vT("%EUC");
    const tchar* lpNewStr1 = vT("1024");
    vPrintf( vT("OldStr [%s] NewStr [%s]\n"), lpOldStr1, lpNewStr1 );


    size_t lsztNewStrlen1 = vm::v_str_replace(    lszBuf,     sizeof(lszBuf),     lpSrc,     vStrlen(lpSrc), 
                                               lpOldStr1, vStrlen(lpOldStr1), lpNewStr1, vStrlen(lpNewStr1) );
    vPrintf( vT("New string(%zd) : [%s]\n"), lsztNewStrlen1, lszBuf );

    

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_fstr_2
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_fstr                                                            == //
// ================================================================================================ //
// [ tst_frame_fstr ] {{{
UT_FRAME_BEGIN ( tst_frame_fstr )
UT_FRAME_REGIST( ut_fstr_1 )
UT_FRAME_REGIST( ut_fstr_2 )
UT_FRAME_ENDED
// }}} ![ tst_frame_fstr ]
// ================================================================================================ //
