
#include <io.h>
#include <direct.h>
#include <errno.h>

#include <vm_cfgs.h>

#include <vm_tools/vm_cstr.h>

#include <vm_tools/vm_util/vm_util_mem.h>
#include <vm_tools/vm_util/vm_util_str.h>

#include <vm_tools/vm_file/vm_cfg_def_file.h>
#include <vm_tools/vm_file/CFileSys.h>

#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_filesys_1 ] {{{
UT_FUNC_BEGIN( ut_filesys_1 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    tchar lszFullName[256] = {0x00};
    size_t lsztFullNameLen = vm::CFileSys::GetExecFull( lszFullName, sizeof(lszFullName) );
    vPrintf( vT("Cur Full name (%03d): %s\n"), lsztFullNameLen, lszFullName );

    tchar lszCurFilePath[256] = {0x00};
    size_t lsztCurFilePathLen = vm::CFileSys::GetExecPath( lszCurFilePath, sizeof(lszCurFilePath) );
    vPrintf( vT("Cur file path (%03d): %s\n"), lsztCurFilePathLen, lszCurFilePath );

    tchar lszCurFileName[256] = {0x00};
    size_t lsztCurFileNameLen = vm::CFileSys::GetExecName( lszCurFileName, sizeof(lszCurFileName) );
    vPrintf( vT("Cur file name (%03d): %s\n"), lsztCurFileNameLen, lszCurFileName );

    tchar lszFilePath[256] = {0x00};
    size_t lsztFilePathLen = vm::CFileSys::GetFilePath( lszFilePath, sizeof(lszFilePath), lszFullName, lsztFullNameLen );
    vPrintf( vT("Path name (%03d): %s\n"), lsztFilePathLen, lszFilePath );

    tchar lszFileName[256] = {0x00};
    size_t lsztFileNameLen = vm::CFileSys::GetFileName( lszFileName, sizeof(lszFileName), lszFullName, lsztFullNameLen );
    vPrintf( vT("File name (%03d): %s\n"), lsztFileNameLen, lszFileName );

    tchar lszFileBase[256] = {0x00};
    size_t lsztFileBaseLen = vm::CFileSys::GetFileBase( lszFileBase, sizeof(lszFileBase), lszFullName, lsztFullNameLen );
    vPrintf( vT("Base name (%03d): %s\n"), lsztFileBaseLen, lszFileBase );

    tchar lszFileExt[256] = {0x00};
    size_t lsztFileExtLen = vm::CFileSys::GetFileExt  ( lszFileExt , sizeof(lszFileExt ), lszFullName, lsztFullNameLen );
    vPrintf( vT("Ext  name (%03d): %s\n"), lsztFileExtLen, lszFileExt );

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_1
// ================================================================================================ //

// ================================================================================================ //
// [ ut_filesys_2 ] {{{
UT_FUNC_BEGIN( ut_filesys_2 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    tchar lszFullName[256] = {0x00};
    size_t lsztFullNameLen = vm::CFileSys::GetExecFull( lszFullName, sizeof(lszFullName) );
    vPrintf( vT("Cur Full name (%03d): %s\n"), lsztFullNameLen, lszFullName );
    bool lbRet1 = vm::CFileSys::HasDir( lszFullName );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    bool lbRet2 = vm::CFileSys::HasExt( lszFullName );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName1[] = {vT("filename.ext")};
    vPrintf( vT("File name            : %s\n"), lszFileName1 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName1 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName1 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName2[] = {vT("filename")};
    vPrintf( vT("File name            : %s\n"), lszFileName2 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName2 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName2 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName3[] = {vT(".\\filename.ext")};
    vPrintf( vT("File name            : %s\n"), lszFileName3 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName3 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName3 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName4[] = {vT(".\\filename")};
    vPrintf( vT("File name            : %s\n"), lszFileName4 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName4 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName4 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName5[] = {vT("..\\filename.ext")};
    vPrintf( vT("File name            : %s\n"), lszFileName5 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName5 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName5 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    tchar lszFileName6[] = {vT("..\\filename")};
    vPrintf( vT("File name            : %s\n"), lszFileName6 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName6 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName6 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_2
// ================================================================================================ //

// ================================================================================================ //
// [ ut_filesys_3 ] {{{
UT_FUNC_BEGIN( ut_filesys_3 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    vm::CFileSys loFileSys;
    loFileSys.Analyz(  );
    vCout << vT("Full name : ") << loFileSys.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys1;
    loFileSys1.Analyz( vT("filename.ext") );
    vCout << vT("Full name : ") << loFileSys1.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys1.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys1.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys1.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys1.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys2;
    loFileSys2.Analyz( vT("filename") );
    vCout << vT("Full name : ") << loFileSys2.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys2.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys2.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys2.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys2.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys3;
    loFileSys3.Analyz( vT(".\\filename.ext") );
    vCout << vT("Full name : ") << loFileSys3.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys3.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys3.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys3.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys3.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys4;
    loFileSys4.Analyz( vT(".\\filename") );
    vCout << vT("Full name : ") << loFileSys4.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys4.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys4.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys4.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys4.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys5;
    loFileSys5.Analyz( vT("..\\filename.ext") );
    vCout << vT("Full name : ") << loFileSys5.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys5.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys5.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys5.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys5.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys6;
    loFileSys6.Analyz( vT("..\\filename") );
    vCout << vT("Full name : ") << loFileSys6.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys6.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys6.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys6.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys6.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys7;
    loFileSys7.Analyz( vT(".\\..\\filename.ext") );
    vCout << vT("Full name : ") << loFileSys7.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys7.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys7.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys7.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys7.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys8;
    loFileSys8.Analyz( vT(".\\..\\filename") );
    vCout << vT("Full name : ") << loFileSys8.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys8.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys8.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys8.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys8.cs_fileext()  << vEndl;
    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_3
// ================================================================================================ //

// ================================================================================================ //
// [ ut_filesys_4 ] {{{
UT_FUNC_BEGIN( ut_filesys_4 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    vm::CFileSys loFileSys;
    vCout << vT("Full name : ") << loFileSys.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys.cs_fileext()  << vEndl;

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_4
// ================================================================================================ //

// ================================================================================================ //
// [ ut_filesys_5 ] {{{
UT_FUNC_BEGIN( ut_filesys_5 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    vm::CFileSys loFileSys1;
    tchar* lpWorkDir = loFileSys1.GetWorkDir();
    vCout << vT("Cwd : ") << lpWorkDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( lpWorkDir ) ) << vEndl;

    vm::CString<256> lstrTstFile(lpWorkDir);
    lstrTstFile.Cat( vT("\\output") );
    vCout << vT("File : ") << *lstrTstFile << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrTstFile ) ) << vEndl;

    vm::CString<256> lstrBinDir(lpWorkDir);
    lstrBinDir.Cat( vT("\\bin") );
    vCout << vT("Dir : ") << *lstrBinDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrBinDir ) ) << vEndl;

    lstrBinDir.Cat( vT("\\tst_file.exe") );
    vCout << vT("Dir : ") << *lstrBinDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrBinDir ) ) << vEndl;

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_5
// ================================================================================================ //

// ================================================================================================ //
// [ ut_filesys_6 ] {{{
UT_FUNC_BEGIN( ut_filesys_6 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    vm::CFileSys loFileSys;
    vm::CString<256> lstrWorkDir = loFileSys.GetWorkDir();
    vCout << vT("Cur Dir : ") << *lstrWorkDir << vEndl;
    vm::CString<256> lstrNewDir( *lstrWorkDir );
    lstrNewDir + vT("\\bin") + vT("\\*.*");
    vCout << vT("New Dir : ") << *lstrNewDir << vEndl;
    loFileSys.ChangeWorkDir( *lstrNewDir );
    lstrWorkDir = loFileSys.GetWorkDir();
    vCout << vT("Cur Dir : ") << *lstrWorkDir << vEndl;

    vm::CString<128> lstrTmp1 = lstrWorkDir;
    vCout << vT("Tmp1 :") << *lstrTmp1 << vT(" Size : ") << lstrTmp1.size() << vEndl;
    vm::CString<128> lstrTmp2;
    lstrTmp2 = lstrWorkDir;
    lstrTmp2 += vT('\\');
    vCout << vT("Tmp2 :") << *lstrTmp2 << vT(" Size : ") << lstrTmp2.size() << vEndl;

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filesys_6
// ================================================================================================ //

// ================================================================================================ //
// ==   unit test frame tst_frame_filesys                                                        == //
// ================================================================================================ //
// [ tst_frame_filesys ] {{{
UT_FRAME_BEGIN ( tst_frame_filesys )
UT_FRAME_REGIST( ut_filesys_6 )
UT_FRAME_REGIST( ut_filesys_5 )
UT_FRAME_REGIST( ut_filesys_4 )
UT_FRAME_REGIST( ut_filesys_3 )
UT_FRAME_REGIST( ut_filesys_2 )
UT_FRAME_REGIST( ut_filesys_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_filesys ]
// ================================================================================================ //
