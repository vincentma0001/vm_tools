// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CLuxClock.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 20:00                                                  == //
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

#ifndef  __CLUXCLOCK_H__
#define  __CLUXCLOCK_H__


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

// Class CLuxClock : this class wrap linux clock_gettime functions
class CLuxClock
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CLuxClock();
    // Destruct define
    inline virtual ~CLuxClock();

private:
    // Copy construct define
    inline CLuxClock             ( const CLuxClock &obj );
    // Assignment operation
    inline CLuxClock& operator = ( const CLuxClock &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    struct timespec         mtStart;
    struct timespec         mtEnded;
    unsigned long long      mullTimeDiff;
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

}; // }}} End of class CLuxClock

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CLuxClock.h.inl"
// ================================================================================================ //


#endif // ! __CLUXCLOCK_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
