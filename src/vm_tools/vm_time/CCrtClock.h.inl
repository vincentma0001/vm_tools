// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CCrtClock.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 19:20                                                  == //
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
#include "CCrtClock.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CCrtClock Construct && Destruct realization                                         == //
// ================================================================================================ //
// [ Class CCrtClock Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CCrtClock::CCrtClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CCrtClock::CCrtClock(  )
// {{{
{
}
// }}} End of func CCrtClock::CCrtClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CCrtClock::CCrtClock()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CCrtClock::~CCrtClock(  )
// {{{
{
}
// }}} End of func CCrtClock::~CCrtClock()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::CCrtClock()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CCrtClock::CCrtClock( const CCrtClock &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CCrtClock::CCrtClock()
// ================================================================================================ //

// }}} ![ Class CCrtClock Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CCrtClock operator realization                                                      == //
// ================================================================================================ //
// [ Class CCrtClock operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CCrtClock::operator = ()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CCrtClock&       - [O] this object
inline vm::CCrtClock& vm::CCrtClock::operator = ( const CCrtClock &obj )
// {{{
{
    return *this;
}
// }}} End of func CCrtClock::operator=()
// ================================================================================================ //

// }}} ![ Class CCrtClock operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CCrtClock Functional realization                                                    == //
// ================================================================================================ //
// [ Class CCrtClock Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CCrtClock::Start(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Start count clock
inline void vm::CCrtClock::Start( void )
// {{{
{
        mtStart = clock();
}
// }}} end of func CCrtClock::Start(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::Ended(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ended count clock
// ==  Return  : unsigned long long        - [O] time different, unit of time is nanesecond
inline unsigned long long vm::CCrtClock::Ended( void )
// {{{
{
    mtEnded = clock();
    mtTimeDiff = mtEnded-mtStart;
    return ((unsigned long long) mtTimeDiff*1000000000)/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::Ended(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::d_sec(...)                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by double type, unit of time is second
// ==  Return  : double           - [O] double type time different, unit of time is second
// ==  Params  : void             - [X] # TODO : Add comment for void #
inline double vm::CCrtClock::d_sec( void )
// {{{
{
    return (double) mtTimeDiff/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::d_sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::sec(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is second
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time is second
inline unsigned long long vm::CCrtClock::sec( void )
// {{{
{
    return ((unsigned long long)mtTimeDiff)/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::sec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::msec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is millisecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time millisecond
inline unsigned long long vm::CCrtClock::msec( void )
// {{{
{
    return ((unsigned long long)mtTimeDiff*1000)/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::msec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::usec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Ouput time different by unsigned long long type, unit of time is microsecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time microsecond
inline unsigned long long vm::CCrtClock::usec( void )
// {{{
{
    return ((unsigned long long)mtTimeDiff*1000000)/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::usec(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CCrtClock::nsec(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output time different by unsigned long long type, unit of time is nanosecond
// ==  Return  : unsigned long long        - [O] unsigned long long type time different, unit of time nanosecond
inline unsigned long long vm::CCrtClock::nsec( void )
// {{{
{
    return ((unsigned long long)mtTimeDiff*1000000000)/CLOCKS_PER_SEC;
}
// }}} end of func CCrtClock::nsec(...)
// ================================================================================================ //

// }}} ![ Class CCrtClock Functional realization ]
// ================================================================================================ //



// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
