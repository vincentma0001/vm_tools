// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CFile.h.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:12:32                                               == //
// ==   Modify Time          : 2020-11-12 13:11:10                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILE_H_INL__
#define  __CFILE_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "CFileMode.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFile Construct && Destruct realization                                             == //
// ================================================================================================ //
// [ Class CFile Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CFile::CFile()                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CFile::CFile(  ) : mpFile(nullptr),mllErrCode(0)
// {{{
{
}
// }}} End of func CFile::CFile()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CFile::CFile()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CFile::~CFile(  )
// {{{
{
}
// }}} End of func CFile::~CFile()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::CFile()                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CFile::CFile( const vm::CFile &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CFile::CFile()
// ================================================================================================ //

// }}} ![ Class CFile Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFile operator realization                                                          == //
// ================================================================================================ //
// [ Class CFile operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CFile::operator = ()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CFile&           - [O] this object
inline vm::CFile& vm::CFile::operator = ( const vm::CFile &obj )
// {{{
{
    return *this;
}
// }}} End of func CFile::operator=()
// ================================================================================================ //

// }}} ![ Class CFile operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFile Functional realization                                                        == //
// ================================================================================================ //
// [ Class CFile Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CFile::HasErr(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check has eror in file stream or not
// ==  Return  : bool             - [O] true  - has error in file stream
// ==                                   false - hasn't error in file stream 
// ==  Params  : 
inline bool vm::CFile::HasErr(  )
// {{{
{
    int liRet = ferror(mpFile);
    if(liRet==0)
        return true;
    
    mllErrCode = liRet;
    return false;
}
// }}} end of func CFile::HasErr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::IsEof(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check it's file stream's
// ==  Return  : bool             - [O] true  - file stream is end
// ==                                   false - file stream isn't end
// ==  Params  : 
inline bool vm::CFile::IsEof(  )
// {{{
{
    if(feof(mpFile)==0)
        return true;
    
    return false;
}
// }}} end of func CFile::IsEof(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Open(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Open a file, with string modes.
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed
// ==  Params  : cpName           - [I] File name
// ==            cpMode           - [I] Open mode
// ==  Modes   : read        - 'r',
// ==            write       - 'w',
// ==            append      - 'a',
// ==            update      - '+',
// ==            binary file - 'b',
// ==            text file   - 't',
// ==            file exist  - 'x'
inline bool vm::CFile::Open( _vIn_ const tchar* const cpName, const tchar* const cpMode )
// {{{
{
#if defined( _MSC_VER_ ) && ( _V_STD_VER_ >=11 )
    tErrno loRet = vFopen_s( &mpFile, cpName, cpMode );
    if( loRet != 0 )
    {
        mllErrCode = loRet;
        return false;
    }
#else
    mpFile = vFopen( cpName, cpMode );
    if( mpFile == nullptr )
    {
        mllErrCode = errno;
        return false;
    } // End of if (...)
#endif

    return true;
}
// }}} end of func CFile::Open(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Open(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Open a file, with emFileMode
// ==  Return  : bool             - [O] true  - for sucess
// ==                                   false - for failed
// ==  Params  : cpName           - [I] File name
// ==            csMode           - [I] Open Mode
// ==  Modes   : read        - emRead,
// ==            write       - emWrite,
// ==            append      - emAppend,
// ==            update      - emUpdate,
// ==            binary file - emBinary,
// ==            text file   - emText,
// ==            file exist  - emExist
inline bool vm::CFile::Open( _vIn_ const tchar* const cpName, _vIn_ const short csMode )
// {{{
{
    vm::CFileMode loFileMode;
#if defined( _MSC_VER_ ) && ( _V_STD_VER_ >=11 )
    tErrno loRet = vFopen_s( &mpFile, cpName, loFileMode.Tranformat(csMode) );
    if( loRet != 0 )
    {
        mllErrCode = loRet;
        return false;
    }
#else
    mpFile       = vFopen( cpName, loFileMode.Tranformat(csMode) );
    if( mpFile == nullptr )
    {
        mllErrCode = errno;
        return false;
    } // End of if (...)
#endif

    return true;
}
// }}} end of func CFile::Open(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Close(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Close a file
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : 
inline void vm::CFile::Close(  )
// {{{
{
    if( mpFile!=nullptr )
        vFclose( mpFile );

    mpFile = nullptr;
}
// }}} end of func CFile::Close(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Temp(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a temp file
// ==  Return  : bool             - [O] true  - create sucess
// ==                                   false - create failed, mllErrCode will be setting
inline bool vm::CFile::Temp(  )
// {{{
{
    if( mpFile != nullptr )
        return false;
    
    mpFile = ::tmpfile();
    if( mpFile == nullptr )
    {
        mllErrCode = errno;
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Temp(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a tchar letter to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cVal             - [I] inputer letter
inline bool vm::CFile::Put( _vIn_ const tchar cVal )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = vFputc( cVal, mpFile );
    if( liRet == vFEOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put_c(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a char letter to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cVal             - [I] input letter
inline bool vm::CFile::Put_c( _vIn_ const char cVal )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = fputc( cVal, mpFile );
    if( liRet == EOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put_w(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a wchar letter to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cVal             - [I] input letter
inline bool vm::CFile::Put_w( _vIn_ const wchar_t cVal )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = fputwc( cVal, mpFile );
    if( liRet == WEOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a tchar string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - wrtie failed
// ==  Params  : cpStr            - [I] input string
inline bool vm::CFile::Put( _vIn_ const tchar* cpStr )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = vFputs( cpStr, mpFile );
    if( liRet == vFEOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put_c(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a char string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpStr            - [I] input string
inline bool vm::CFile::Put_c( _vIn_ const char* const cpStr )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = fputs( cpStr, mpFile );
    if( liRet == EOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Put_w(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a wchar string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpStr            - [I] input string
inline bool vm::CFile::Put_w( _vIn_ const wchar_t* const cpStr )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = fputws( cpStr, mpFile );
    if( liRet == WEOF )
    {
        HasErr();
        return false;
    }
    
    return true;
}
// }}} end of func CFile::Put_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated string to file stream
// ==  Return  : bool             - [O] true  - wrire sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Write( _vIn_ const tchar* const cpFmt, _vIn_ ... )
// {{{
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Write( cpFmt, vList );
    va_end( vList );
    
    return lbRet;
}
// }}} end of func CFile::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated string to file stream
// ==  Return  : bool             - [O] true  - wrire sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Write( _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = vVfprintf( mpFile, cpFmt, vList );
    if( liRet <= 0 )
    {
        HasErr();
        return false;
    } // End of if(...
    
    return true;
}
// }}} end of func CFile::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated string line to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Line( _vIn_ const tchar* const cpFmt, _vIn_ ... )
// {{{
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Line( cpFmt, vList );
    va_end( vList );
    
    return lbRet;
}
// }}} end of func CFile::Line(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line(...)                                                                == //
// == ---------------------------------------------------------------- == //
// ==  Brief   : Write a formated string line to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Line( const tchar* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    bool lbRetForWrite = Write( cpFmt, vList );
    if( lbRetForWrite == false )
        return false;
    
    bool lbRetForPutC = Put( vT('\n') );
    if( lbRetForPutC == false )
        return false;
    
    return true;
}
// }}} end of func CFile::Line(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write_c(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated char string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Write_c( _vIn_ const char* const cpFmt, _vIn_ ... )
// {{{
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Write_c( cpFmt, vList );
    va_end( vList );
    
    return lbRet;
}
// }}} end of func CFile::Write_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write_c(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated char string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Write_c( _vIn_ const char* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = vfprintf( mpFile, cpFmt, vList );
    if( liRet <= 0 )
    {
        HasErr();
        return false;
    } // End of if(...
    
    return true;
}
// }}} end of func CFile::Write_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line_c(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated char string line to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Line_c( _vIn_ const char* const cpFmt, _vIn_ ... )
// {{{
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Line_c( cpFmt, vList );
    va_end( vList );
    
    return lbRet;
}
// }}} end of func CFile::Line_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line_c(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated char string line to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Line_c( _vIn_ const char* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    bool lbRetForWrite = Write_c( cpFmt, vList );
    if( lbRetForWrite == false )
        return false;
    
    bool lbRetForPutC = Put_c( '\n' );
    if( lbRetForPutC == false )
        return false;
    
    return true;
}
// }}} end of func CFile::Line_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write_w(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated wchar string to file stream
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Write_w( _vIn_ const wchar_t* const cpFmt, _vIn_ ... )
// {{{
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Write_w( cpFmt, vList );
    va_end( vList );

    return lbRet;
}
// }}} end of func CFile::Write_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Write_w(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated wchar string to file steam
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Write_w( _vIn_ const wchar_t* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    if( mpFile == nullptr )
        return false;
    
    int liRet = vfwprintf( mpFile, cpFmt, vList );
    if( liRet <= 0 )
    {
        HasErr();
        return false;
    } // End of if(...
    
    return true;
}
// }}} end of func CFile::Write_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line_w(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated wchar string line to file steam
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            ...              - [I] input string's format paramters
inline bool vm::CFile::Line_w( _vIn_ const wchar_t* const cpFmt, _vIn_ ... )
// {
{
    va_list vList;
    va_start( vList, cpFmt );
    bool lbRet = Line_w( cpFmt, vList );
    va_end( vList );

    return lbRet;
}
// }}} end of func CFile::Line_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Line_w(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write a formated wchar string line to file steam
// ==  Return  : bool             - [O] true  - write sucess
// ==                                   false - write failed
// ==  Params  : cpFmt            - [I] input string's format
// ==            vList            - [I] input string's format paramters
inline bool vm::CFile::Line_w( _vIn_ const wchar_t* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    bool lbRetForWrite = Write_w( cpFmt, vList );
    if( lbRetForWrite == false )
        return false;
    
    bool lbRetForPutC = Put_w( L'\n' );
    if( lbRetForPutC == false )
        return false;

    return true;
}
// }}} end of func CFile::Line_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a tchar letter from file stream
// ==  Return  : tchar            - [O] 0x00  - get failed
// ==                                   vFEOF - file stream is end
// ==                                   tchar - tchar letter
// ==  Params  : cVal             - [O] tchar buffer
inline tchar vm::CFile::Get( _vOt_ tchar cVal )
// {{{
{
    if( mpFile == nullptr )
        return 0x00;
    
    cVal = vFgetc( mpFile );
    
    if( IsEof() )
        return vFEOF;
    
    if( HasErr() == true )
        return 0x00;
    
    return cVal;
}
// }}} end of func CFile::Get(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get_c(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a char letter from file stream
// ==  Return  : tchar            - [O] 0x00  - get failed
// ==                                   EOF   - file stream is end
// ==                                   char  - tchar letter
// ==  Params  : cVal             - [O] char buffer
inline char vm::CFile::Get_c( _vOt_ char cVal )
// {{{
{
    if( mpFile == nullptr )
        return 0x00;
    
    cVal = fgetc( mpFile );
    
    if( IsEof() )
        return EOF;
    
    if( HasErr() )
        return 0x00;
    
    return cVal;
}
// }}} end of func CFile::Get_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get_w(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a wchar letter from file stream
// ==  Return  : tchar            - [O] 0x00    - get failed
// ==                                   WEOF    - file stream is end
// ==                                   wchar_t - tchar letter
// ==  Params  : cVal             - [O] wchar_t buffer
inline wchar_t vm::CFile::Get_w( _vOt_ wchar_t cVal )
// {{{
{
    if( mpFile == nullptr )
        return 0x00;
    
    cVal = fgetc( mpFile );
    
    if( IsEof() )
        return WEOF;
    
    if( HasErr() )
        return 0x00;
    
    return cVal;
}
// }}} end of func CFile::Get_w(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a tchar string from file stream
// ==  Return  : tchar            - [O] nullpter - get failed, mllErrCode include error code
// ==                                   no null  - string
// ==  Params  : pBuf             - [I] string's buffer
// ==            csztBufSize      - [I] string;s buffer size
inline tchar* vm::CFile::Get( _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize )
// {{{
{
    if( mpFile == nullptr )
        return nullptr;
    
    tchar* lpStr = vFgets( pBuf, csztBufSize, mpFile );
    if( lpStr != nullptr )
        return lpStr;
    
    if( IsEof() )
        return nullptr;
    
    HasErr();
    return nullptr;
}
// }}} end of func CFile::Get(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get_c(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a char string from file stream
// ==  Return  : tchar            - [O] nullpter - get failed, mllErrCode include error code
// ==                                   no null  - string
// ==  Params  : pBuf             - [I] string's buffer
// ==            csztBufSize      - [I] string;s buffer size
inline char* vm::CFile::Get_c( _vOt_ char* const pBuf, const size_t csztBufSize )
// {{{
{
    if( mpFile == nullptr )
        return nullptr;
    
    char* lpStr = fgets( pBuf, csztBufSize, mpFile );
    if( lpStr != nullptr )
        return lpStr;
    
    if( IsEof() )
        return nullptr;
    
    HasErr();
    return nullptr;
}
// }}} end of func CFile::Get_c(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFile::Get_w(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a wchar string from file stream
// ==  Return  : wchar_t*         - [O] nullpter - get failed, mllErrCode include error code
// ==                                   no null  - string
// ==  Params  : pBuf             - [I] string's buffer
// ==            csztBufSize      - [I] string;s buffer size
inline wchar_t* vm::CFile::Get_w( _vOt_ wchar_t* const pBuf, const size_t csztBufSize )
// {{{
{
    if( mpFile == nullptr )
        return nullptr;
    
    wchar_t* lpStr = fgetws( pBuf, csztBufSize, mpFile );
    if( lpStr != nullptr )
        return lpStr;
    
    if( IsEof() )
        return nullptr;
    
    HasErr();
    return nullptr;
}
// }}} end of func CFile::Get_w(...)
// ================================================================================================ //

// }}} ![ Class CFile Functional realization ]
// ================================================================================================ //


#endif // ! __CFILE_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
