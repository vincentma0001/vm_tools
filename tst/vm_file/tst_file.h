
#include "vm_tools/vm_error/CSysErr.hpp"
#include <vm_cfgs.h>

#include <vm_tools/vm_error.h>
#include <vm_tools/vm_files.h>
#include <vm_tools/vm_util.h>

#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_file_open_1 ] {{{
UT_FUNC_BEGIN( ut_file_open_1 )

vTry

    // Add unit test coder here
    vm::CFile loFile;
    bool lbRet = loFile.Open( vT("Example.txt"), vT("r") );
    if( lbRet != true )
    {
        vm::CSysErr<1024> loErr(loFile.mllErrCode);
        vCout<< vT("Open file failed! [")<< loErr.toCode() << vT(":") << loErr.toString()<< vT("]") << vEndl;
    }

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_file_open_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_file_open_2 ] {{{
UT_FUNC_BEGIN( ut_file_open_2 )

vTry

    // Add unit test coder here
    vTry
        vm::CFile loFile;
        loFile.Open( vT("Example1.txt"), vT("r") );
//        vErrThrow( _V_CERR_DFT_BUF_SIZE_, loFile.mllErrCode );
        loFile.Close();
    vCatch( tchar* lpStrErr )
        vCout << vT("Catch error message! [") << lpStrErr << vT("]") << vEndl;
    vEnd;

vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_file_open_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_file_write_1 ] {{{
UT_FUNC_BEGIN( ut_file_write_1 )

vTry

    // Add unit test coder here
    vTry
        vm::CFile loFile;
        loFile.Open( vT("Example_w1.txt"), vT("w") );
//        vErrThrow( _V_CERR_DFT_BUF_SIZE_, loFile.mllErrCode );
//        loFile << vT("This is a        text line for write string!") << vFEndl;
//        vErrThrow( _V_CERR_DFT_BUF_SIZE_, loFile.mllErrCode );
//        loFile << vT('E') << vT('\n');
//        vErrThrow( _V_CERR_DFT_BUF_SIZE_, loFile.mllErrCode );
//        loFile << vT("This is an other text line for write string!") << vFEndl;
//        vErrThrow( _V_CERR_DFT_BUF_SIZE_, loFile.mllErrCode );
        loFile.Line ( vT("This is test for write %d:%s"), 10, vT("Tst string") );
        loFile.Write( vT("This is test for write %d:%s"), 10, vT("Tst string") );
        loFile.Put( vT("EEE") );
    vCatch( tchar* lpStrErr )
        vCout << vT("Catch error message! [") << lpStrErr << vT("]") << vEndl;
    vEnd;

vCatch(...)
   return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_file_write_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_file_error_1 ] {{{
UT_FUNC_BEGIN( ut_file_error_1 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_file_error_1
// ================================================================================================ //

// ================================================================================================ //
// ==  unit test frame tst_frame_file                                                            == //
// ================================================================================================ //
// [ tst_frame_file ] {{{
UT_FRAME_BEGIN ( tst_frame_file )
UT_FRAME_REGIST( ut_file_write_1 )
UT_FRAME_REGIST( ut_file_open_2 )
UT_FRAME_REGIST( ut_file_open_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_file ]
// ================================================================================================ //
