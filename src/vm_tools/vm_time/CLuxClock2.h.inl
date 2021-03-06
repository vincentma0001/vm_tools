// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CLuxClock2.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 21:15                                                  == //
// ==   Modify Time          : 2020-11-24 09:28                                                  == //
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
#include "CLuxClock2.h"
// }}}
// ================================================================================================ //



// ================================================================================================ //
// ==  Class CLuxClock2 Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CLuxClock2 Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock2::CLuxClock2()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CLuxClock2::CLuxClock2(  )
// {{{
{
}
// }}} End of func CLuxClock2::CLuxClock2()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CLuxClock2::CLuxClock2()                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CLuxClock2::~CLuxClock2(  )
// {{{
{
}
// }}} End of func CLuxClock2::~CLuxClock2()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::CLuxClock2()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CLuxClock2::CLuxClock2( const CLuxClock2 &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CLuxClock2::CLuxClock2()
// ================================================================================================ //

// }}} ![ Class CLuxClock2 Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CLuxClock2 operator realization                                                     == //
// ================================================================================================ //
// [ Class CLuxClock2 operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock2::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CLuxClock2&      - [O] this object
inline vm::CLuxClock2& vm::CLuxClock2::operator = ( const CLuxClock2 &obj )
// {{{
{
    return *this;
}
// }}} End of func CLuxClock2::operator=()
// ================================================================================================ //

// }}} ![ Class CLuxClock2 operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CLuxClock2 Functional realization                                                   == //
// ================================================================================================ //
// [ Class CLuxClock2 Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock2::Start(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Start count clock
inline void vm::CLuxClock2::Start( void )
// {{{
{
    ::gettimeofday(&mtStart,&mtTimeZone);
}
// }}} end of func CLuxClock2::Start(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::Ended(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ended count clock
// ==  Return  : unsigned long long        - [O] time different, unit of time is nanesecond
inline unsigned long long vm::CLuxClock2::Ended( void )
// {{{
{
    ::gettimeofday(&mtEnded, &mtTimeZone);
    mullTimeDiff = (((unsigned long long)mtEnded.tv_sec)*1000000000+((unsigned long long)mtEnded.tv_usec)*1000 ) - 
                  (((unsigned long long)mtStart.tv_sec)*1000000000+((unsigned long long)mtStart.tv_usec)*1000 );
    return mullTimeDiff;
}
// }}} end of func CLuxClock2::Ended(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::d_sec(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by double type, unit of time is second
// ==  Return  : double           - [O] double type time different, unit of time is second
// ==  Params  : void             - [X] # TODO : Add comment for void #
inline double vm::CLuxClock2::d_sec( void )
// {{{
{
    return (  double )  mullTimeDiff/1000000000  ;
}
// }}} end of func CLuxClock2::d_sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::sec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is second
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time is second
inline unsigned long long vm::CLuxClock2::sec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000000000 );
}
// }}} end of func CLuxClock2::sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::msec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is millisecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time millisecond
inline unsigned long long vm::CLuxClock2::msec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000000    );
}
// }}} end of func CLuxClock2::msec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::usec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is microsecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time microsecond
inline unsigned long long vm::CLuxClock2::usec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000       );
}
// }}} end of func CLuxClock2::usec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock2::nsec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is nanosecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time nanosecond
inline unsigned long long vm::CLuxClock2::nsec( void )
// {{{
{
    return mullTimeDiff;
}
// }}} end of func CLuxClock2::nsec(...)
// ================================================================================================ //

// }}} ![ Class CLuxClock2 Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
