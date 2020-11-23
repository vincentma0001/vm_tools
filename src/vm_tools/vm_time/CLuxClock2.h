// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CLuxClock2.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 20:58                                                  == //
// ==   Modify Time          : 2020-11-23 22:12                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CLUXCLOCK2_H__
#define  __CLUXCLOCK2_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
// system files inlcuded
#include <sys/time.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CLuxClock2 : this class wrap gettimeofday functions
class CLuxClock2
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CLuxClock2();
    // Destruct define
    inline virtual ~CLuxClock2();

private:
    // Copy construct define
    inline CLuxClock2             ( const CLuxClock2 &obj );
    // Assignment operation
    inline CLuxClock2& operator = ( const CLuxClock2 &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    struct timeval          mtStart;
    struct timeval          mtEnded;
    struct timezone         mtTimeZone;
    long long               mllTimeDiff;
// }}} ! Members

// Methods   : {{{
public:
    // Start count clock
    inline void      Start( void );
    // Ended count clock
    inline long long Ended( void );

    // Ouput time different by double type, unit of time is second
    inline double  d_sec  ( void );
    // Ouput time different by long long type, unit of time is second
    inline long long sec  ( void );
    // Output time different by long long type, unit of time is millisecond
    inline long long msec ( void );
    // Ouput time different by long long type, unit of time is microsecond
    inline long long usec ( void );
    // Output time different by long long type, unit of time is nanosecond
    inline long long nsec ( void );
// }}} ! Methods

}; // }}} End of class CLuxClock2

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CLuxClock2.h.inl"
// ================================================================================================ //


#endif // ! __CLUXCLOCK2_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
