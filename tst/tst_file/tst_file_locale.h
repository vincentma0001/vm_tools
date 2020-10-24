
#include <locale.h>

#include <vm_tools/vm_file/CLocale.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_file_locale_1 ] {{{
UT_FUNC_BEGIN( ut_file_locale_1 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    struct lconv * lc;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    printf ("Locale is: %s\n", vm::CLocale::Set() );
    strftime (buffer,80,"%A %c",timeinfo);
    printf ("Date is: %s\n",buffer);
    lc = vm::CLocale::Conv();
    printf ("Currency symbol is: %s\n-\n",lc->currency_symbol);

    printf ("Locale is: %s\n", vm::CLocale::zh_CN() );
    strftime (buffer,80,"%A %c",timeinfo);
    printf ("Date is: %s\n",buffer);
    lc = vm::CLocale::Conv();
    printf ("Currency symbol is: %s\n-\n",lc->currency_symbol);

    printf  ("Locale is: %s\n", vm::CLocale::zh_CN_utf_8() );
    wchar_t buf1[80] = {0x00};
    wcsftime (buf1,80,L"%A %c",localtime(&rawtime));
    wprintf (L"Date is: %ws\n",buf1);
    lc = vm::CLocale::Conv();
    wprintf (L"Currency symbol is: %hs\n-\n",lc->currency_symbol);

    /*
    printf ("Locale is: %s\n", vm::CLocale::en_US() );
    strftime (buffer,80,"%A %c",timeinfo);
    printf ("Date is: %s\n",buffer);
    lc = vm::CLocale::Conv();
    printf ("Currency symbol is: %s\n-\n",lc->currency_symbol);

    //*/
    printf  ("Locale is: %s\n", vm::CLocale::en_US_utf_8() );
    wchar_t buf2[80] = {0x00};
    wcsftime (buf2,80,L"%A %c",localtime(&rawtime));
    wprintf (L"Date is: %ws\n",buf2);
    lc = vm::CLocale::Conv();
    wprintf (L"Currency symbol is: %hs\n-\n",lc->currency_symbol);

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_file_locale_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_locale                                                          == //
// ================================================================================================ //
// [ tst_frame_locale ] {{{
UT_FRAME_BEGIN ( tst_frame_locale )
UT_FRAME_REGIST( ut_file_locale_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_locale ]
// ================================================================================================ //
