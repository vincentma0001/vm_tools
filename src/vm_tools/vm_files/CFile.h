// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CFile.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:10:23                                               == //
// ==   Modify Time          : 2020-11-18 18:17:33                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILE_H__
#define  __CFILE_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    vFEndl
#   define vFEndl vT('\n')
#endif // !vFEndl
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CFile : this class deal with stdc file operation
class CFile
{ // {{{

// Typedefs  : {{{
public:
    // enum emRet : this enum define return value of CFile
    enum emRet
    // {{{
    {
        emErrCFileNoInit = vm::emRet::emError-1
    };
    // }}} End of def enum emRet
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CFile();
    // Destruct define
    inline virtual ~CFile();

private:
    // Copy construct define
    inline CFile( const CFile &obj );
    // Assignment operation
    inline CFile& operator = ( const CFile &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // File handle
    FILE*       mpFile;

public:
    // Error code
    long long   mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Check has eror in file stream or not
    inline bool HasErr();
    // Check it's file stream's
    inline bool IsEof();

    // Open a file, with string modes
    // modes : read        - 'r', write     - 'w', append     - 'a', update   - '+',
    //         binary file - 'b', text file - 't', file exist - 'x'
    inline bool Open  ( _vIn_ const tchar* const cpName, _vIn_ const tchar* const cpMode );
    // Open a file,
    // modes : read        - emRead,   write     - emWrite, append     - emAppend, update   - emUpdate,
    //         binary file - emBinary, text file - emText , file exist - emExist
    inline bool Open  ( _vIn_ const tchar* const cpName, _vIn_ const short        csMode );
    // Create a temp file
    inline bool Temp  (  );
    // Close file, with emFileMode
    inline void Close (  );

    // Write a formated string to file stream
    inline bool Write   ( _vIn_ const tchar*   const cpFmt, _vIn_            ... );
    // Write a formated string to file stream
    inline bool Write   ( _vIn_ const tchar*   const cpFmt, _vIn_ va_list& vList );
    // Write a formated char string to file stream
    inline bool Write_c ( _vIn_ const char*    const cpFmt, _vIn_            ... );
    // Write a formated char string to file stream
    inline bool Write_c ( _vIn_ const char*    const cpFmt, _vIn_ va_list& vList );
    // Write a formated wchar string to file stream
    inline bool Write_w ( _vIn_ const wchar_t* const cpFmt, _vIn_            ... );
    // Write a formated wchar string to file stream
    inline bool Write_w ( _vIn_ const wchar_t* const cpFmt, _vIn_ va_list& vList );

    // Write a formated string line to file stream
    inline bool Line   ( _vIn_ const tchar*   const cpFmt, _vIn_            ... );
    // Write a formated string line to file stream
    inline bool Line   ( _vIn_ const tchar*   const cpFmt, _vIn_ va_list& vList );
    // Write a formated char string line to file stream
    inline bool Line_c ( _vIn_ const char*    const cpFmt, _vIn_            ... );
    // Write a formated char string line to file stream
    inline bool Line_c ( _vIn_ const char*    const cpFmt, _vIn_ va_list& vList );
    // Write a formated char string line to file stream
    inline bool Line_w ( _vIn_ const wchar_t* const cpFmt, _vIn_            ... );
    // Write a formated char string line to file stream
    inline bool Line_w ( _vIn_ const wchar_t* const cpFmt, _vIn_ va_list& vList );

    // Write a tchar letter to file stream
    inline bool Put    ( _vIn_ const tchar           cVal );
    // Write a char letter to file stream
    inline bool Put_c  ( _vIn_ const char            cVal );
    // Write a wchar letter to file stream
    inline bool Put_w  ( _vIn_ const wchar_t         cVal );

    // Write a tchar string to file stream
    inline bool Put    ( _vIn_ const tchar*         cpStr );
    // Write a tchar string to file stream
    inline bool Put_c  ( _vIn_ const char*    const cpStr );
    // Write a wchar string to file stream
    inline bool Put_w  ( _vIn_ const wchar_t* const cpStr );

    // Get a tchar letter from file stream
    inline tchar    Get   ( _vOt_   tchar cVal );
    // Get a  char letter from file stream
    inline char     Get_c ( _vOt_    char cVal );
    // Get a wchar letter from file stream
    inline wchar_t  Get_w ( _vOt_ wchar_t cVal );

    // Get a tchar string from file stream
    inline tchar*   Get   ( _vOt_   tchar* const pBuf, _vIn_ const size_t csztBufSize );
    // Get a  char string from file stream
    inline char*    Get_c ( _vOt_    char* const pBuf, _vIn_ const size_t csztBufSize );
    // Get a wchar string from file stream
    inline wchar_t* Get_w ( _vOt_ wchar_t* const pBuf, _vIn_ const size_t csztBufSize );
    /*
    unsigned long Seek(  );
    unsigned long Pos(  );
    unsigned long Eof(  );

    //*/
// }}} ! Methods

}; // }}} End of class CFile

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CFile.h.inl"
// ================================================================================================ //

#endif // ! __CFILE_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
