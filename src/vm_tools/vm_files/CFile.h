// ================================================================================================ //
// ==                                                                                            == //
// ==                                          CFile.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:10:23                                               == //
// ==   Modify Time          : 2020-11-08 09:19:17                                               == //
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
namespace vm
{

// ================================================================================================ //
// ==  Class CFile : this class deal with stdc file operation                                    == //
// ------------------------------------------------------------------------------------------------ //
class CFile
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    vFEndl
#   define vFEndl vT('\n')
#endif // !vFEndl
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //
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

public:
    inline CFile& operator << ( const tchar* const   cpStr )
    {
        bool lbRet = PutS ( cpStr );
        return *this;
    };
    inline CFile& operator << ( const tchar         csChar )
    {
        bool lbRet = PutC ( csChar );
        return* this;
    };
    inline bool hasErr()
    {
        int liRet = ferror(mpFile);
        if(liRet==0)
            return true;

        mllErrCode = liRet;
        return false;
    }
    inline bool isEof()
    {
        if(feof(mpFile));
            return true;

        return false;
    }
// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // File handle
    FILE*       mpFile;

public:
    // Error code
    long long   mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // [ Open && Close file ]{{{
    // Open a file, with string modes
    // modes : read        - 'r', write     - 'w', append     - 'a', update   - '+',
    //         binary file - 'b', text file - 't', file exist - 'x'
    bool Open  ( _vIn_ const tchar* const cpName, _vIn_ const tchar* const cpMode );
    // Open a file,
    // modes : read        - emRead,   write     - emWrite, append     - emAppend, update   - emUpdate,
    //         binary file - emBinary, text file - emText , file exist - emExist
    bool Open  ( _vIn_ const tchar* const cpName, _vIn_ const short csMode );
    // Close file, with emFileMode
    void Close (  );
    bool Tmp()
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
    bool Tmp  ( _vIn_ const tchar* const cpName, _vIn_ const tchar* const cpMode );
    {
        if( mpFile != nullptr )
            return false;

        if( cpName == nullptr )
        {
            tchar* = tmpnam( cpName );
        }

        bool lbRet = Open( cpName, cpMode );
        return lbRet;
    }
    bool Tmp  ( _vIn_ const tchar* const cpName, _vIn_ const short csMode );
    {
        if( mpFile != nullptr )
            return false;

        if( cpName == nullptr )
        {
            tchar* = tmpnam( cpName );
        }

        bool lbRet = Open( cpName, cpMode );
        return lbRet;
    }
    static inline const tchar* tmpName( _vIn_ tchar* const cpNameBuf, const size_t csztNameBufSize );
    {
        error_t loRet = ::tmpnam_s( cpNameBuf, csztNameBufSize );
        if ( loRet != 0 )
        {
            mllErrCode = errno;
            return cpNameBuf;
        }

        return cpNameBuf;
    }

    bool    PosBegin(  ){ return true; };
    bool    PosEnded(  ){ return true; };
    bool    SetPos( fpos_t  fpPosition ){ return true; };
    fpos_t  GetPos( fpos_t& fpPosition ){ return (fpos_t)0; };

    // }}}

    // [ write ] {{{
    bool Write( _vIn_ const tchar* const cpFmt, _vIn_ ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Write( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Write( _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = vVfprintf( mpFile, cpFmt, vList );
        if( liRet <= 0 )
        {
            hasErr();
            return false;
        } // End of if(...

        return true;
    };
    bool Line ( const tchar* const cpFmt, ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Line( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Line ( const tchar* const cpFmt, va_list vList )
    {
        bool lbRetForWrite = Write( cpFmt, vList );
        if( lbRetForWrite == false )
            return false;

        bool lbRetForPutC = PutC( vT('\n') );
        if( lbRetForPutC == false )
            return false;

        return true;
    }
    // }}}
    // [ write c ] {{{
    bool Write_c ( _vIn_ const char* const cpFmt, _vIn_ ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Write_c( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Write_c( _vIn_ const char* const cpFmt, _vIn_ va_list& vList )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = vfprintf( mpFile, cpFmt, vList );
        if( liRet <= 0 )
        {
            hasErr();
            return false;
        } // End of if(...

        return true;
    };
    bool Line_c ( const char* const cpFmt, ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Line_c( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Line_c ( const char* const cpFmt, va_list vList )
    {
        bool lbRetForWrite = Write_c( cpFmt, vList );
        if( lbRetForWrite == false )
            return false;

        bool lbRetForPutC = PutC_c( '\n' );
        if( lbRetForPutC == false )
            return false;

        return true;
    }
    // }}}
    // [ write w ] {{{
    bool Write_w ( _vIn_ const wchar_t* const cpFmt, _vIn_ ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Write_w( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Write_w( _vIn_ const wchar_t* const cpFmt, _vIn_ va_list& vList )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = vfwprintf( mpFile, cpFmt, vList );
        if( liRet <= 0 )
        {
            hasErr();
            return false;
        } // End of if(...

        return true;
    };
    bool Line_w ( const wchar_t* const cpFmt, ... )
    {
        va_list vList;
        va_start( vList, cpFmt );
        bool lbRet = Line_w( cpFmt, vList );
        va_end( vList );

        return lbRet;
    }
    bool Line_w ( const wchar_t* const cpFmt, va_list vList )
    {
        bool lbRetForWrite = Write_w( cpFmt, vList );
        if( lbRetForWrite == false )
            return false;

        bool lbRetForPutC = PutC_w( L'\n' );
        if( lbRetForPutC == false )
            return false;

        return true;
    }
    // }}}

    // [ PutC ] {{{
    bool PutC( _vIn_ const tchar csChar )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = vFputc( csChar, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    };
    bool PutC_c( _vIn_ const char    csChar )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = fputc( csChar, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    }
    bool PutC_w( _vIn_ const wchar_t csChar )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = fputwc( csChar, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    }
    // }}}
    // [ PutS funcs ] {{{
    bool PutS( _vIn_ const tchar* cpStr )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = vFputs( cpStr, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    };
    bool PutS_c( _vIn_ const char* const cpStr )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = fputs( cpStr, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    }
    bool PutS_w( _vIn_ const wchar_t* const cpStr )
    {
        if( mpFile == nullptr )
            return false;

        int liRet = fputws( cpStr, mpFile );
        if( liRet == EOF )
        {
            hasErr();
            return false;
        }

        return true;
    }
    // }}}

    // [ GetC funcs ] {{{
    tchar GetC( _vOt_ tchar csChar )
    {
        if( mpFile == nullptr )
            return 0x00;

        csChar = vFgetc( mpFile );

        if( isEof() )
            return vFEof;

        if( hasErr() == true )
            return 0x00;

        return csChar;
    }
    char GetC_c( _vOt_ char csChar )
    {
        if( mpFile == nullptr )
            return 0x00;

        csChar = fgetc( mpFile );

        if( isEof() )
            return vFEof;

        if( hasErr() )
            return 0x00;

        return csChar;
    }
    wchar_t GetC_w( _vOt_ wchar_t csChar )
    {
        if( mpFile == nullptr )
            return 0x00;

        csChar = fgetc( mpFile );

        if( isEof() )
            return vFEof;

        if( hasErr() )
            return 0x00;

        return csChar;
    }
    // }}}
    // [ Gets funcs ] {{{
    tchar* GetS   (   tchar* const pBuf, const size_t csztBufSize )
    {
        if( mpFile == nullptr )
            return nullptr;

        tchar* lpStr = vFgets( pBuf, csztBufSize, mpFile );
        if( lpStr != nullptr )
            return lpStr;

        if( isEof() )
            return nullptr;

        hasErr();
        return nullptr;
    }
    char* GetS_c (    char* const pBuf, const size_t csztBufSize )
    {
        if( mpFile == nullptr )
            return nullptr;

        char* lpStr = fgets( pBuf, csztBufSize, mpFile );
        if( lpStr != nullptr )
            return lpStr;

        if( isEof() )
            return nullptr;

        hasErr();
        return nullptr;
    }
    wchar_t* GetS_w ( wchar_t* const pBuf, const size_t csztBufSize )
    {
        if( mpFile == nullptr )
            return nullptr;

        wchar_t* lpStr = fgetws( pBuf, csztBufSize, mpFile );
        if( lpStr != nullptr )
            return lpStr;

        if( isEof() )
            return nullptr;

        hasErr();
        return nullptr;
    }
    // }}}
    /*
    unsigned long Seek(  );
    unsigned long Pos(  );
    unsigned long Eof(  );

    //*/
// }}} ! Methods

};
// }}} ! [ class CFile ]
// ================================================================================================ /

}; 
// }}} End of namespace vm
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
