// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CFile.h.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:12:32                                               == //
// ==   Modify Time          : 2020-10-17 20:46:47                                               == //
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
#if defined( _V_STD_VER_ ) && ( _V_STD_VER_ >=11 )
    errno_t loRet = vFopen_s( &mpFile, cpName, cpMode );
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
#if defined( _V_STD_VER_ ) && ( _V_STD_VER_ >=11 )
    errno_t loRet = vFopen_s( &mpFile, cpName, loFileMode.Tranformat(csMode) );
    if( loRet != 0 )
    {
        mllErrCode = loRet;
        return false;
    }
#else
    mpFile       = vFopen( cpName, loFileMode.Transformat(csMode) );
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
