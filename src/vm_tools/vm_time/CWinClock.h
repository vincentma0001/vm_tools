// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinClock.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 22:17                                                  == //
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

#ifndef  __CWINCLOCK_H__
#define  __CWINCLOCK_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
#include <windows.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CWinClock : this class wrap windows' count functions
class CWinClock
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CWinClock();
    // Destruct define
    inline virtual ~CWinClock();

private:
    // Copy construct define
    inline CWinClock             ( const CWinClock &obj );
    // Assignment operation
    inline CWinClock& operator = ( const CWinClock &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    LARGE_INTEGER   mliFrequency;
    LARGE_INTEGER   mliStart;
    LARGE_INTEGER   mliStop;
    long long       mllTimeDiff;

    // Error code
    long long       mllErrCode;
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
    // nuput time different by long long type, unit of time is microsecond
    inline long long usec ( void );
     // nutput time different by long long type, unit of time is nanosecond
    inline long long nsec ( void );
// }}} ! Methods

}; // }}} End of class CWinClock

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CWinClock.h.inl"
// ================================================================================================ //

#endif // ! __CWINCLOCK_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
