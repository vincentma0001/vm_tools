// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CFileSys.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:09:55                                               == //
// ==   Modify Time          : 2020-11-09 11:42:55                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILESYS_H__
#define  __CFILESYS_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CFileSys : This class deal with file systime operation                              == //
// ------------------------------------------------------------------------------------------------ //
class CFileSys
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CFileSys();
    inline          CFileSys( const tchar* const cpFileName );
    // Destruct define
    inline virtual ~CFileSys();

private:
    // Copy construct define
    inline CFileSys( const CFileSys &obj );
    // Assignment operation
    inline CFileSys& operator = ( const CFileSys &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // file full name
    tchar       mszFullName[  _V_FILE_MAX_PATH_ ];
    // file path
    tchar       mszFilePath[  _V_FILE_MAX_DIR_  ];
    // file name
    tchar       mszFileName[ _V_FILE_MAX_FNAME_ ];
    // file base name
    tchar       mszFileBase[ _V_FILE_MAX_FNAME_ ];
    // file ext
    tchar       mszFileExt [  _V_FILE_MAX_EXT_  ];

    // Error code
    long long   mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // [ Get filesys string ] {{{
    // Get file full name string
    inline const tchar* cs_fullname();
    // Get file name string.
    inline const tchar* cs_filename();
    // Get file base name string
    inline const tchar* cs_filebase();
    // Get file path name string
    inline const tchar* cs_filepath();
    // Get file ext  name string
    inline const tchar* cs_fileext ();
    // }}}

    // [ AnlySis file name ] {{{
    // Anlysis file name
    inline bool Analyz ( _vIn_ const tchar* const cpFullName = nullptr );
    // }}}

public:
    // [ Check file full name funcs ] {{{
    // Check has path name in file name or not
    static inline bool HasDir  ( _vIn_ const tchar* const cpFileName );
    // Check has ext in file name or not
    static inline bool HasExt  ( _vIn_ const tchar* const cpFileName );
    // }}}

    // [ Get file names funcs ] {{{
    // Get file name from file full name
    static inline size_t GetFileName( _vOt_       tchar* const pFileName , _vIn_ const size_t csztFileNameSize,
                                      _vIn_ const tchar* const cpFullName, _vIn_ const size_t csztFullNameLen   );
    // Get file base name from file full name
    static inline size_t GetFileBase( _vOt_       tchar* const pFileBase , _vIn_ const size_t csztFileBaseSize,
                                      _vIn_ const tchar* const cpFileName, _vIn_ const size_t csztFullNameLen   );
    // Get File path name from file full name
    static inline size_t GetFilePath( _vOt_       tchar* const pFilePath , _vIn_ const size_t csztFilePathSize,
                                      _vIn_ const tchar* const cpFileName, _vIn_ const size_t csztFullNameLen   );
    // Get file type name from file full name
    static inline size_t GetFileExt ( _vOt_       tchar* const pFileExt  , _vIn_ const size_t csztFileExtSize ,
                                      _vIn_ const tchar* const cpFileName, _vIn_ const size_t csztFullNameLen   );
    // }}}

    // [ Get current funcs ] {{{
    // Get current module full name
    static inline size_t GetExecFull( _vOt_ tchar* const pFullName, _vIn_ const size_t csztFullNameSize );
    // Get current module file path
    static inline size_t GetExecPath( _vOt_ tchar* const pPathName, _vIn_ const size_t csztPathNameSize );
    // Get current module file name
    static inline size_t GetExecName( _vOt_ tchar* const pFileName, _vIn_ const size_t csztFileNameSize );
    // }}}

    // [ Dir && file funcs ] {{{
    // Remove a file by name
    static inline bool         Remove     ( _vIn_ const tchar* const cpFileName                                     );
    // Rename file name from oldname to newname
    static inline bool         Rename     ( _vIn_ const tchar* const  cpOldName, _vIn_ const tchar* const cpNewName );
    // Make dirtory
    static inline bool         MkDir      ( _vIn_ const tchar* const  cpDirName, _vIn_ const tMode             mode );
    // Remove dirtory
    static inline bool         RmDir      ( _vIn_ const tchar* const  cpDirName                                     );
    // Change current work dirtory
    static inline bool         ChgWorkDir ( _vIn_ const tchar* const  cpWorkDir                                     );
    // Get curent work dirtory
    static inline const tchar* GetWorkDir ( _vIn_       tchar* const      cpBuf, _vIn_ const size_t     csztBufSize );
    // }}}

    // [ IsXXX funcs && CanXXX funcs ] {{{
    // Decide name is exist or not    , 1 is exist, 0 isn;t exist, -1 error.
    static inline int IsExist( _vIn_ const tchar* const cpName );
    // Decide name is exectable or not, 1 is bin  , 0 isn's bin  , -1 error. if cpName is dirtory, it's means can be searched
    static inline int IsBin  ( _vIn_ const tchar* const cpName );
    // Decide name is dirtory or not  , 1 is dir  , 0 isn't dir  , -1 error.
    static inline int IsDir  ( _vIn_ const tchar* const cpName );
    // Decide name is file or not     , 1 is file , 0 isn'f file , -1 error.
    static inline int IsFile ( _vIn_ const tchar* const cpName );

    // Dicide name has read right
    static inline bool CanRead      ( _vIn_ const tchar* const cpName );
    // Dicide name has write right
    static inline bool CanWrite     ( _vIn_ const tchar* const cpName );
    // Dicide name has write/read right
    static inline bool CanReadWrite ( _vIn_ const tchar* const cpName );
    // }}}

// }}} ! Methods

};
// }}} ! [ class CFileSys ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CFileSys.h.inl"
// ================================================================================================ //

#endif // ! __CFILESYS_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
