// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CWinClock.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 22:18                                                  == //
// ==   Modify Time          : 2020-11-23 22:43                                                  == //
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
#include "CWinClock.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinClock Construct && Destruct realization                                         == //
// ================================================================================================ //
// [ Class CWinClock Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinClock::CWinClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CWinClock::CWinClock(  )
// {{{
{
}
// }}} End of func CWinClock::CWinClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CWinClock::CWinClock()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CWinClock::~CWinClock(  )
// {{{
{
}
// }}} End of func CWinClock::~CWinClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::CWinClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CWinClock::CWinClock( const CWinClock &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CWinClock::CWinClock()
// ================================================================================================ //

// }}} ![ Class CWinClock Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinClock operator realization                                                      == //
// ================================================================================================ //
// [ Class CWinClock operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinClock::operator = ()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CWinClock&       - [O] this object
inline vm::CWinClock& vm::CWinClock::operator = ( const CWinClock &obj )
// {{{
{
    return *this;
}
// }}} End of func CWinClock::operator=()
// ================================================================================================ //

// }}} ![ Class CWinClock operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinClock Functional realization                                                    == //
// ================================================================================================ //
// [ Class CWinClock Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinClock::Start(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Start count clock
inline void vm::CWinClock::Start( void )
// {{{
{
    bool lbRetForFrequency = ::QueryPerformanceFrequency(&mliFrequency);
    if (lbRetForFrequency==false)
    {
        mllErrCode = vMakeLLong( vm::emRet::emError, GetLastError() );
        return false;
    } // End of if

    bool lbRetForCounter = ::QueryPerformanceCounter(&mliStart);
    if (lbRetForCounter==false)
    {
        mllErrCode = vMakeLLong( vm::emRet::emError, GetLastError() );
        return false;
    } // End of if (lbRetForCounter==false) ...

    return true;
}
// }}} end of func CWinClock::Start(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::Ended(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ended count clock
// ==  Return  : long long        - [O] time different, unit of time is nanesecond
inline long long vm::CWinClock::Ended( void )
// {{{
{
    bool lbRetForCounter = ::QueryPerformanceCounter(&mliStop);
    if (lbRetForCounter==false)
    {
        mulErrCode = GetLastError();
        return vMinsLLong;
    } // End of if (lbRetForCounter==false)...

    mllTimeDiff = (mliStop.QuadPart-mliStart.QuadPart);
    return mllTimeDiff;
}
// }}} end of func CWinClock::Ended(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::d_sec(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by double type, unit of time is second
// ==  Return  : double           - [O] double type time different, unit of time is second
// ==  Params  : void             - [X] # TODO : Add comment for void #
inline double vm::CWinClock::d_sec( void )
// {{{
{
    return ( double  ) mllTimeDiff / (double)mliFrequency.QuadPart;
}
// }}} end of func CWinClock::d_sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::sec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by long long type, unit of time is second
// ==  Return  : long long        - [O] long long type time different, unit of time is second
inline long long vm::CWinClock::sec( void )
// {{{
{
    return (long long)(mllTimeDiff / (double)mliFrequency.QuadPart);
}
// }}} end of func CWinClock::sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::msec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by long long type, unit of time is millisecond
// ==  Return  : long long        - [O] long long type time different, unit of time millisecond
inline long long vm::CWinClock::msec( void )
// {{{
{
    return (long long)( mllTimeDiff*1000 / (double)mliFrequency.QuadPart );
}
// }}} end of func CWinClock::msec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::usec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by long long type, unit of time is microsecond
// ==  Return  : long long        - [O] long long type time different, unit of time microsecond
inline long long vm::CWinClock::usec( void )
// {{{
{
    return (long long)(mllTimeDiff*1000000 / (double)(mliFrequency.QuadPart));
}
// }}} end of func CWinClock::usec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinClock::nsec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by long long type, unit of time is nanosecond
// ==  Return  : long long        - [O] long long type time different, unit of time nanosecond
inline long long vm::CWinClock::nsec( void )
// {{{
{
    return (long long)(mllTimeDiff*1000000000 / (double)(mliFrequency.QuadPart));
}
// }}} end of func CWinClock::nsec(...)
// ================================================================================================ //

// }}} ![ Class CWinClock Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
