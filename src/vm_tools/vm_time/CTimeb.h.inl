// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CTimeb.h.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 00:26                                                  == //
// ==   Modify Time          : 2020-11-24 23:24                                                  == //
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
#include "CTimeb.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  class CTimeb realization                                                                  == //
// ================================================================================================ //
// [ class CTimeb realization ] {{{

// ================================================================================================ //
// ==  Class CTimeb Construct && Destruct realization                                            == //
// ================================================================================================ //
// [ Class CTimeb Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeb::CTimeb()                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CTimeb::CTimeb( tTimeb &stTimeb ) 
    : mstTimeb(stTimeb), mllErrCode(vm::emRet::emSucess)
// {{{
{
}
// }}} End of func CTimeb::CTimeb()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CTimeb::CTimeb()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CTimeb::~CTimeb(  )
// {{{
{
}
// }}} End of func CTimeb::~CTimeb()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::CTimeb()                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CTimeb::CTimeb( const CTimeb &obj )
    : mstTimeb(obj.mstTimeb), mllErrCode(obj.mllErrCode)
// {{{
{
}
// }}} End of func CTimeb::CTimeb()
// ================================================================================================ //

// }}} ![ Class CTimeb Construct && Destruct realization ]
// ================================================================================================ //

// ================================================================================================ //
// ==  Class CTimeb operator realization                                                         == //
// ================================================================================================ //
// [ Class CTimeb operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeb::operator&(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current timeb object
// ==  Return  : tTimeb&          - [O] current timeb object
inline tTimeb& vm::CTimeb::operator & (  )
// {{{
{
    return mstTimeb;
}
// }}} end of func CTimeb::operator&(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator*(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current timeb object pointer
// ==  Return  : tTimeb*          - [O] current timeb object pointer
inline tTimeb* vm::CTimeb::operator * (  )
// {{{
{
    return &mstTimeb;
}
// }}} end of func CTimeb::operator*(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator = ()                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : tTimeb&          - [O] this timeb object
inline tTimeb& vm::CTimeb::operator = ( const CTimeb &obj )
// {{{
{
    vm::CTimeb::Set( mstTimeb, obj.mstTimeb );
    return mstTimeb;
}
// }}} End of func CTimeb::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator=(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : cullMilliSecond  - [I] millisecond value
inline tTimeb& vm::CTimeb::operator = ( const unsigned long long cullMilliSecond )
// {{{
{
    vm::CTimeb::mSecToTimeb( cullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator=(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &stTimeb         - [I] timeb object
inline tTimeb& vm::CTimeb::operator = ( const tTimeb &stTimeb )
// {{{
{
    vm::CTimeb::Set( mstTimeb, stTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator=(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &stTimet         - [I] time_t object
inline tTimeb& vm::CTimeb::operator = ( const tTimet &stTimet )
// {{{
{
    mstTimeb.time = stTimet;
    return mstTimeb;
}
// }}} end of func CTimeb::operator=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeb object
inline tTimeb& vm::CTimeb::operator+( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    += obj.msec();
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator+( const unsigned long long cullMilliSecond )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    += cullMilliSecond;
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator+( const tTimet tSecond )
// {{{
{
    mstTimeb.time += tSecond;
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeDay object
inline tTimeb& vm::CTimeb::operator+( const vm::CTimeDay cDays )
// {{{
{
    mstTimeb.time += cDays.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator+( const vm::CTimeHour cHours )
// {{{
{
    mstTimeb.time += cHours.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation + 
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator+( const vm::CTimeMinute cMinutes )
// {{{
{
    mstTimeb.time += cMinutes.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeb object
inline tTimeb& vm::CTimeb::operator+=( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    += obj.msec();
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator+=( const unsigned long long cullMilliSecond )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    += cullMilliSecond;
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator+=( const tTimet tSecond )
// {{{
{
    mstTimeb.time += tSecond;
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeDay object
inline tTimeb& vm::CTimeb::operator+=( const vm::CTimeDay cDays )
// {{{
{
    mstTimeb.time += cDays.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator+=( const vm::CTimeHour cHours )
// {{{
{
    mstTimeb.time += cHours.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator+=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation +=
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator+=( const vm::CTimeMinute cMinutes )
// {{{
{
    mstTimeb.time += cMinutes.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator+=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeb object
inline tTimeb& vm::CTimeb::operator-( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    -= obj.msec();
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator-( const unsigned long long cullMilliSecond )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    -= cullMilliSecond;
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator-( const tTimet tSecond )
// {{{
{
    mstTimeb.time -= tSecond;
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeDay object
inline tTimeb& vm::CTimeb::operator-( const vm::CTimeDay cDays )
// {{{
{
    mstTimeb.time -= cDays.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator-( const vm::CTimeHour cHours )
// {{{
{
    mstTimeb.time -= cHours.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator-( const vm::CTimeMinute cMinutes )
// {{{
{
    mstTimeb.time -= cMinutes.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeb object
inline tTimeb& vm::CTimeb::operator-=( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    -= obj.msec();
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator-=( const unsigned long long cullMilliSecond )
// {{{
{
    unsigned long long lullMilliSecond  = msec();
    lullMilliSecond                    -= cullMilliSecond;
    vm::CTimeb::mSecToTimeb( lullMilliSecond, mstTimeb );
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] millisecond value
inline tTimeb& vm::CTimeb::operator-=( const tTimet tSecond )
// {{{
{
    mstTimeb.time -= tSecond;
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeDay object
inline tTimeb& vm::CTimeb::operator-=( const vm::CTimeDay cDays )
// {{{
{
    mstTimeb.time -= cDays.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator-=( const vm::CTimeHour cHours )
// {{{
{
    mstTimeb.time -= cHours.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator-=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation -
// ==  Return  : tTimeb&          - [O] this timeb object
// ==  Params  : &obj             - [I] CTimeHour object
inline tTimeb& vm::CTimeb::operator-=( const vm::CTimeMinute cMinutes )
// {{{
{
    mstTimeb.time -= cMinutes.sec();
    return mstTimeb;
}
// }}} end of func CTimeb::operator-=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator==(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation ==
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &stTimeb         - [I] timeb object
inline bool vm::CTimeb::operator==( const tTimeb &stTimeb )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 == lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator==(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator!=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation !=
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &stTimeb         - [I] timeb object
inline bool vm::CTimeb::operator!=( const tTimeb &stTimeb )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 != lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator!=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator<(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation <
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &stTimeb         - [I] timeb object
inline bool vm::CTimeb::operator<( const tTimeb &stTimeb )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 < lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator<(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator>(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation >
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &stTimeb         - [I] timeb object
inline bool vm::CTimeb::operator>( const tTimeb &stTimeb )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 > lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator>(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator==(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation ==
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &obj             - [I] CTimeb object
inline bool vm::CTimeb::operator==( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 == lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator==(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator!=(...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation !=
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &obj             - [I] CTimeb object
inline bool vm::CTimeb::operator!=( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 != lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator!=(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator>(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation >
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &obj             - [I] CTimeb object
inline bool vm::CTimeb::operator>( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 > lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator>(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::operator<(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operation <
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &obj             - [I] CTimeb object
inline bool vm::CTimeb::operator<( const CTimeb &obj )
// {{{
{
    unsigned long long lullMilliSecond1 = msec();
    unsigned long long lullMilliSecond2 = mstTimeb.time*1000+mstTimeb.millitm;
    return lullMilliSecond1 < lullMilliSecond2 ? true : false;
}
// }}} end of func CTimeb::operator<(...)
// ================================================================================================ //

// }}} ![ Class CTimeb operator realization ]
// ================================================================================================ //

// ================================================================================================ //
// ==  Class CTimeb Functional realization                                                       == //
// ================================================================================================ //
// [ Class CTimeb Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeb::timet(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Object's time_t value
// ==  Return  : tTimet&          - [O] time_t value
inline tTimet& vm::CTimeb::timet( void ) const
// {{{
{
    return mstTimeb.time;
}
// }}} end of func CTimeb::timet(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::timeb(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Object's timeb value
// ==  Return  : tTimeb&          - [O] timeb value
inline tTimeb& vm::CTimeb::timeb( void ) const
// {{{
{
    return mstTimeb;
}
// }}} end of func CTimeb::timeb(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::millitm(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Object's millitm value
// ==  Return  : unsigned short   - [O] milltm value
inline unsigned short vm::CTimeb::millitm( void ) const
// {{{
{
    return mstTimeb.millitm;
}
// }}} end of func CTimeb::millitm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::sec(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Object's second value
// ==  Return  : unsigned long long - [O] second value
inline unsigned long long vm::CTimeb::sec( void ) const
// {{{
{
    return mstTimeb.time;
}
// }}} end of func CTimeb::sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::msec(...)                                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Object's millisecond value
// ==  Return  : unsigned short&  - [O] millisecond value
inline unsigned long long vm::CTimeb::msec( void ) const
// {{{
{
    return mstTimeb.time*1000+mstTimeb.millitm;
}
// }}} end of func CTimeb::msec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::Now(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current time
// ==  Return  : tTimeb&          - [O] this object
inline tTimeb& vm::CTimeb::Now( void )
// {{{
{
    bool lbRet = vm::CTimeb::Now( mstTimeb );
    if( lbRet == false )
    {
        mllErrCode = vMakeLLong( vm::emRet::emError, errno );
    } // End of if( lbRet ... )

    return mstTimeb;
}
// }}} end of func CTimeb::Now(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::SetTime(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set timeb value
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : uiYear           - [I] Year value
// ==            uiMonth          - [I] Month value
// ==            uiDay            - [I] Day value
// ==            uiHour           - [I] Hour value
// ==            uiMin            - [I] Minute value
// ==            uiSec            - [I] Second value
// ==            usMSec           - [I] MilliSecond value
inline bool vm::CTimeb::SetTime( unsigned int uiYear, unsigned int uiMonth, unsigned int uiDay, 
                                 unsigned int uiHour, unsigned int   uiMin, unsigned int uiSec, 
                                 unsigned short usMSec )
// {{{
{
    if( uiYear < 1970 )
        return false;

    if( uiMonth > 12 || uiMonth <= 0 )
        return false;

    if( uiDay > 31 || uiDay <= 0 )
        return false;

    if( uiHour > 24 )
        return false;

    if( uiMin > 60 )
        return false;

    if( uiSec > 60 )
        return false;

    tTimetm stTm;
    stTm.tm_year = uiYear-1970;
    stTm.tm_mday = uiMonth;
    stTm.tm_mday = uiDay;
    stTm.tm_hour = uiHour;
    stTm.tm_min  = uiMin;
    stTm.tm_sec  = uiSec;

    bool lbRet = vm::CTimeb::TmToTimet( stTm, mstTimeb.time );
    if( lbRet == false )
        return false;

    mstTimeb.millitm = usMSec;

    return true;
}
// }}} end of func CTimeb::SetTime(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::GetTime(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get timeb value
// ==  Return  : bool             - [O] true  - sucess
// ==                                   false - failed
// ==  Params  : uiYear           - [I] Year value
// ==            uiMonth          - [I] Month value
// ==            uiDay            - [I] Day value
// ==            uiHour           - [I] Hour value
// ==            uiMin            - [I] Minute value
// ==            uiSec            - [I] Second value
// ==            usMSec           - [I] MilliSecond value
inline bool vm::CTimeb::GetTime( unsigned int   &uiYear, unsigned int &uiMonth, unsigned int &uiDay, 
                                 unsigned int   &uiHour, unsigned int   &uiMin, unsigned int &uiSec, 
                                 unsigned short &usMSec )
// {{{
{
    tTimetm stTm;
    bool lbRet = vm::CTimeb::TimetToTm( mstTimeb.time, stTm );
    if( lbRet == false )
        return false;

    uiYear   = stTm.tm_year;
    uiMonth  = stTm.tm_mon;
    uiDay    = stTm.tm_mday;
    uiHour   = stTm.tm_hour;
    uiMin    = stTm.tm_min;
    uiSec    = stTm.tm_sec;

    usMSec   = mstTimeb.millitm;
    return true;
}
// }}} end of func CTimeb::GetTime(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::Now(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get current timeb
// ==  Return  : bool             - [O] true  - operation sucess
// ==                                   false - operation failed
// ==  Params  : &Timeb           - [O] tTimeb object
inline bool vm::CTimeb::Now( tTimeb &stTimeb )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
    // Win coders {{{
    //  TODO : add windows codes
    // }}}
#elif      ( _V_SYS_ == _V_LUX_ )
    // Lux codes {{{
    int liRet = ftime( &stTimeb );
    if( liRet != 0 )
        return false;
    // }}}
#endif // !( _V_SYS_ == _V_WIN_ )

    return true;
}
// }}} end of func CTimeb::Now(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::mSecToTimeb(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert millisecond to tTimeb
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : &cullmillisecond - [I] millisecond value
// ==            &Timeb           - [O] Timeb object
inline void vm::CTimeb::mSecToTimeb( const unsigned long long &cullMilliSecond, tTimeb &stTimeb )
// {{{
{
    tTimeDiv_t lDiv = vTimeDiv(cullMilliSecond, 1000);
    stTimeb.time    = lDiv.quot;
    stTimeb.millitm = lDiv.rem;
}
// }}} end of func CTimeb::mSecToTimeb(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::TimebToMSec(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert tTimeb to millisecond
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : &stTimeb         - [I] Timeb object
// ==            ullMilliSecond   - [I] millisecond value
inline void vm::CTimeb::TimebToMSec( tTimeb &stTimeb, unsigned long long ullMilliSecond )
// {{{
{
    ullMilliSecond = (unsigned long long)stTimeb.time*1000+stTimeb.millitm;
}
// }}} end of func CTimeb::TimebToMSec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::TimetToTm(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert struct time_t to struct tm
// ==  Return  : bool             - [O] true  - convert sucess
// ==                                   false - convert failed
// ==  Params  : &stTimet         - [I] time_t object
// ==            &stTm            - [O] tm object
inline bool vm::CTimeb::TimetToTm( tTimet &stTimet, tTimetm &stTm )
// {{{
{
#if        ( _V_SYS_ == _V_WIN_ )
   // Win coders {{{
   //  TODO : add windows codes
   // }}}
#elif      ( _V_SYS_ == _V_LUX_ )
   // Lux codes {{{
    tTimetm* lpTm = localtime_r( &stTimet, &stTm );
    if( lpTm == nullptr )
        return false;
   // }}}
#endif // !( _V_SYS_ == _V_WIN_ ) 
    return true;
}
// }}} end of func CTimeb::TimetToTm(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeb::TmToTimet(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Convert struct tm to struct time_t
// ==  Return  : bool             - [O] true  - convert sucess
// ==                                   false - convert failed
// ==  Params  : &stTm            - [I] tm object
// ==            &stTimet         - [O] time_t object
inline bool vm::CTimeb::TmToTimet( tTimetm &stTm, tTimet &stTimet )
// {{{
{
    stTimet = ::mktime( &stTm );
    if( stTimet == -1 )
        return false;

    return true;
}
// }}} end of func CTimeb::TmToTimet(...)
// ================================================================================================ //

// }}} ![ Class CTimeb Functional realization ]
// ================================================================================================ /

// }}} ![ class CTimeb realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
