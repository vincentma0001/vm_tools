// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CFileFind.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-18 21:51:31                                               == //
// ==   Modify Time          : 2020-11-06 11:43:56                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILEFIND_H_INL__
#define  __CFILEFIND_H_INL__

// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#if        ( _V_USE_WCHAR_ == 0 )
// {{{
#   define vFindFirst  _findfirst
#   define vFindNext   _findnext
#   define vFindClose  _findclose
// }}}
#else  //  ( _V_USE_WCHAR_ != 0 )
// {{{
#   define vFindFirst  _wfindfirst
#   define vFindNext   _findnext
#   define vFindClose  _findclose
// }}}
#endif // !( _V_USE_WCHAR_ == 0 )
// }}} ! Macrodefs

// ================================================================================================ //
// ==  Class CFileFind Construct && Destruct realization                                         == //
// ================================================================================================ //
// [ Class CFileFind Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileFind::CFileFind()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CFileFind::CFileFind(  ) : mllErrCode(0),mhFile(-1)
// {{{
{
    vm::v_memzero( mfileinfo, sizeof(mfileinfo) );
}
// }}} End of func CFileFind::CFileFind()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CFileFind::CFileFind()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CFileFind::~CFileFind(  )
// {{{
{
}
// }}} End of func CFileFind::~CFileFind()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileFind::CFileFind()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CFileFind::CFileFind( const vm::CFileFind &obj ) : mllErrCode(0), mhFile(-1)
// {{{
{
    vm::v_memzero( mfileinfo, sizeof(mfileinfo) );
    *this = obj;
}
// }}} End of func CFileFind::CFileFind()
// ================================================================================================ //

// }}} ![ Class CFileFind Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileFind operator realization                                                      == //
// ================================================================================================ //
// [ Class CFileFind operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileFind::operator = ()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CFileFind&       - [O] this object
inline vm::CFileFind& vm::CFileFind::operator = ( const vm::CFileFind &obj )
// {{{
{
    return *this;
}
// }}} End of func CFileFind::operator=()
// ================================================================================================ //

// }}} ![ Class CFileFind operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileFind Functional realization                                                    == //
// ================================================================================================ //
// [ Class CFileFind Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileFind::Find(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get first file with spac in dirtory
// ==  Return  : bool             - [O] ture  - for sucess
// ==                                   false - for failed, use mllErrCode for error info
// ==  Params  : cpFileSpec       - [I] File spec
inline bool vm::CFileFind::Find( _vIn_ const tchar* const cpFileSpec )
// {{{
{
    if( mhFile != -1l )
        return false;

    mhFile = _findfirst( cpFileSpec, &mfileinfo );
    if( mhFile == -1L )
    {
        mllErrCode = errno;
        return false;
    }

    return true;
}
// }}} end of func CFileFind::Find(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileFind::Next(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get next file with spec in dirtory
// ==  Return  : bool             - [O] ture  - for sucess
// ==                                   false - for failed, use mllErrCode for error info
inline bool vm::CFileFind::Next(  )
// {{{
{
    if( mhFile != -1l )
        return false;

    mhFile = _findnext( mhFile, &mfileinfo );
    if( mhFile == -1l )
    {
        mllErrCode = errno;
        return false;
    }

    return true;
}
// }}} end of func CFileFind::Next(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileFind::Close(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Close current finding
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : 
inline void vm::CFileFind::Close(  )
// {{{
{
    _findclose(mhFile);
    mhFile = -1L;
}
// }}} end of func CFileFind::Close(...)
// ================================================================================================ //

// }}} ![ Class CFileFind Functional realization ]
// ================================================================================================ //


#endif // ! __CFILEFIND_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
