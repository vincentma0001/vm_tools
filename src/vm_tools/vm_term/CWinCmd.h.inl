// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinCmd.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 19:46:15                                               == //
// ==   Modify Time          : 2020-10-04 19:05:58                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef   __CWINCMD_H_INL__
#define   __CWINCMD_H_INL__

// ================================================================================================ //
// ==  Class CWinCmd Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CWinCmd Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinCmd::CWinCmd()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline CWinCmd::CWinCmd(  )
// {{{
{
    mhHandle =::GetStdHandle(STD_OUTPUT_HANDLE);
}
// }}} End of func CWinCmd::CWinCmd()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CWinCmd::CWinCmd()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline CWinCmd::~CWinCmd(  )
// {{{
{
    mhHandle = nullptr;
}
// }}} End of func CWinCmd::~CWinCmd()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinCmd::CWinCmd()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline CWinCmd::CWinCmd( const CWinCmd &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CWinCmd::~CWinCmd()
// ================================================================================================ //

// }}} ![ Class CWinCmd Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinCmd operator realization                                                        == //
// ================================================================================================ //
// [ Class CWinCmd operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinCmd::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CWinCmd&         - [O] this object
inline CWinCmd& CWinCmd::operator = ( const CWinCmd &obj )
// {{{
{
    return *this;
}
// }}} End of func CWinCmd::~CWinCmd()
// ================================================================================================ //

// }}} ![ Class CWinCmd operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinCmd Functional realization                                                      == //
// ================================================================================================ //
// [ Class CWinCmd Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinCmd::SetTxtColor(...)                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set console text color
// ==  Return  : bool             - [O] true  for sucess
// ==                                   false fot failed
// ==  Params  : csColor          - [I] txt color, for example emColor::vf_lWhitr|emColore::vb_lYellow
inline bool CWinCmd::SetTxtColor( const short csColor )
// {{{
{
    mulErrCode = 0;
    BOOL lbRet = ::SetConsoleTextAttribute( mhHandle, csColor );
    if( lbRet == TRUE ) return true;

    mulErrCode = ::GetLastError();
    return false;
}
// }}} end of func CWinCmd::SetTxtColor(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinCmd::Write(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : W
// ==  Return  : int              - [O] emRet::vError for failed.
// ==                                   numbers       for letters of writed.
// ==  Params  : csColor          - [X] Text color
// ==            cpFmt            - [X] Letter format string
// ==            ...              - [X] Letter format string paramters
inline int CWinCmd::Write( const short csColor, const tchar* const cpFmt, ... )
// {{{
{
    bool lbRet = SetTxtColor( csColor );
    if ( lbRet == false )
        return emRet::vError;

    va_list vList;
    va_start( vList, cpFmt );
    int liRetForPrintf = vVprintf_s( cpFmt, vList );
    va_end( vList );

    bool lbRet2 = SetTxtColor();
    if ( lbRet2 == false )
        return emRet::vError;

    return liRetForPrintf;
}
// }}} end of func CWinCmd::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinCmd::Write(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write string to screen
// ==  Return  : int              - [O] emRet::vError for failed.
// ==                                   numbers       for letters of writed.
// ==  Params  : csColor          - [X] Text color
// ==            cpFmt            - [X] Letter format string
// ==            vList            - [X] Letter format string paramters
inline int CWinCmd::Write( const short csColor, const tchar* const cpFmt, va_list& vList )
// {{{
{
    bool lbRet = SetTxtColor(csColor);
    if (lbRet == false)
        return emRet::vError;

    int liRetForPrintf = vVprintf_s(cpFmt, vList);

    bool lbRet2 = SetTxtColor();
    if (lbRet2 == false)
        return emRet::vError;

    return liRetForPrintf;
}
// }}} end of func CWinCmd::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinCmd::SetTitile(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set console titile
// ==  Return  : void             - [O] true  for sucess
// ==                                   false for failed
// ==  Params  : cpTitile         - [X] Console titile string
inline bool CWinCmd::SetTitile( const tchar* const cpTitile )
// {{{
{
    BOOL lbRet = ::SetConsoleTitle( cpTitile );
    if ( lbRet == TRUE )
        return true;
    
    mulErrCode = ::GetLastError();
    return false;
}
// }}} end of func CWinCmd::SetTitile(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinCmd::GetTitile(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get console titile
// ==  Return  : tchar*           - [O] Current console titile
// ==  Params  : 
inline tchar* CWinCmd::GetTitile(  )
// {{{
{
    vMemZero(mszBuf);
    DWORD ldwRet = ::GetConsoleTitle(mszBuf, sizeof(mszBuf));
    return mszBuf;
}
// }}} end of func CWinCmd::GetTitile(...)
// ================================================================================================ //

// }}} ![ Class CWinCmd Functional realization ]
// ================================================================================================ //

#endif // __CWINCMD_H_INL__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
