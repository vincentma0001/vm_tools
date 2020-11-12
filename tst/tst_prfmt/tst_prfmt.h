
#include <vm_tools/vm_util/CPrFmt.hpp>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_prfmt_1 ] {{{
UT_FUNC_BEGIN( ut_prfmt_1 )

vTry

    // Add unit test coder here
    vPrintf( vT("**********************************************\n")  );
    char                 lcVal = 'A';
    vPrintf( vT("Print char(%hhd)\n"), lcVal );
    vPrintf( *vm::CPrFmt<128>().Char(), lcVal );
    vPrintf( vT("\n") );

    lcVal = 0;
    vPrintf( vT("Print char(%hhd)\n"), lcVal );
    vPrintf( *vm::CPrFmt<128>().Char(), lcVal );
    vPrintf( vT("\n") );

    lcVal = -1;
    vPrintf( vT("Print char(%hhd)\n"), lcVal );
    vPrintf( *vm::CPrFmt<128>().Char(), lcVal );
    vPrintf( vT("\n") );

    lcVal = vMinsChar;
    vPrintf( vT("Print char(%hhd)\n"), lcVal );
    vPrintf( *vm::CPrFmt<128>().Char(), lcVal );
    vPrintf( vT("\n") );


    lcVal = vMaxsChar;
    vPrintf( vT("Print char(%hhd)\n"), lcVal );
    vPrintf( *vm::CPrFmt<128>().Char(), lcVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    unsigned char       lucVal = 'A';
    vPrintf( vT("Print unsigned char(%hhu)\n"), lucVal );
    vPrintf( *vm::CPrFmt<128>().UChar(), lucVal );
    vPrintf( vT("\n") );

    lucVal = 0;
    vPrintf( vT("Print unsigned char(%hhu)\n"), lucVal );
    vPrintf( *vm::CPrFmt<128>().UChar(), lucVal );
    vPrintf( vT("\n") );

    lucVal = vMaxuChar;
    vPrintf( vT("Print unsigned char(%hhu)\n"), lucVal );
    vPrintf( *vm::CPrFmt<128>().UChar(), lucVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    short                lsVal = 0;
    vPrintf( vT("Print short(%hd)\n"),    lsVal );
    vPrintf( *vm::CPrFmt<128>().Short(),  lsVal );
    vPrintf( vT("\n") );

    lsVal = -1;
    vPrintf( vT("Print short(%hd)\n"),    lsVal );
    vPrintf( *vm::CPrFmt<128>().Short(),  lsVal );
    vPrintf( vT("\n") );

    lsVal = vMinsShort;
    vPrintf( vT("Print short(%hd)\n"),    lsVal );
    vPrintf( *vm::CPrFmt<128>().Short(),  lsVal );
    vPrintf( vT("\n") );

    lsVal = vMaxsShort;
    vPrintf( vT("Print short(%hd)\n"),    lsVal );
    vPrintf( *vm::CPrFmt<128>().Short(),  lsVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    unsigned short      lusVal = 60;
    vPrintf( vT("Print unsigned short(%hu)\n"),    lusVal );
    vPrintf( *vm::CPrFmt<128>().UShort(),          lusVal );
    vPrintf( vT("\n") );

    lusVal = 0;
    vPrintf( vT("Print unsigned short(%hu)\n"),    lusVal );
    vPrintf( *vm::CPrFmt<128>().UShort(),          lusVal );
    vPrintf( vT("\n") );

    lusVal = vMaxuShort;
    vPrintf( vT("Print unsigned short(%hu)\n"),    lusVal );
    vPrintf( *vm::CPrFmt<128>().UShort(),          lusVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    int                  liVal = 0;
    vPrintf( vT("Print int(%d)\n"),    liVal );
    vPrintf( *vm::CPrFmt<128>().Int(), liVal );
    vPrintf( vT("\n") );

    liVal = -1;
    vPrintf( vT("Print int(%d)\n"),    liVal );
    vPrintf( *vm::CPrFmt<128>().Int(), liVal );
    vPrintf( vT("\n") );

    liVal = vMinsInt;
    vPrintf( vT("Print int(%d)\n"),    liVal );
    vPrintf( *vm::CPrFmt<128>().Int(), liVal );
    vPrintf( vT("\n") );

    liVal = vMaxsInt;
    vPrintf( vT("Print int(%d)\n"),    liVal );
    vPrintf( *vm::CPrFmt<128>().Int(), liVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    unsigned int        luiVal = 128;
    vPrintf( vT("Print unsigned int(%u)\n"),    luiVal );
    vPrintf( *vm::CPrFmt<128>().UInt(),         luiVal );
    vPrintf( vT("\n") );

    luiVal = 0;
    vPrintf( vT("Print unsigned int(%u)\n"),    luiVal );
    vPrintf( *vm::CPrFmt<128>().UInt(),         luiVal );
    vPrintf( vT("\n") );

    luiVal = vMaxuInt;
    vPrintf( vT("Print unsigned int(%u)\n"),    luiVal );
    vPrintf( *vm::CPrFmt<128>().UInt(),         luiVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    long                 llVal = 0;
    vPrintf( vT("Print long(%ld)\n"),    llVal );
    vPrintf( *vm::CPrFmt<128>().Long(),  llVal );
    vPrintf( vT("\n") );

    llVal = -1;
    vPrintf( vT("Print long(%ld)\n"),    llVal );
    vPrintf( *vm::CPrFmt<128>().Long(),  llVal );
    vPrintf( vT("\n") );

    llVal = vMinsLong;
    vPrintf( vT("Print long(%ld)\n"),    llVal );
    vPrintf( *vm::CPrFmt<128>().Long(),  llVal );
    vPrintf( vT("\n") );

    llVal = vMaxsLong;
    vPrintf( vT("Print long(%ld)\n"),    llVal );
    vPrintf( *vm::CPrFmt<128>().Long(),  llVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    unsigned long       lulVal = 128;
    vPrintf( vT("Print unsigned long(%lu)\n"),    lulVal );
    vPrintf( *vm::CPrFmt<128>().ULong(),          lulVal );
    vPrintf( vT("\n") );

    lulVal = 0;
    vPrintf( vT("Print unsigned long(%lu)\n"),    lulVal );
    vPrintf( *vm::CPrFmt<128>().ULong(),          lulVal );
    vPrintf( vT("\n") );

    lulVal = vMaxuLong;
    vPrintf( vT("Print unsigned long(%lu)\n"),    lulVal );
    vPrintf( *vm::CPrFmt<128>().ULong(),          lulVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    long long           lllVal = 0;
    vPrintf( vT("Print long long(%lld)\n"),    lllVal );
    vPrintf( *vm::CPrFmt<128>().LLong(),       lllVal );
    vPrintf( vT("\n") );

    lllVal = -1;
    vPrintf( vT("Print long long(%lld)\n"),    lllVal );
    vPrintf( *vm::CPrFmt<128>().LLong(),       lllVal );
    vPrintf( vT("\n") );

    lllVal = vMinsLong;
    vPrintf( vT("Print long long(%lld)\n"),    lllVal );
    vPrintf( *vm::CPrFmt<128>().LLong(),       lllVal );
    vPrintf( vT("\n") );

    lllVal = vMaxsLLong;
    vPrintf( vT("Print long long(%lld)\n"),    lllVal );
    vPrintf( *vm::CPrFmt<128>().LLong(),       lllVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    unsigned long long lullVal = 128;
    vPrintf( vT("Print unsigned long long(%llu)\n"),    lullVal );
    vPrintf( *vm::CPrFmt<128>().ULLong(),               lullVal );
    vPrintf( vT("\n") );

    lullVal = 0;
    vPrintf( vT("Print unsigned long long(%llu)\n"),    lullVal );
    vPrintf( *vm::CPrFmt<128>().ULLong(),               lullVal );
    vPrintf( vT("\n") );

    lullVal = vMaxuLLong;
    vPrintf( vT("Print unsigned long long(%llu)\n"),    lullVal );
    vPrintf( *vm::CPrFmt<128>().ULLong(),               lullVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    float                lfVal = 0.1;
    vPrintf( vT("Print float(%f)\n"),    lfVal );
    vPrintf( *vm::CPrFmt<128>().Float(), lfVal );
    vPrintf( vT("\n") );

    lfVal = vMinFloat;
    vPrintf( vT("Print float(%f)\n"),    lfVal );
    vPrintf( *vm::CPrFmt<128>().Float(), lfVal );
    vPrintf( vT("\n") );

    lfVal = vMaxFloat;
    vPrintf( vT("Print float(%f)\n"),    lfVal );
    vPrintf( *vm::CPrFmt<128>().Float(), lfVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    double               ldVal = 0.1;
    vPrintf( vT("Print double(%f)\n"),    ldVal );
    vPrintf( *vm::CPrFmt<128>().Double(), ldVal );
    vPrintf( vT("\n") );

    ldVal = vMinDouble;
    vPrintf( vT("Print double(%f)\n"),    ldVal );
    vPrintf( *vm::CPrFmt<128>().Double(), ldVal );
    vPrintf( vT("\n") );

    ldVal = vMaxDouble;
    vPrintf( vT("Print double(%f)\n"),    ldVal );
    vPrintf( *vm::CPrFmt<128>().Double(), ldVal );
    vPrintf( vT("\n") );

    vPrintf( vT("**********************************************\n")  );
    long double         lldVal = 0.1;
    vPrintf( vT("Print long double(%Lf)\n"),    lldVal );
    vPrintf( *vm::CPrFmt<128>().LDouble(),      lldVal );
    vPrintf( vT("\n") );

    lldVal = vMinLDouble;
    vPrintf( vT("Print long double(%Lf)\n"),    lldVal );
    vPrintf( *vm::CPrFmt<128>().LDouble(),      lldVal );
    vPrintf( vT("\n") );

    lldVal = vMaxLDouble;
    vPrintf( vT("Print long double(%Lf)\n"),    lldVal );
    vPrintf( *vm::CPrFmt<128>().LDouble(),      lldVal );
    vPrintf( vT("\n") );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_prfmt_1
// ================================================================================================ //
// ================================================================================================ //
// [ ut_prfmt_2 ] {{{
UT_FUNC_BEGIN( ut_prfmt_2 )

vTry

    // Add unit test coder here
    char lcVal = vT('*');
    vPrintf( vT("Print char(%hhd)"),      lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( vT("Print char(%c)"),        lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char(                 ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 0, true         ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 0, true , true  ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 0, false, true  ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 8               ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 8, true         ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 8, true , true  ),   lcVal ); vPrintf( vT("vEnd\n") );
    vPrintf( *vm::CPrFmt<128>().Char( 8, false, true  ),   lcVal ); vPrintf( vT("vEnd\n") );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_prfmt_2
// ================================================================================================ //
// ================================================================================================ //
// ==  unit test frame tst_frame_prfmt                                                           == //
// ================================================================================================ //
// [ tst_frame_prfmt ] {{{
UT_FRAME_BEGIN ( tst_frame_prfmt )
//UT_FRAME_REGIST( ut_prfmt_1 )
UT_FRAME_REGIST( ut_prfmt_2 )
UT_FRAME_ENDED
// }}} ![ tst_frame_prfmt ]
// ================================================================================================ //
