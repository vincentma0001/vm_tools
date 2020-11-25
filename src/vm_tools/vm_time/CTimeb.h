// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CTimeb.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 00:05                                                  == //
// ==   Modify Time          : 2020-11-25 12:53                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTIMEB_H__
#define  __CTIMEB_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include "vm_cfgs/vm_cfg_def_ret.h"
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CMinute : this class define a minute object
class CMinute
{ // {{{

// Macrodefs : {{{
#ifndef    vSecondOfMinute
// second of minute = 60
#   define vSecondOfMinute              60
#endif // !vSecondOfMinute

#ifndef    vMilliSecondOfMinute
// millisecond of minute = 60*1000
#   define vMilliSecondOfMinute         60000
#endif // !vMilliSecondOfMinute
// }}} ! Macrodefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CMinute(                              ):muiMinutes(0)             {};
    inline          CMinute( const unsigned int cuiMinute ):muiMinutes(cuiMinute)     {};
    inline          CMinute( const CMinute           &obj ):muiMinutes(obj.muiMinutes){};
    // Destruct define
    inline virtual ~CMinute(                              ){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CMinute& operator = ( const CMinute &obj ){ muiMinutes=obj.muiMinutes; return *this; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned int        muiMinutes;
// }}} ! Members

// Methods   : {{{
public:
    unsigned long long  sec() const { return ((unsigned long long)muiMinutes)*vSecondOfMinute;     };
    unsigned long long msec() const { return ((unsigned long long)muiMinutes)*vMilliSecondOfMinute;};
// }}} ! Methods

}; // }}} End of class CMinute

// ------------------------------------------------------------------------------------------------ //

// Class CHour : this class define a hour object
class CHour
{ // {{{

// Macrodefs : {{{
#ifndef    vSecondOfHour
// second in hour = 60*60
#   define vSecondOfHour                3600
#endif // !vSecondOfHour

#ifndef    vMilliSecondOfHour
// millisecond of hour = 60*60*1000
#   define vMilliSecondOfHour           3600000
#endif // !vMilliSecondOfHour
// }}} ! Macrodefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CHour(                              ):muiHours(0)            {};
    inline          CHour( const unsigned int cuiMinute ):muiHours(cuiMinute)    {};
    inline          CHour( const CHour             &obj ):muiHours(obj.muiHours) {};
    // Destruct define
    inline virtual ~CHour(){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CHour& operator = ( const CHour &obj ){ muiHours=obj.muiHours; return *this; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned int        muiHours;
// }}} ! Members

// Methods   : {{{
public:
    unsigned long long  sec() const { return ((unsigned long long)muiHours)*vSecondOfHour;     };
    unsigned long long msec() const { return ((unsigned long long)muiHours)*vMilliSecondOfHour;};
// }}} ! Methods

}; // }}} End of class CHour

// ------------------------------------------------------------------------------------------------ //

// Class CDay : this class define a day object
class CDay
{ // {{{

// Macrodefs : {{{
#ifndef    vSecondOfDay
// second in day = 24*60*60
#   define vSecondOfDay                 86400
#endif // !vSecondOfDay

#ifndef    vMilliSecondOfDay
// millisecond in day = 24*60*60*1000
#   define vMilliSecondOfDay            86400000
#endif // !vMilliSecondOfDay
// }}} ! Macrodefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CDay(                              ):muiDays(0)            {};
    inline          CDay( const unsigned int cuiMinute ):muiDays(cuiMinute)    {};
    inline          CDay( const CDay              &obj ):muiDays(obj.muiDays)  {};
    // Destruct define
    inline virtual ~CDay(){};
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CDay& operator = ( const CDay &obj ){ muiDays=obj.muiDays; return *this; };
// }}} ! Operators

// Menbers   : {{{
private:
    unsigned int        muiDays;
// }}} ! Members

// Methods   : {{{
public:
    unsigned long long  sec() const { return ((unsigned long long)muiDays)*vSecondOfDay;     };
    unsigned long long msec() const { return ((unsigned long long)muiDays)*vMilliSecondOfDay;};
// }}} ! Methods

}; // }}} End of class CDay

// ------------------------------------------------------------------------------------------------ //

// Class CTimeb : this class deal with functions about time
class CTimeb
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTimeb ( tTimeb &stTimeb );
    // Destruct define
    inline virtual ~CTimeb (                 );

private:
    // Copy construct define
    inline          CTimeb ( const CTimeb &obj );
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Get current timeb object
    inline tTimeb& operator &  ();
    // Get current timeb object pointer
    inline tTimeb* operator *  ();

    // Assignment operation
    inline tTimeb& operator =  ( const CTimeb                        &obj );
    // Assignment operation
    inline tTimeb& operator =  ( const unsigned long long cullMilliSecond );
    // Assignment operation
    inline tTimeb& operator =  ( const tTimeb                    &stTimeb );
    // Assignment operation
    inline tTimeb& operator =  ( const tTimet                    &stTimet );

    inline tTimeb& operator +  ( const CTimeb                        &obj );
    inline tTimeb& operator +  ( const tTimeb                    &stTimeb );
    inline tTimeb& operator +  ( const unsigned long long cullMilliSecond );
    inline tTimeb& operator +  ( const tTimet                     tSecond );
    inline tTimeb& operator +  ( const CDay                         cDays );
    inline tTimeb& operator +  ( const CHour                       cHours );
    inline tTimeb& operator +  ( const CMinute                   cMinutes );

    inline tTimeb& operator += ( const CTimeb                        &obj );
    inline tTimeb& operator += ( const tTimeb                    &stTimeb );
    inline tTimeb& operator += ( const unsigned long long cullMilliSecond );
    inline tTimeb& operator += ( const tTimet                     tSecond );
    inline tTimeb& operator += ( const CDay                         cDays );
    inline tTimeb& operator += ( const CHour                       cHours );
    inline tTimeb& operator += ( const CMinute                   cMinutes );

    inline tTimeb& operator -  ( const CTimeb                        &obj );
    inline tTimeb& operator -  ( const tTimeb                    &stTimeb );
    inline tTimeb& operator -  ( const unsigned long long cullMilliSecond );
    inline tTimeb& operator -  ( const tTimet                     tSecond );
    inline tTimeb& operator -  ( const CDay                         cDays );
    inline tTimeb& operator -  ( const CHour                       cHours );
    inline tTimeb& operator -  ( const CMinute                   cMinutes );

    inline tTimeb& operator -= ( const CTimeb                        &obj );
    inline tTimeb& operator -= ( const tTimeb                    &stTimeb );
    inline tTimeb& operator -= ( const unsigned long long cullMilliSecond );
    inline tTimeb& operator -= ( const tTimet                     tSecond );
    inline tTimeb& operator -= ( const CDay                         cDays );
    inline tTimeb& operator -= ( const CHour                       cHours );
    inline tTimeb& operator -= ( const CMinute                   cMinutes );

    inline bool    operator == ( const CTimeb                        &obj );
    inline bool    operator != ( const CTimeb                        &obj );
    inline bool    operator >  ( const CTimeb                        &obj );
    inline bool    operator <  ( const CTimeb                        &obj );

    inline bool    operator == ( const tTimeb                    &stTimeb );
    inline bool    operator != ( const tTimeb                    &stTimeb );
    inline bool    operator >  ( const tTimeb                    &stTimeb );
    inline bool    operator <  ( const tTimeb                    &stTimeb );
// }}} ! Operators

// Menbers   : {{{
protected:
    // timeb value
    tTimeb          &mstTimeb;

public:
    // Error code
    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // reset timeb value
    inline void                Reset ( void );
    
    // object's time_t value
    inline tTimet&             timet ( void ) const;
    // object's timeb value
    inline tTimeb&             timeb ( void ) const;
    // object's millitm value
    inline unsigned short    millitm ( void ) const;

    // object's seconde value
    inline unsigned long long    sec ( void ) const;
    // object's millisecond value
    inline unsigned long long   msec ( void ) const;

    // Get current time
    inline tTimeb&               Now ( void );

    // Decide this object is after stTimeb or not
    inline bool isAfter( tTimeb &szTimeb );
    // Decide this object is before stTimeb or not
    inline bool isBefor( tTimeb &szTimeb );

    // Set time value
    inline bool SetTime ( unsigned int    uiYear, unsigned int  uiMonth, unsigned int  uiDay,
                          unsigned int    uiHour, unsigned int    uiMin, unsigned int  uiSec,
                          unsigned short  usMSec = 0 );
    // Get time value
    inline bool GetTime ( unsigned int   &uiYear, unsigned int &uiMonth, unsigned int &uiDay, 
                          unsigned int   &uiHour, unsigned int   &uiMin, unsigned int &uiSec, 
                          unsigned short &usMSec );

public:
    // Get current timeb
    inline static tTimeb  TimeNow( void );
    // Set timeb value
    inline static void Set( tTimeb &stTimebDst, const tTimeb &stTimebSrc );

    // Convert millisecond to tTimeb
    inline static void               mSecToTimeb( const unsigned long long &cullMilliSecond, tTimeb &stTimeb );
    // Convert tTimeb to millisecond
    inline static unsigned long long TimebToMSec( const tTimeb &stTimeb,  unsigned long long &ullMilliSecond );

    // Convert struct time_t to struct tm
    inline static bool TimetToTm( tTimet &stTimet, tTimetm  &stTm );
    // Convert struct tm to struct time_t
    inline static bool TmToTimet( tTimetm  &stTm, tTimet &stTimet );
// }}} ! Methods

}; // }}} End of class CTimeb

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CTimeb.h.inl"
// ================================================================================================ //


#endif // ! __CTIMEB_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
