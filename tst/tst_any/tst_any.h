
#include <vm_tools/vm_string.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_any_1 ] {{{
UT_FUNC_BEGIN( ut_any_1 )

vTry

    // Add unit test coder here
    bool lbVal = true;
    vm::CAny<128> loVal1(lbVal);
    vPrintf( vT("Value : %d, %s\n"), loVal1.toBool(),loVal1.toStr() );

    char lcVal = -1;
    vm::CAny<128> loVal2(lcVal);
    vPrintf( vT("Value : %hd, %s\n"), loVal2.toChar(),loVal2.toStr() );

    unsigned char lucVal = vT('A');
    vm::CAny<128> loVal3(lucVal);
    vPrintf( vT("Value : %hu, %s\n"), loVal3.toUChar(),loVal3.toStr() );

    short lsVal = -101;
    vm::CAny<128> loVal4(lsVal);
    vPrintf( vT("Value : %hd, %s\n"), loVal4.toShort(),loVal4.toStr() );

    unsigned short lusVal = 101;
    vm::CAny<128> loVal5(lusVal);
    vPrintf( vT("Value : %hu, %s\n"), loVal5.toUShort(),loVal5.toStr() );

    int liVal = -201;
    vm::CAny<128> loVal6(liVal);
    vPrintf( vT("Value : %d, %s\n"), loVal6.toInt(),loVal6.toStr() );

    unsigned int luiVal = 201;
    vm::CAny<128> loVal7(luiVal);
    vPrintf( vT("Value : %u, %s\n"), loVal7.toUInt(),loVal7.toStr() );

    long llVal = -201;
    vm::CAny<128> loVal8(llVal);
    vPrintf( vT("Value : %ld, %s\n"), loVal8.toLong(),loVal8.toStr() );

    unsigned long lulVal = 201;
    vm::CAny<128> loVal9(lulVal);
    vPrintf( vT("Value : %lu, %s\n"), loVal9.toULong(),loVal9.toStr() );

    long long lllVal = -301;
    vm::CAny<128> loVal10(lllVal);
    vPrintf( vT("Value : %lld, %s\n"), loVal10.toLLong(),loVal10.toStr() );

    unsigned long long lullVal = 301;
    vm::CAny<128> loVal11(lullVal);
    vPrintf( vT("Value : %llu, %s\n"), loVal11.toULLong(),loVal11.toStr() );
    
    float lfVal = 10.01;
    vm::CAny<128> loVal12(lfVal);
    vPrintf( vT("Value : %f, %s\n"), loVal12.toFloat(),loVal12.toStr() );

    double ldVal = 20.02;
    vm::CAny<128> loVal13(ldVal);
    vPrintf( vT("Value : %f, %s\n"), loVal13.toDouble(),loVal13.toStr() );


vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_any_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_any                                                             == //
// ================================================================================================ //
// [ tst_frame_any ] {{{
UT_FRAME_BEGIN ( tst_frame_any )
UT_FRAME_REGIST( ut_any_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_any ]
// ================================================================================================ //
