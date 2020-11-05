
#include "vm_tools/vm_cmem/CCycBufPtr.h"
#include "vm_tools/vm_cmem/CMemMgr.h"
#include <vm_tools/vm_cmem.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_cycbuf_1 ] {{{
UT_FUNC_BEGIN( ut_cycbuf_1 )

vTry

    // Add unit test coder here
    tchar lszBuf[64] = { vT("This is a test!") };
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
    vMemZero( lszBuf );

    vm::CCycBufPtr loCycBuf( lszBuf, sizeof(lszBuf) );
    vPrintf( vT("Cycbuf : size(%lu) used(%lu) unused(%lu)\n"), loCycBuf.Size(), loCycBuf.SizeUsed(), loCycBuf.SizeUnused() );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

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
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    bool lbRet = false;
    lbRet = loCycBuf.Put( vT('1') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('2') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('3') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('4') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('5') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('6') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('7') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('8') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lbRet = loCycBuf.Put( vT('9') );
    vPrintf( vT("Put %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
    

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
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
    bool lbRet  = false;
    tchar lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    lcVal = 0;
    lbRet = loCycBuf.Get(lcVal);
    vPrintf( vT("Get(%c) %s, Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), lcVal, vStrBool(lbRet),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );
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
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"),
            loCycBuf.SizeUsed(),loCycBuf.SizeUnused(),
            loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
    vm::CMemMgr::Output<32,8>( stdout, lszBuf,sizeof(lszBuf) );

    bool  lbRet = false;
    tchar lcVal = 0;
    lbRet = loCycBuf.Put(vT('A')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('B')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('C')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('D')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('E')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('F')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('G')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('H')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('I')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('J')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('K')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('L')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('M')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('N')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('O')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('P')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );

    lcVal = 0;
    lbRet = loCycBuf.Put(vT('Q')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Put(vT('S')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    lbRet = loCycBuf.Get( lcVal ); if(lbRet == false){ vPrintf(vT("Get falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
    vPrintf( vT("Buf(Used:%lu Unused:%lu), Pos[%u:%u]\n"), loCycBuf.SizeUsed(),loCycBuf.SizeUnused(), loCycBuf.StartPos() ,loCycBuf.EndedPos()    );
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
    lbRet = loCycBuf.Put(vT('1')); if(lbRet == false){ vPrintf(vT("Put falsed!\n")); }else{ vm::CMemMgr::Output<32,8>(stdout,lszBuf,sizeof(lszBuf)); }
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
UT_FRAME_REGIST( ut_cycbuf_2 )
UT_FRAME_REGIST( ut_cycbuf_3 )
UT_FRAME_REGIST( ut_cycbuf_4 )
UT_FRAME_REGIST( ut_cycbuf_5 )
UT_FRAME_ENDED
// }}} ![ tst_frame_cycbuf ]
// ================================================================================================ //