// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinTerm.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 19:46:15                                               == //
// ==   Modify Time          : 2020-11-05 08:58:47                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef   __CWINTERM_H_INL__
#define   __CWINTERM_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinTerm Construct && Destruct realization                                          == //
// ================================================================================================ //
// [ Class CWinTerm Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinTerm::CWinTerm()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline CWinTerm::CWinTerm(  )
// {{{
{
    mhHandle =::GetStdHandle(STD_OUTPUT_HANDLE);
}
// }}} End of func CWinTerm::CWinTerm()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CWinTerm::CWinTerm()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline CWinTerm::~CWinTerm(  )
// {{{
{
    mhHandle = nullptr;
}
// }}} End of func CWinTerm::~CWinTerm()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinTerm::CWinTerm()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline CWinTerm::CWinTerm( const CWinTerm &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CWinTerm::~CWinTerm()
// ================================================================================================ //

// }}} ![ Class CWinTerm Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinTerm operator realization                                                       == //
// ================================================================================================ //
// [ Class CWinTerm operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinTerm::operator = ()                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CWinTerm&         - [O] this object
inline CWinTerm& CWinTerm::operator = ( const CWinTerm &obj )
// {{{
{
    return *this;
}
// }}} End of func CWinTerm::~CWinTerm()
// ================================================================================================ //

// }}} ![ Class CWinTerm operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinTerm Functional realization                                                     == //
// ================================================================================================ //
// [ Class CWinTerm Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinTerm::SetTxtColor(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set console text color
// ==  Return  : bool             - [O] true  for sucess
// ==                                   false fot failed
// ==  Params  : csColor          - [I] txt color, for example emColor::vf_lWhitr|emColore::vb_lYellow
inline bool CWinTerm::SetTxtColor( const short csColor )
// {{{
{
    mulErrCode = 0;
    BOOL lbRet = ::SetConsoleTextAttribute( mhHandle, csColor );
    if( lbRet == TRUE ) return true;

    mulErrCode = ::GetLastError();
    return false;
}
// }}} end of func CWinTerm::SetTxtColor(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinTerm::Write(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : W
// ==  Return  : int              - [O] emRet::vError for failed.
// ==                                   numbers       for letters of writed.
// ==  Params  : csColor          - [X] Text color
// ==            cpFmt            - [X] Letter format string
// ==            ...              - [X] Letter format string paramters
inline int CWinTerm::Write( const short csColor, const tchar* const cpFmt, ... )
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
// }}} end of func CWinTerm::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinTerm::Write(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Write string to screen
// ==  Return  : int              - [O] emRet::vError for failed.
// ==                                   numbers       for letters of writed.
// ==  Params  : csColor          - [X] Text color
// ==            cpFmt            - [X] Letter format string
// ==            vList            - [X] Letter format string paramters
inline int CWinTerm::Write( const short csColor, const tchar* const cpFmt, va_list& vList )
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
// }}} end of func CWinTerm::Write(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinTerm::SetTitile(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set console titile
// ==  Return  : void             - [O] true  for sucess
// ==                                   false for failed
// ==  Params  : cpTitile         - [X] Console titile string
inline bool CWinTerm::SetTitile( const tchar* const cpTitile )
// {{{
{
    BOOL lbRet = ::SetConsoleTitle( cpTitile );
    if ( lbRet == TRUE )
        return true;
    
    mulErrCode = ::GetLastError();
    return false;
}
// }}} end of func CWinTerm::SetTitile(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinTerm::GetTitile(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get console titile
// ==  Return  : tchar*           - [O] Current console titile
// ==  Params  : 
inline tchar* CWinTerm::GetTitile(  )
// {{{
{
    vMemZero(mszBuf);
    DWORD ldwRet = ::GetConsoleTitle(mszBuf, sizeof(mszBuf));
    return mszBuf;
}
// }}} end of func CWinTerm::GetTitile(...)
// ================================================================================================ //

// }}} ![ Class CWinTerm Functional realization ]
// ================================================================================================ //

#endif // __CWINTERM_H_INL__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
