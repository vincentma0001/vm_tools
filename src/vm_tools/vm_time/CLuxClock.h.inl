// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CLuxClock.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 20:00                                                  == //
// ==   Modify Time          : 2020-11-24 09:29                                                  == //
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
#include "CLuxClock.h"
// }}}
// ================================================================================================ //



// ================================================================================================ //
// ==  Class CLuxClock Construct && Destruct realization                                         == //
// ================================================================================================ //
// [ Class CLuxClock Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock::CLuxClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CLuxClock::CLuxClock(  )
// {{{
{
}
// }}} End of func CLuxClock::CLuxClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CLuxClock::CLuxClock()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CLuxClock::~CLuxClock(  )
// {{{
{
}
// }}} End of func CLuxClock::~CLuxClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::CLuxClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CLuxClock::CLuxClock( const CLuxClock &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CLuxClock::CLuxClock()
// ================================================================================================ //

// }}} ![ Class CLuxClock Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CLuxClock operator realization                                                      == //
// ================================================================================================ //
// [ Class CLuxClock operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock::operator = ()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CLuxClock&       - [O] this object
inline vm::CLuxClock& vm::CLuxClock::operator = ( const CLuxClock &obj )
// {{{
{
    return *this;
}
// }}} End of func CLuxClock::operator=()
// ================================================================================================ //

// }}} ![ Class CLuxClock operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CLuxClock Functional realization                                                    == //
// ================================================================================================ //
// [ Class CLuxClock Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CLuxClock::Start(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Start count clock
inline void vm::CLuxClock::Start( void )
// {{{
{
    ::clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &mtStart);
}
// }}} end of func CLuxClock::Start(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::Ended(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ended count clock
// ==  Return  : unsigned long long        - [O] time different, unit of time is nanesecond
inline unsigned long long vm::CLuxClock::Ended( void )
// {{{
{
    ::clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &mtEnded);
    mullTimeDiff = (((unsigned long long)mtEnded.tv_sec)*1000000000+mtEnded.tv_nsec)-(((unsigned long long)mtStart.tv_sec)*1000000000+mtStart.tv_nsec);
    return mullTimeDiff;
}
// }}} end of func CLuxClock::Ended(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::d_sec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by double type, unit of time is second
// ==  Return  : double           - [O] double type time different, unit of time is second
// ==  Params  : void             - [X] # TODO : Add comment for void #
inline double vm::CLuxClock::d_sec( void )
// {{{
{
    return (  double )  mullTimeDiff/1000000000 ;
}
// }}} end of func CLuxClock::d_sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::sec(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is second
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time is second
inline unsigned long long vm::CLuxClock::sec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000000000 );
}
// }}} end of func CLuxClock::sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::msec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is millisecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time millisecond
inline unsigned long long vm::CLuxClock::msec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000000    );
}
// }}} end of func CLuxClock::msec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::usec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is microsecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time microsecond
inline unsigned long long vm::CLuxClock::usec( void )
// {{{
{
    return (unsigned long long)( mullTimeDiff/1000       );
}
// }}} end of func CLuxClock::usec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CLuxClock::nsec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is nanosecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time nanosecond
inline unsigned long long vm::CLuxClock::nsec( void )
// {{{
{
    return mullTimeDiff;
}
// }}} end of func CLuxClock::nsec(...)
// ================================================================================================ //

// }}} ![ Class CLuxClock Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
