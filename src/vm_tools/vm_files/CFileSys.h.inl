// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CFileSys.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-10-11 10:37:28                                               == //
// ==   Modify Time          : 2020-11-09 11:24:14                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILESYS_H_INL__
#define  __CFILESYS_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <unistd.h>

#include <vm_cfgs.h>
#include <vm_tools/vm_string.h>
// }}}


// ================================================================================================ //
// ==  Class CFileSys Construct && Destruct realization                                          == //
// ================================================================================================ //
// [ Class CFileSys Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileSys::CFileSys()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CFileSys::CFileSys(  ) 
    : mszFullName{0x00}, mszFilePath{0x00}, mszFileName{0x00}, mszFileBase{0x00}, mszFileExt{0x00}, mllErrCode(0)
// {{{
{
    //Analyz();
}
// }}} End of func CFileSys::CFileSys()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::CFileSys(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
// ==  Params  : cpName           - [I] File name
inline vm::CFileSys::CFileSys( _vIn_ const tchar* const cpName )
    : mszFullName{0x00}, mszFilePath{0x00}, mszFileName{0x00}, mszFileBase{0x00}, mszFileExt{0x00}, mllErrCode(0)
// {{{
{
    Analyz( cpName );
}
// }}} end of func CFileSys::CFileSys(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CFileSys::CFileSys()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CFileSys::~CFileSys(  )
// {{{
{
}
// }}} End of func CFileSys::~CFileSys()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::CFileSys()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CFileSys::CFileSys( const vm::CFileSys &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CFileSys::CFileSys()
// ================================================================================================ //

// }}} ![ Class CFileSys Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileSys operator realization                                                       == //
// ================================================================================================ //
// [ Class CFileSys operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileSys::operator = ()                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CFileSys&        - [O] this object
inline vm::CFileSys& vm::CFileSys::operator = ( const vm::CFileSys &obj )
// {{{
{
    vm::v_strcpy( mszFullName, sizeof(mszFullName), obj.mszFullName );
    vm::v_strcpy( mszFilePath, sizeof(mszFilePath), obj.mszFilePath );
    vm::v_strcpy( mszFileName, sizeof(mszFileName), obj.mszFileName );
    vm::v_strcpy( mszFileBase, sizeof(mszFileBase), obj.mszFileBase );
    vm::v_strcpy( mszFileExt , sizeof(mszFileExt ), obj.mszFileExt  );

    return *this;
}
// }}} End of func CFileSys::operator=()
// ================================================================================================ //

// }}} ![ Class CFileSys operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileSys Functional realization                                                     == //
// ================================================================================================ //
// [ Class CFileSys Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileSys::cs_fullname(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file full name string
// ==  Return  : const tchar*     - [O] File full name string
// ==  Params  : 
inline const tchar* vm::CFileSys::cs_fullname(  )
// {{{
{
    return mszFullName;
}
// }}} end of func CFileSys::cs_fullname(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::cs_filename(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file name string
// ==  Return  : const tchar*     - [O] File name string
// ==  Params  : 
inline const tchar* vm::CFileSys::cs_filename(  )
// {{{
{
    return mszFileName;
}
// }}} end of func CFileSys::cs_filename(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::cs_filebase(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file base name string
// ==  Return  : const tchar*     - [O] File base name string
// ==  Params  : 
inline const tchar* vm::CFileSys::cs_filebase(  )
// {{{
{
    return mszFileBase;
}
// }}} end of func CFileSys::cs_filebase(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::cs_filepath(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file path string
// ==  Return  : const tchar*     - [O] File path string
// ==  Params  : 
inline const tchar* vm::CFileSys::cs_filepath(  )
// {{{
{
    return mszFilePath;
}
// }}} end of func CFileSys::cs_filepath(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::cs_fileext(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : GEt file ext name string
// ==  Return  : const tchar*     - [O] File ext name string
// ==  Params  : 
inline const tchar* vm::CFileSys::cs_fileext(  )
// {{{
{
    return mszFileExt;
}
// }}} end of func CFileSys::cs_fileext(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::Analyz(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Analyz file name, file path, file ext, file base in file full name
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed
// ==  Params  : cpFileName       - [I] File name, include file full name and file name
inline bool vm::CFileSys::Analyz( _vIn_ const tchar* const cpFileName )
// {{{
{
    size_t lsztExecNameLen = 0;
    tchar* lpFName = const_cast<tchar*>(cpFileName);

    // if the string address is null, get current execute file's path
    if (cpFileName == nullptr)
    {
        // Get current execute file's path
        vMemZero(mszFilePath);
        lsztExecNameLen = CFileSys::GetExecFull(mszFullName, sizeof(mszFullName));
        if (lsztExecNameLen == 0)
        {
            mllErrCode = errno; 
            return false;
        }

        lpFName = mszFullName;
    } // End of if (cpFName == nullptr) ...

    // Check the string has direct struct or not
    bool lbHasDir = vm::CFileSys::HasDir(lpFName);
    if (lbHasDir == false)
    {
        // if it hasn't direct struct, get current execute file's direct as direct
        vMemZero(mszFilePath);
        size_t lsztDirLen = vm::CFileSys::GetExecPath(mszFilePath, sizeof(mszFilePath));
        if( lsztDirLen == 0 )
        {
            mllErrCode = errno;
            return false;
        }
        // rebuild the file's path with input file's string and current execute file's direct
        vMemZero(mszFullName);
        lsztExecNameLen = vm::v_sprintf(mszFullName, sizeof(mszFullName), vT("%s%c%s"), mszFilePath, _V_DIR_SPLITE_, lpFName);
    }
    else if (cpFileName != nullptr)
    {
        // if it has direct struct, use cpFileName as file's path
        vMemZero(mszFullName);
        lsztExecNameLen = vm::v_strcpy(mszFullName, sizeof(mszFullName), lpFName);
    }
    // End of if ( lbHasDir==false ) ...

//*

    // Get file's direct struct with path 
    vMemZero(mszFilePath);
    size_t lsztFileDir = vm::CFileSys::GetFilePath(mszFilePath, sizeof(mszFilePath), mszFullName, lsztExecNameLen);
    if (lsztFileDir == 0)
    {
        mllErrCode = errno; 
        return false;
    }

    // Get file's name with path
    vMemZero(mszFileName);
    size_t lsztFileName = vm::CFileSys::GetFileName(mszFileName, sizeof(mszFileName), mszFullName, lsztExecNameLen);
    if (lsztFileName == 0)
    {
        mllErrCode = errno; 
        return false;
    }

    // Check the string has ext name or not
    bool lbRetForHasExt = vm::CFileSys::HasExt(mszFullName);
    if (lbRetForHasExt == false)
    {
        // If it hasn't ext name, use file's name as base name
        vMemZero(mszFileBase);
        vm::v_strncpy(mszFileBase, sizeof(mszFileBase), mszFileName, lsztFileName);

        // Set file's exit name as null
        vMemZero(mszFileExt);

        return true;
    }
    // End of if (lbRetForHasExt==false) ...

    // Get file's base name with path
    vMemZero(mszFileBase);
    size_t lsztFileBase = vm::CFileSys::GetFileBase(mszFileBase, sizeof(mszFileBase), mszFullName, lsztExecNameLen);
    if (lsztFileBase == 0)
    {
        mllErrCode = errno; 
        return false;
    }

    // Get file's ext name with path
    vMemZero(mszFileExt);
    size_t lsztFileExt = vm::CFileSys::GetFileExt(mszFileExt, sizeof(mszFileExt), mszFullName, lsztExecNameLen);
    if (lsztFileExt == 0)
    {
        mllErrCode = errno; 
        return false;
    }
//*/
    return true;
}
// }}} end of func CFileSys::Analyz(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::HasDir(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Dicde it's dir struct in file name or not
// ==  Return  : bool             - [O] true  - It has dir in file name
// ==                                   false - It hasn't dir in file name
// ==  Params  : cpFileName       - [I] File name inputed
inline bool vm::CFileSys::HasDir( _vIn_ const tchar* const cpFileName )
// {{{
{
    // Find dir splite letter in file name string
    const tchar* lpRetForSplite = v_strrchr(const_cast<tchar*>(cpFileName), _V_DIR_SPLITE_);
    // Dicde It has dir in filename string, by dir splite letter
    if (lpRetForSplite == nullptr)
        return false;

    return true;
}
// }}} end of func CFileSys::HasDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::HasExt(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Dicde has ext flag in file name
// ==  Return  : bool             - [O] true  - It has ext in file name
// ==                                   false - It hasn't exit in file name
// ==  Params  : cpFileName       - [I] File name inputed
inline bool vm::CFileSys::HasExt( _vIn_ const tchar* const cpFileName )
// {{{
{
    // Find ext splite letter in file name string 
   const tchar* lpRetForSplite = v_strrchr(const_cast<tchar*>(cpFileName), _V_EXT_SPLITE_);
    // Decide It has ext flag in file name or not, by ext flag splite letter
    if (lpRetForSplite == nullptr)
        return false;

    // decide it included './' in file name string
    tchar lpNextChar = *(lpRetForSplite + 1);
    if ((lpNextChar == _V_DIR_SPLITE_))
    {
        return false;
    }

    // Decide it include '..//' in file name string
    tchar lpNextNextChar = *(lpRetForSplite + 2);
    if ((lpNextChar == _V_EXT_SPLITE_) && (lpNextNextChar == _V_DIR_SPLITE_))
    {
        return false;
    }

    return true;
}
// }}} end of func CFileSys::HasExt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetExecName(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current module name
// ==  Return  : size_t           - [O] Current module full name's length
// ==  Params  : pFullName        - [I] Current module Full name buffer
// ==            csztFullNameSize - [I] Current module full name buffer's size
inline size_t vm::CFileSys::GetExecFull( _vOt_ tchar* const pFullName, _vIn_ const size_t csztFullNameSize )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
// Win coders {{{
    // reset environment
    vm::v_memzero( pFullName, csztFullNameSize );

    // Get full path.
    size_t lsztFullNameLen = ::GetModuleFileName(NULL, pFullName, csztFullNameSize);
    return lsztFullNameLen;
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux codes {{{
    // reset environment
    vm::v_memzero( pFullName, csztFullNameSize );

    // Get current execut module full name
    if( ::readlink( "/proc/self/exe", pFullName, csztFullNameSize-1 ) == -1 )
        return 0;

    // Get current name length
    size_t lsztFullNameLen = vStrlen( pFullName );
    return lsztFullNameLen;
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
}
// }}} end of func CFileSys::GetExecName(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetExecPath(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current module file path
// ==  Return  : size_t           - [O] File path's length
// ==  Params  : pFilePath        - [O] File path buffer
// ==            csztFilePathSize - [I] File path buffer's size
inline size_t vm::CFileSys::GetExecPath( _vOt_ tchar* const pFilePath, _vIn_ const size_t csztFilePathSize )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
// Win coders {{{
    // reset environment
    vm::v_memzero( pFilePath, csztFilePathSize );

    // Get full path.
    size_t lsztFullNameLen = ::GetModuleFileName(NULL, pFullName, csztFullNameSize);
    // Get file path
    size_t lsztFilePathLen = vm::v_str_substr( pFilePath, lsztFullNameLen, vStrPosBegin, _V_DIR_SPLITE_ );
    return lsztFilePathLen;
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux codes {{{
    // reset environment
    vm::v_memzero( pFilePath, csztFilePathSize );

    // Get current execut module full name
    if( ::readlink( "/proc/self/exe", pFilePath, csztFilePathSize-1 ) == -1 )
        return 0;

    // Get current name length
    size_t lsztFullNameLen = vStrlen( pFilePath );

    // Get file path
    size_t lsztFilePathLen = vm::v_str_substr( pFilePath, lsztFullNameLen, vStrPosBegin, _V_DIR_SPLITE_ );
    return lsztFilePathLen;
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
}
// }}} end of func CFileSys::GetExecPath(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetExecName(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current module file name
// ==  Return  : size_t           - [O] File name's length
// ==  Params  : pFilePath        - [O] File name buffer
// ==            csztFilePathSize - [I] File name buffer's size
inline size_t vm::CFileSys::GetExecName( _vOt_ tchar* const pFileName, _vIn_ const size_t csztFileNameSize )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
// Win coders {{{
    // reset environment
    vm::v_memzero( pFileName, csztFileNameSize );

    // Get full path.
    size_t lsztFullNameLen = ::GetModuleFileName(NULL, pFullName, csztFullNameSize);
    // Get file name
    size_t lsztFileNameLen = vm::v_str_substr_last( pFileName, lsztFullNameLen, _V_DIR_SPLITE_, vStrPosEnded );
    return lsztFileNameLen;
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux codes {{{
    // reset environment
    vm::v_memzero( pFileName, csztFileNameSize );

    // Get current execut module full name
    if( ::readlink( "/proc/self/exe", pFileName, csztFileNameSize-1 ) == -1 )
        return 0;

    // Get current name length
    size_t lsztFullNameLen = vStrlen( pFileName );

    // Get file name
    size_t lsztFileNameLen = vm::v_str_substr_last( pFileName, lsztFullNameLen, _V_DIR_SPLITE_, vStrPosEnded );
    return lsztFileNameLen;
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
}
// }}} end of func CFileSys::GetExecName(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetFileName(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file name from file full name
// ==  Return  : size_t           - [O] File name's length
// ==  Params  : pFileName        - [O] File name buffer
// ==            csztFileNameSize - [I] File name buffer's length
// ==            cpFullName       - [I] File full name string
// ==            csztFullNameLen  - [I] File full name string's length
inline size_t vm::CFileSys::GetFileName( _vOt_       tchar* const pFileName , _vIn_ const size_t csztFileNameSize, 
                                         _vIn_ const tchar* const cpFullName, _vIn_ const size_t csztFullNameLen  )
// {{{
{
    size_t lsztFileNameLen = vm::v_str_substr_last(      pFileName, csztFileNameSize,
                                                        cpFullName, csztFullNameLen ,
                                                    _V_DIR_SPLITE_, vStrPosEnded    );
    return lsztFileNameLen;
}
// }}} end of func CFileSys::GetFileName(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetFileBase(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file base name from file full name
// ==  Return  : size_t           - [O] File base name
// ==  Params  : pFileBase        - [O] File base name buffer
// ==            csztFileBaseSize - [I] File base name buffer's size
// ==            cpFullName       - [I] File full name string
// ==            csztFullNameLen  - [I] File full name string's length
inline size_t vm::CFileSys::GetFileBase( _vOt_       tchar* const pFileBase , _vIn_ const size_t csztFileBaseSize, 
                                         _vIn_ const tchar* const cpFullName, _vIn_ const size_t csztFullNameLen  )
// {{{
{
    size_t lsztFileBaseLen = 0;
    if( vm::CFileSys::HasExt( cpFullName ) )
    {
        lsztFileBaseLen = vm::v_str_substr_last(      pFileBase, csztFileBaseSize,
                                                     cpFullName, csztFullNameLen ,
                                                 _V_DIR_SPLITE_, _V_EXT_SPLITE_    );
    }
    else
    {
        lsztFileBaseLen = vm::v_str_substr_last(      pFileBase, csztFileBaseSize,
                                                     cpFullName, csztFullNameLen ,
                                                 _V_DIR_SPLITE_, vStrPosEnded      );
    }
    return lsztFileBaseLen;
}
// }}} end of func CFileSys::GetFileBase(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetFilePath(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file path name from file full name
// ==  Return  : size_t           - [O] File path name's length
// ==  Params  : pFilePath        - [O] File path name buffer
// ==            csztFilePathSize - [I] File path name buffer's size
// ==            cpFullName       - [I] File full name string
// ==            csztFullNameLen  - [I] File full name string's length
inline size_t vm::CFileSys::GetFilePath( _vOt_       tchar* const pFilePath , _vIn_ const size_t csztFilePathSize, 
                                         _vIn_ const tchar* const cpFullName, _vIn_ const size_t csztFullNameLen  )
// {{{
{
    size_t lsztFilePathLen = vm::v_str_substr(    pFilePath, csztFilePathSize,
                                                 cpFullName, csztFullNameLen ,
                                               vStrPosBegin, _V_DIR_SPLITE_    );
    return lsztFilePathLen;
}
// }}} end of func CFileSys::GetFilePath(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetFileExt(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get file ext name from file full name
// ==  Return  : size_t           - [O] File ext  name's length
// ==  Params  : pFileExt         - [O] File ext  name buffer
// ==            csztFileExtSize  - [I] File ext  name buffer's size
// ==            cpFullName       - [I] File full name string
// ==            csztFullNameLen  - [I] File full name string's length
inline size_t vm::CFileSys::GetFileExt( _vOt_       tchar* const pFileExt  , _vIn_ const size_t csztFileExtSize, 
                                        _vIn_ const tchar* const cpFullName, _vIn_ const size_t csztFullNameLen  )
// {{{
{
    size_t lsztFileExtLen = 0;
    if( vm::CFileSys::HasExt( cpFullName ) )
    {
        lsztFileExtLen = vm::v_str_substr_last(       pFileExt, csztFileExtSize,
                                                    cpFullName, csztFullNameLen,
                                                _V_EXT_SPLITE_, vStrPosEnded     );
    }
    return lsztFileExtLen;
}
// }}} end of func CFileSys::GetFileExt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::Remove(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Remove a file
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed, use errno get failed info
// ==  Params  : cpFileName       - [X] # TODO : Add comment for cpFileName #
inline bool vm::CFileSys::Remove( _vIn_ const tchar* const cpFileName )
// {{{
{
    return vRemove( cpFileName ) == 0 ? true:false;
}
// }}} end of func CFileSys::Remove(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::Rename(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change file name
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed, use errno get failed info
// ==  Params  : cpOldName        - [I] Old file name
// ==            cpNewName        - [I] New file name
inline bool vm::CFileSys::Rename( _vIn_ const tchar* const cpOldName, _vIn_ const tchar* const cpNewName )
// {{{
{
    return vRename( cpOldName, cpNewName ) == 0 ? true:false;
}
// }}} end of func CFileSys::Rename(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::MkDir(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Make a dirtory
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed, use errno get failed info
// ==  Params  : cpDirName        - [I] Dirtory name
inline bool vm::CFileSys::MkDir( _vIn_ const tchar* const cpDirName, _vIn_ const tMode mode )
// {{{
{
    return vMkDir( cpDirName, mode ) == 0 ? true:false;
}
// }}} end of func CFileSys::MkDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::RmDir(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Remove a dirtory
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed, use errno get failed info
// ==  Params  : cpDirName        - [I] Dirtory name
inline bool vm::CFileSys::RmDir( _vIn_ const tchar* const cpDirName )
// {{{
{
    return vRmDir( cpDirName ) == 0 ? true:false;
}
// }}} end of func CFileSys::RmDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::ChgWorkDir(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Change current work dirtory
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed, use errno get failed info
// ==  Params  : cpWorkDir        - [I] New work dirtory
inline bool vm::CFileSys::ChgWorkDir( _vIn_ const tchar* const cpWorkDir )
// {{{
{
    int liRet = vChangeDir( cpWorkDir );
    if( liRet == -1L )
        return false;

    return true;
}
// }}} end of func CFileSys::ChgWorkDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::GetWorkDir(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current work dirtory
// ==  Return  : const tchar*     - [O] Current work dirtory
// ==  Params  : cpBuf            - [I] Buffer for work dirtory
// ==          : csztBufSize      - [I] Buffer's size
inline const tchar* vm::CFileSys::GetWorkDir( _vOt_ tchar* const cpBuf, _vIn_ const size_t csztBufSize )
// {{{
{
    vm::v_memzero( cpBuf, csztBufSize );
    return vGetCwd( cpBuf, csztBufSize );
}
// }}} end of func CFileSys::GetWorkDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::IsExist(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name is exist or not
// ==  Return  : int              - [O] 1   - file is existed
// ==                                   0   - file isn't existed
// ==                                   -1  - It has error, use errno for get error info
// ==  Params  : cpName           - [I] File name
inline int vm::CFileSys::IsExist( _vIn_ const tchar* const cpName )
// {{{
{
    int liRet = vAccess( cpName, _V_EX_ );
    if( liRet == 0 )
        return 1;

    tErrno leErr = errno;
    if( leErr == ENOENT )
        return 0;

    return -1;
}
// }}} end of func CFileSys::IsExist(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::IsBin(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name is exectable or not, (if cpName is dirtory, it's means can be searched)
// ==  Return  : int              - [O] 1   - file is existed
// ==                                   0   - file isn't existed
// ==                                   -1  - It has error, use errno for get error info
// ==  Params  : cpName           - [I] File name
inline int vm::CFileSys::IsBin( _vIn_ const tchar* const cpName )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
    struct _stat lstFileStat;
    int liRet = vStat( cpName, &lstFileStat );
    if( liRet == -1L )
        return -1L;

    if( vIsBin(lstFileStat.st_mode) )
        return 1;

    return 0;
#elif      ( _V_SYS_ == _V_LUX_ )
    int liRet = vAccess( cpName, _V_BN_ );
    if( liRet == 0 )
        return 1;

    tErrno leErr = errno;
    if( leErr == EACCES )
        return 0;

    return -1;
#endif // !( _V_SYS_ == _V_WIN_ )
}
// }}} end of func CFileSys::IsBin(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::IsDir(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name is dirtory or not
// ==  Return  : int              - [O] 1   - it is    dirtory.
// ==                                   0   - it isn't dirtory.
// ==                                   -1  - It has error, use errno for get error info
// ==  Params  : cpName           - [I] File name
inline int vm::CFileSys::IsDir( _vIn_ const tchar* const cpName )
// {{{
{
    struct vStat lstFileStat;
    int liRet = vStat( cpName, &lstFileStat );
    if( liRet == -1L )
        return -1L;

    if( vIsDir(lstFileStat.st_mode) )
        return 1;

    return 0;
}
// }}} end of func CFileSys::IsDir(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::IsFile(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name is file or not
// ==  Return  : int              - [O] 1   - it is    dirtory.
// ==                                   0   - it isn't dirtory.
// ==                                   -1  - It has error, use errno for get error info
// ==  Params  : cpName           - [I] File name
inline int vm::CFileSys::IsFile( _vIn_ const tchar* const cpName )
// {{{
{
    struct vStat lstFileStat;
    int liRet = vStat( cpName, &lstFileStat );
    if( liRet == -1L )
        return -1L;

    if( vIsReg(lstFileStat.st_mode) )
        return 1;

    return 0;
}
// }}} end of func CFileSys::IsFile(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::CanRead(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name has read right
// ==  Return  : bool             - [O] true  - it has read right.
// ==                                   false - it hasn't read right.
// ==  Params  : cpName           - [I] File name
inline bool vm::CFileSys::CanRead( _vIn_ const tchar* const cpName )
// {{{
{
    if( vAccess( cpName, _V_RD_ ) == 0 )
        return true;

    return false;
}
// }}} end of func CFileSys::CanRead(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::CanWrite(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide name has write right
// ==  Return  : bool             - [O] true  - it has write right.
// ==                                   false - it hasn't write right.
// ==  Params  : cpName           - [I] File name
inline bool vm::CFileSys::CanWrite( _vIn_ const tchar* const cpName )
// {{{
{
    if( vAccess( cpName, _V_WT_ ) == 0 )
        return true;

    return false;
}
// }}} end of func CFileSys::CanWrite(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileSys::CanReadWrite(...)                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Dicide name has write/read right
// ==  Return  : bool             - [O] true  - it has write/read right.
// ==                                   false - it hasn't write/read right.
// ==  Params  : cpName           - [I] File name
inline bool vm::CFileSys::CanReadWrite( _vIn_ const tchar* const cpName )
// {{{
{
    if( vAccess( cpName, _V_WR_ ) == 0 )
        return true;

    return false;
}
// }}} end of func CFileSys::CanReadWrite(...)
// ================================================================================================ //

// }}} ![ Class CFileSys Functional realization ]
// ================================================================================================ //


#endif // ! __CFILESYS_H_INL__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
