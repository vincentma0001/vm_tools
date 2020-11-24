// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CTimeStr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 10:35                                                  == //
// ==   Modify Time          : 2020-11-24 23:45                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
#include "CTimeStr.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr Construct && Destruct realization                                          == //
// ================================================================================================ //
// [ Class CTimeStr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::CTimeStr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CTimeStr::CTimeStr( tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize )
    :mstTimet(stTimet), mpBuf(pBuf), msztBufSize(csztBufSize)
// {{{
{
}
// }}} End of func CTimeStr::CTimeStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CTimeStr::CTimeStr()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CTimeStr::~CTimeStr(  )
// {{{
{
}
// }}} End of func CTimeStr::~CTimeStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::CTimeStr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CTimeStr::CTimeStr( const CTimeStr &obj )
    :mstTimet(obj.mstTimet), mpBuf(0), msztBufSize(0)
// {{{
{
    *this = obj;
}
// }}} End of func CTimeStr::CTimeStr()
// ================================================================================================ //

// }}} ![ Class CTimeStr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr operator realization                                                       == //
// ================================================================================================ //
// [ Class CTimeStr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::operator = ()                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CTimeStr&        - [O] this object
inline vm::CTimeStr& vm::CTimeStr::operator = ( const CTimeStr &obj )
// {{{
{
    return *this;
}
// }}} End of func CTimeStr::operator=()
// ================================================================================================ //

// }}} ![ Class CTimeStr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr Functional realization                                                     == //
// ================================================================================================ //
// [ Class CTimeStr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::toTimeStr(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string by object
// ==  Return  : tchar*           - [O] formated string
// ==  Params  : cpFmt            - [I] string's format
inline tchar* vm::CTimeStr::toTimeStr( const tchar* const cpFmt )
// {{{
{
    _VERIFY_( vT("CTimeStr::toTimeStr()"), cpFmt );

    size_t lsztRet = vm::CTimeStr::StrTime( mstTimet, mpBuf, msztBufSize, cpFmt );
    if( lsztRet == 0 )
        mllErrCode = vMakeLLong( vm::emRet::emError, errno );

    return mpBuf;
}
// }}} end of func CTimeStr::toTimeStr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::StrTime(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string by tTimet object
// ==  Return  : tchar*           - [O] formated string
// ==  Params  : &Timet           - [I] tTimet object
// ==            pBuf             - [O] formated string's buffer
// ==            csztBufSize      - [I] formated string's buffer's size
// ==            cpFmt            - [I] string's format
inline size_t vm::CTimeStr::StrTime( const tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt )
// {{{
{
    _VERIFY_2_( vT("CTimeStr::StrTime()"), pBuf, cpFmt );

#if        ( _V_SYS_ == _V_WIN_ )
    // Win coders {{{
    //  TODO : add windows codes
    // }}}
#elif      ( _V_SYS_ == _V_LUX_ )
    // Lux codes {{{
        struct tm* lpTm = ::localtime( &stTimet );
        size_t lsztRet = vStrftime(pBuf, csztBufSize, cpFmt, lpTm);
    // }}}
#endif // !( _V_SYS_ == _V_WIN_ )

    return lsztRet;
}
// }}} end of func CTimeStr::StrTime(...)
// ================================================================================================ //

// }}} ![ Class CTimeStr Functional realization ]
// ================================================================================================ //



// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
