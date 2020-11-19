
#include "vm_tools/vm_memory/CCycBufPtr.h"
#include "vm_tools/vm_memory/CMemMgr.h"
#include "vm_tools/vm_string/CAny.hpp"
#include "vm_tools/vm_util/v_funcs_io.h"
#include <vm_tools/vm_memory.h>
#include <vm_tools/vm_utst.h>
#include <vm_tools//vm_util/v_funcs_io.h>

void ShowCycBuf( vm::CCycBufPtr& oCycBuf )
{
    vm::v_output_line( vT("CycBuf : Size(%zu[u:%zu n:%zu]) Pos[s:%lu e:%lu] "), 
                       oCycBuf.Size(), oCycBuf.SizeUsed(), oCycBuf.SizeUnused(),
                       oCycBuf.StartPos(), oCycBuf.EndedPos() );
    vm::CMemMgr::Output<32,8>( stdout, *oCycBuf, oCycBuf.Size() );
}

template< typename tType >
void tst_cycbuf_put( vm::CCycBufPtr& oCycBuf, tType &tVal )
{

    bool lbRetForPut = oCycBuf.Put( tVal );
    if( lbRetForPut == true )
    {
        vm::CAny<256> loValue(tVal);
        vm::v_output_line( vT("\e[33mPut value %s\e[0m \e[32msucess\e[0m, tType=<\e[33m%s\e[0m>"), loValue.toStr(), loValue.cs_type() );
        ShowCycBuf( oCycBuf );
    }
    else
    {
        vm::CAny<256> loValue(tVal);
        vm::v_output_line( vT("\e[33mPut value %s\e[0m \e[31mfailed\e[0m, tType=<\e[33m%s\e[0m>"), loValue.toStr(), loValue.cs_type() );
        ShowCycBuf( oCycBuf );
    }
}
template< typename tType >
void tst_cycbuf_get( vm::CCycBufPtr& oCycBuf, tType &tVal )
{

    tVal = 0;
    bool lbRetForGet = oCycBuf.Get( tVal );
    if( lbRetForGet == true )
    {
        vm::CAny<256> loValue(tVal);
        vm::v_output_line( vT("\e[33mGet value %s\e[0m \e[32msucess\e[0m, tType=<\e[33m%s\e[0m>"), loValue.toStr(), loValue.cs_type() );
        ShowCycBuf( oCycBuf );
    }
    else
    {
        vm::CAny<256> loValue(tVal);
        vm::v_output_line( vT("\e[33mGet value %s\e[0m \e[31mfailed\e[0m, tType=<\e[33m%s\e[0m>"), loValue.toStr(), loValue.cs_type() );
        ShowCycBuf( oCycBuf );
    }
}
template< typename tType >
void tst_cycbuf_type( vm::CCycBufPtr& oCycBuf, tType tVal )
{
    tst_cycbuf_put( oCycBuf, tVal );
    tst_cycbuf_get( oCycBuf, tVal );
}

// ================================================================================================ //
// [ ut_cycbuf_1 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_1 )

vTry

    // Add unit test coder here
    tchar lszBuf[64] = { vT("This is a test!") };
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
    vMemZero( lszBuf );

    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );
    ShowCycBuf( loCycBuf );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<char>( loCycBuf, 'A' );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<short>( loCycBuf, vMinsShort );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<unsigned short>( loCycBuf, vMaxuShort );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<int>( loCycBuf, vMinsInt );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<unsigned int>( loCycBuf, vMaxuInt );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<long>( loCycBuf, vMinsLong );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<unsigned long>( loCycBuf, vMaxuLong );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<long long>( loCycBuf, vMinsLLong );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<unsigned long long>( loCycBuf, vMaxuLLong );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<float>( loCycBuf, vMaxFloat );

    vm::v_output_line( "**********************************************" );
    tst_cycbuf_type<double>( loCycBuf, vMaxDouble );

//  vm::v_output_line( "**********************************************" );
//  tst_cycbuf_type<long double>( loCycBuf, vMaxLDouble );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cycbuf_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cycbuf_2 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_2 )

vTry

    // Add unit test coder here
    tchar lszBuf[8] = {0x00};
    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );

    tchar lcVal = vT('1');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('2');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('3');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('4');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('5');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('6');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('7');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('8');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );
    lcVal = vT('9');
    tst_cycbuf_put<tchar>( loCycBuf, lcVal );

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cycbuf_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cycbuf_3 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_3 )

vTry

    // Add unit test coder here
    tchar lszBuf[8] = {0x00};

    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );
    while( loCycBuf.Put(vT('A')) ){};
    ShowCycBuf( loCycBuf );

    tchar lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cycbuf_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_cycbuf_4 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_4 )

vTry

    // Add unit test coder here
    tchar lszBuf[8] = {0x00};
    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );
    ShowCycBuf( loCycBuf );

    vm::v_output_line( "**********************************************" );
    tchar lcVal = vT('A');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('B');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('C');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('D');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('E');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('F');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('G');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('H');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('I');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('J');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('K');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('L');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('M');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('N');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('O');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('P');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('G');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('R');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );

    vm::v_output_line( "**********************************************" );
    lcVal = vT('S');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = vT('T');
    tst_cycbuf_put( loCycBuf, lcVal );
    lcVal = 0;
    tst_cycbuf_get( loCycBuf, lcVal );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cycbuf_4
// ================================================================================================ //
// ================================================================================================ //
// [ ut_cycbuf_5 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_5 )

vTry

    // Add unit test coder here
    tchar lszBuf[8] = {0x00};
    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );
    while( loCycBuf.Put(vT('A')) ){};
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    bool lbRet  = false;
    tchar lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lcVal = vT('1');
    lbRet = loCycBuf.Put( lcVal ); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('2')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('3')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('4')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('5')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('6')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('7')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('8')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('9')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    lbRet = loCycBuf.Put(vT('0')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_cycbuf_5
// ================================================================================================ //
// ================================================================================================ //
// ==  unit test frame tst_frame_cycbuf                                                          == //
// ================================================================================================ //
// [ tst_frame_cycbuf ] {{{
UT_FRAME_BEGIN ( tst_frame_cycbuf )
//UT_FRAME_REGIST( ut_cycbuf_1 )
//UT_FRAME_REGIST( ut_cycbuf_2 )
//UT_FRAME_REGIST( ut_cycbuf_3 )
UT_FRAME_REGIST( ut_cycbuf_4 )
//UT_FRAME_REGIST( ut_cycbuf_5 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cycbuf ]
// ================================================================================================ //
