
#include <vm_cfgs.h>

#include <vm_tools/vm_files.h>
#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_filesys_1 ] {{{
UT_FUNC_BEGIN( ut_filesys_1 )

vTry

    // Add unit test coder here
    tchar lszFullName[256] = {0x00};
    size_t lsztFullNameLen = vm::CFileSys::GetExecFull( lszFullName, sizeof(lszFullName) );
    vPrintf( vT("Cur Full name (%03zd): %s\n"), lsztFullNameLen, lszFullName );

    tchar lszCurFilePath[256] = {0x00};
    size_t lsztCurFilePathLen = vm::CFileSys::GetExecPath( lszCurFilePath, sizeof(lszCurFilePath) );
    vPrintf( vT("Cur file path (%03zd): %s\n"), lsztCurFilePathLen, lszCurFilePath );

    tchar lszCurFileName[256] = {0x00};
    size_t lsztCurFileNameLen = vm::CFileSys::GetExecName( lszCurFileName, sizeof(lszCurFileName) );
    vPrintf( vT("Cur file name (%03zd): %s\n"), lsztCurFileNameLen, lszCurFileName );

    tchar lszFilePath[256] = {0x00};
    size_t lsztFilePathLen = vm::CFileSys::GetFilePath( lszFilePath, sizeof(lszFilePath), lszFullName, lsztFullNameLen );
    vPrintf( vT("Path name (%03zd): %s\n"), lsztFilePathLen, lszFilePath );

    tchar lszFileName[256] = {0x00};
    size_t lsztFileNameLen = vm::CFileSys::GetFileName( lszFileName, sizeof(lszFileName), lszFullName, lsztFullNameLen );
    vPrintf( vT("File name (%03zd): %s\n"), lsztFileNameLen, lszFileName );

    tchar lszFileBase[256] = {0x00};
    size_t lsztFileBaseLen = vm::CFileSys::GetFileBase( lszFileBase, sizeof(lszFileBase), lszFullName, lsztFullNameLen );
    vPrintf( vT("Base name (%03zd): %s\n"), lsztFileBaseLen, lszFileBase );

    tchar lszFileExt[256] = {0x00};
    size_t lsztFileExtLen = vm::CFileSys::GetFileExt  ( lszFileExt , sizeof(lszFileExt ), lszFullName, lsztFullNameLen );
    vPrintf( vT("Ext  name (%03zd): %s\n"), lsztFileExtLen, lszFileExt );

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

    // Add unit test coder here
    tchar lszFullName[256] = {0x00};
    size_t lsztFullNameLen = vm::CFileSys::GetExecFull( lszFullName, sizeof(lszFullName) );
    vPrintf( vT("Cur Full name (%03zd): %s\n"), lsztFullNameLen, lszFullName );
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

#if        ( _V_SYS_ == _V_WIN_ )
    tchar lszFileName3[] = {vT(".\\filename.ext")};
#elif      ( _V_SYS_ == _V_LUX_ )
    tchar lszFileName3[] = {vT("./filename.ext")};
#endif // !( _V_SYS_ == _V_WIN_ )
    vPrintf( vT("File name            : %s\n"), lszFileName3 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName3 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName3 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

#if        ( _V_SYS_ == _V_WIN_ )
    tchar lszFileName4[] = {vT(".\\filename")};
#elif      ( _V_SYS_ == _V_LUX_ )
    tchar lszFileName4[] = {vT("./filename")};
#endif // !( _V_SYS_ == _V_WIN_ )
    vPrintf( vT("File name            : %s\n"), lszFileName4 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName4 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName4 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

#if        ( _V_SYS_ == _V_WIN_ )
    tchar lszFileName5[] = {vT("..\\filename.ext")};
#elif      ( _V_SYS_ == _V_LUX_ )
    tchar lszFileName5[] = {vT("../filename.ext")};
#endif // !( _V_SYS_ == _V_WIN_ )
    vPrintf( vT("File name            : %s\n"), lszFileName5 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName5 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName5 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

#if        ( _V_SYS_ == _V_WIN_ )
    tchar lszFileName6[] = {vT("..\\filename")};
#elif      ( _V_SYS_ == _V_LUX_ )
    tchar lszFileName6[] = {vT("../filename")};
#endif // !( _V_SYS_ == _V_WIN_ )
    vPrintf( vT("File name            : %s\n"), lszFileName6 );
    lbRet1 = vm::CFileSys::HasDir( lszFileName6 );
    vPrintf( vT("Has path in filename : %s\n"), (lbRet1==true?vT("true"):vT("false")) );
    lbRet2 = vm::CFileSys::HasExt( lszFileName6 );
    vPrintf( vT("Has ext  in filename : %s\n"), (lbRet2==true?vT("true"):vT("false")) );

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

    bool lbRet = 0;

    // Add unit test coder here
    vm::CFileSys loFileSys;
    lbRet = loFileSys.Analyz(  );
    vCout << vT("Analyz 0 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys1;
    lbRet = loFileSys1.Analyz( vT("filename.ext") );
    vCout << vT("Analyz 1 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys1.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys1.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys1.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys1.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys1.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys2;
    lbRet =loFileSys2.Analyz( vT("filename") );
    vCout << vT("Analyz 2 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys2.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys2.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys2.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys2.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys2.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys3;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys3.Analyz( vT(".\\filename.ext") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys3.Analyz( vT("./filename.ext") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 3 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys3.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys3.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys3.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys3.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys3.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys4;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys4.Analyz( vT(".\\filename") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys4.Analyz( vT("./filename") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 4 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys4.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys4.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys4.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys4.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys4.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys5;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys5.Analyz( vT("..\\filename.ext") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys5.Analyz( vT("../filename.ext") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 5 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys5.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys5.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys5.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys5.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys5.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys6;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys6.Analyz( vT("..\\filename") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys6.Analyz( vT("../filename") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 6 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys6.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys6.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys6.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys6.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys6.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys7;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys7.Analyz( vT(".\\..\\filename.ext") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys7.Analyz( vT("./../filename.ext") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 7 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys7.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys7.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys7.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys7.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys7.cs_fileext()  << vEndl;

    vm::CFileSys loFileSys8;
#if        ( _V_SYS_ == _V_WIN_ )
    lbRet = loFileSys8.Analyz( vT(".\\..\\filename") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lbRet = loFileSys8.Analyz( vT("./../filename") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Analyz 8 return : ") << vStrBool(lbRet) << vEndl;
    vCout << vT("Full name : ") << loFileSys8.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys8.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys8.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys8.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys8.cs_fileext()  << vEndl;
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

    // Add unit test coder here
    vm::CFileSys loFileSys(nullptr);
    vCout << vT("Full name : ") << loFileSys.cs_fullname() << vEndl;
    vCout << vT("File path : ") << loFileSys.cs_filepath() << vEndl;
    vCout << vT("File name : ") << loFileSys.cs_filename() << vEndl;
    vCout << vT("File base : ") << loFileSys.cs_filebase() << vEndl;
    vCout << vT("File ext  : ") << loFileSys.cs_fileext()  << vEndl;

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

    // Add unit test coder here
    tchar lszWorDir[256]   = {0x00};
    vm::CFileSys loFileSys1;
    const tchar* lpWorkDir = vm::CFileSys::GetWorkDir(lszWorDir, sizeof(lszWorDir));
    vCout << vT("Cwd : ") << lpWorkDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( lpWorkDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( lpWorkDir ) ) << vEndl;

    vm::CString<256> lstrTstFile(lpWorkDir);
#if        ( _V_SYS_ == _V_WIN_ )
    lstrTstFile.Cat( vT("\\output") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lstrTstFile.Cat( vT("/output") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("File : ") << *lstrTstFile << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrTstFile ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrTstFile ) ) << vEndl;

    vm::CString<256> lstrBinDir(lpWorkDir);
#if        ( _V_SYS_ == _V_WIN_ )
    lstrBinDir.Cat( vT("\\bin") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lstrBinDir.Cat( vT("/bin") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Dir : ") << *lstrBinDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrBinDir ) ) << vEndl;

#if        ( _V_SYS_ == _V_WIN_ )
    lstrBinDir.Cat( vT("\\tst_file.exe") );
#elif      ( _V_SYS_ == _V_LUX_ )
    lstrBinDir.Cat( vT("/tst_file") );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("Dir : ") << *lstrBinDir << vEndl;
    vCout << vT("Is Exist : ") << vStrItoB( loFileSys1.IsExist ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is dir   : ") << vStrItoB( loFileSys1.IsDir   ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is file  : ") << vStrItoB( loFileSys1.IsFile  ( *lstrBinDir ) ) << vEndl;
    vCout << vT("Is bin   : ") << vStrItoB( loFileSys1.IsBin   ( *lstrBinDir ) ) << vEndl;

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

    // Add unit test coder here
    tchar lszWorDir[256] = {0x00};
    const tchar* lpWorkDir = vm::CFileSys::GetWorkDir(lszWorDir, sizeof(lszWorDir) );

    vm::CString<256> lstrWorkDir(lpWorkDir);
    vCout << vT("Cur Dir : ") << *lstrWorkDir << vEndl;

    vm::CString<256> lstrNewDir( *lstrWorkDir );
#if        ( _V_SYS_ == _V_WIN_ )
    lstrNewDir + vT( "\\bin" );
#elif      ( _V_SYS_ == _V_LUX_ )
    lstrNewDir + vT( "/bin"  );
#endif // !( _V_SYS_ == _V_WIN_ )
    vCout << vT("New Dir : ") << *lstrNewDir << vEndl;
    vm::CFileSys::ChgWorkDir( *lstrNewDir);

    tchar lszNewWorkDir[256] = {0x00};
    vm::CFileSys::GetWorkDir( lszNewWorkDir, sizeof(lszNewWorkDir) );
    vCout << vT("Cur Dir : ") << lszNewWorkDir << vEndl;

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
UT_FRAME_REGIST( ut_filesys_1 )
UT_FRAME_REGIST( ut_filesys_2 )
UT_FRAME_REGIST( ut_filesys_3 )
UT_FRAME_REGIST( ut_filesys_4 )
UT_FRAME_REGIST( ut_filesys_5 )
UT_FRAME_REGIST( ut_filesys_6 )
UT_FRAME_ENDED
// }}} ![ tst_frame_filesys ]
// ================================================================================================ //
