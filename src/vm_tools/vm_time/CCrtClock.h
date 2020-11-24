// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CCrtClock.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 19:19                                                  == //
// ==   Modify Time          : 2020-11-24 09:31                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CCRTCLOCK_H__
#define  __CCRTCLOCK_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
// crt, std files included
#include <time.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CCrtClock : this class wrap c runtion clock functions
class CCrtClock
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CCrtClock();
    // Destruct define
    inline virtual ~CCrtClock();

private:
    // Copy construct define
    inline CCrtClock             ( const CCrtClock &obj );
    // Assignment operation
    inline CCrtClock& operator = ( const CCrtClock &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    clock_t         mtStart;
    clock_t         mtEnded;
    clock_t         mtTimeDiff;
// }}} ! Members

// Methods   : {{{
public:
    // Start count clock
    inline void               Start( void );
    // Ended count clock
    inline unsigned long long Ended( void );

    // Ouput time different by double type, unit of time is second
    inline double           d_sec  ( void );
    // Ouput time different by unsigned long long type, unit of time is second
    inline unsigned long long sec  ( void );
    // Output time different by unsigned long long type, unit of time is millisecond
    inline unsigned long long msec ( void );
    // Ouput time different by unsigned long long type, unit of time is microsecond
    inline unsigned long long usec ( void );
    // Output time different by unsigned long long type, unit of time is nanosecond
    inline unsigned long long nsec ( void );
// }}} ! Methods

}; // }}} End of class CCrtClock

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CCrtClock.h.inl"
// ================================================================================================ //


#endif // ! __CCRTCLOCK_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
