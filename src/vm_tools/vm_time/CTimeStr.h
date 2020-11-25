// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CTimeStr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 10:34                                                  == //
// ==   Modify Time          : 2020-11-25 13:00                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTIMESTR_H__
#define  __CTIMESTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    _TIMESTR_FMT_
#   define _TIMESTR_FMT_

#define Y4_MM_DD                vT("%Y4-%MM-%DD")
#define MM_DD_Y4                vT("%MM-%DD-%Y4")
#define Y2_MM_DD                vT("%Y2-%MM-%DD")
#define MM_DD_Y2                vT("%MM-%DD-%Y2")
#define Y4$MM$DD                vT("%Y4/%MM/%DD")
#define MM$DD$Y4                vT("%MM/%DD/%Y4")
#define Y2$MM$DD                vT("%MM/%DD/%Y2")
#define MM$DD$Y2                vT("%MM/%DD/%Y2")
#define Y4MMDD                  vT("%Y4%MM%DD")
#define MMDDY4                  vT("%MM%DD%Y4")
#define Y2MMDD                  vT("%Y2%MM%DD")
#define MMDDY2                  vT("%MM%DD%Y2")

#define hh$mm$ss$ms             vT("%hh:%mm:%ss.%ms")
#define ii$mm$ss$ms             vT("%ii:%mm:%ss.%ms")
#define AP_ii$mm$ss$ms          vT("%AP %ii:%mm:%ss.%ms")
#define ii$mm$ss$ms_AP          vT("%ii:%mm:%ss.%ms %AP")
#define hh$mm$ss                vT("%hh:%mm:%ss")
#define ii$mm$ss                vT("%ii:%mm:%ss")
#define AP_ii$mm$ss             vT("%AP %ii:%mm:%ss")
#define ii$mm$ss_AP             vT("%ii:%mm:%ss %AP")

#define Y4_MM_DD_hh$mm$ss$ms    vT("%Y4-%MM-%DD %hh:%mm:%ss.%ms")
#define MM_DD_Y4_hh$mm$ss$ms    vT("%MM-%DD-%Y4 %hh:%mm:%ss.%ms")
#define Y2_MM_DD_hh$mm$ss$ms    vT("%Y2-%MM-%DD %hh:%mm:%ss.%ms")
#define MM_DD_Y2_hh$mm$ss$ms    vT("%MM-%DD-%Y2 %hh:%mm:%ss.%ms")
#define Y4_MM_DD_hh$mm$ss       vT("%Y4-%MM-%DD %hh:%mm:%ss")
#define MM_DD_Y4_hh$mm$ss       vT("%MM-%DD-%Y4 %hh:%mm:%ss")
#define Y2_MM_DD_hh$mm$ss       vT("%Y2-%MM-%DD %hh:%mm:%ss")
#define MM_DD_Y2_hh$mm$ss       vT("%MM-%DD-%Y2 %hh:%mm:%ss")
#define Y4$MM$DD_hh$mm$ss$ms    vT("%Y4/%MM/%DD %hh:%mm:%ss.%ms")
#define MM$DD$Y4_hh$mm$ss$ms    vT("%MM/%DD/%Y4 %hh:%mm:%ss.%ms")
#define Y2$MM$DD_hh$mm$ss$ms    vT("%Y2/%MM/%DD %hh:%mm:%ss.%ms")
#define MM$DD$Y2_hh$mm$ss$ms    vT("%MM/%DD/%Y2 %hh:%mm:%ss.%ms")
#define Y4$MM$DD_hh$mm$ss       vT("%Y4/%MM/%DD %hh:%mm:%ss")
#define MM$DD$Y4_hh$mm$ss       vT("%MM/%DD/%Y4 %hh:%mm:%ss")
#define Y2$MM$DD_hh$mm$ss       vT("%Y2/%MM/%DD %hh:%mm:%ss")
#define MM$DD$Y2_hh$mm$ss       vT("%MM/%DD/%Y2 %hh:%mm:%ss")

#endif // !_TIMESTR_FMT_
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CTimeStr : this class wrap time's string functions
class CTimeStr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTimeStr( tTimet &stTimet, unsigned short &usMillitm, tchar* const pBuf, const size_t csztBufSize );
    inline          CTimeStr( tTimeb &stTimeb,                            tchar* const pBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CTimeStr();

private:
    // Copy construct define
    inline CTimeStr             ( const CTimeStr &obj );
    // Assignment operation
    inline CTimeStr& operator = ( const CTimeStr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // timeb value
    tTimet          &mstTimet;
    unsigned short  &musMillitm;

    // buffer's address
    tchar*          mpBuf;
    // buffer's size
    size_t          msztBufSize;

public:
    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Output formated string, more format info see this file's note.
    // Formats : %Y4 = %Y, %Y2 = %y, %MM = %m, %DD = %d, %hh = %H, %mm = %M, %ss = %S, %ms = millitm
    template< size_t tsztBufSize >
    inline tchar* Fmt    ( const tchar* const cpFmt = vT("%Y4-%MM-%DD %hh:%mm:%ss.%ms") );
    // Output formated string, more format info see this file's note.
    // Formats : %Y4 = %Y, %Y2 = %y, %MM = %m, %DD = %d, %hh = %H, %mm = %M, %ss = %S, %ms = millitm
    template< size_t tsztBufSize >
    inline size_t Fmt2   ( const tchar* const cpFmt = vT("%Y4-%MM-%DD %hh:%mm:%ss.%ms") );
    // Output a formated string by tTimet object
    inline tchar* StrTime( const tchar* const cpFmt = vT("%Y-%m-%d %H:%M:%S") );

public:
    // Output a formated string by tTimet object
    inline static size_t StrTime( const tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt );
// }}} ! Methods

}; // }}} End of class CTimeStr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CTimeStr.h.inl"
// ================================================================================================ //

#endif // ! __CTIMESTR_H__
// ================================================================================================ //
// ==  Fmt format Notes                                                                          == //
// ================================================================================================ //
// [ Fmt format Notes ] {{{

//  specifier | Replaced by                                         | Example         | StrTime Fmt
// ------------------------------------------------------------------------------------------------ //
//      %Y4   | Year                                                | 2009)           | %Y
//      %Y2   | Year, last two digits                               | 00-99           | %y
//      %MM   | Month as a decimal number                           | 01-12           | %m
//      %DD   | Day of month, zero padded                           | 01-31           | %d
//      %dd   | Day of month, space padded                          | 1-31            | %e
//      %hh   | Hour in 24h                                         | 01-24           | %H
//      %ii   | Hour in 12h                                         | 01-12           | %I
//      %mm   | Minute                                              | 00-59           | %M
//      %ss   | Second                                              | 00-60           | %S
//      %ms   | millisecond                                         | 000-999
//      %WY   | Week based year                                     | 00-99           | %g
//      %WW   | ISO 8601 weekday as number with Monday              | 1-7             | %u
//      %ww   | Weekday as a decimal number with Sunday as 0        | 0-6             | %w
//      %WN   | ISO 8601 week number                                | 00-53           | %V
//      %WS   | Week number with the first Sunday as the first day  | 00-53           | %U
//            | of week one                                         |
//      %WM   | Week number with the first Monday as the first day  | 00-53           | %W
//            | of week one                                         |
//      %DY   | Day of the year                                     | 001-366         | %j
//      %AP   | AM or PM designation                                | AM or PM        | %p
//      %AM   | Abbreviated month                                   | August          | %B
//      %am   | Abbreviated month                                   | Aug             | %b
//      %AW   | Abbreviated weekday                                 | Friday          | %A
//      %aw   | Abbreviated weekday                                 | Fri             | %a
//      %CD   | date and time representation                        | Thu Aug 23 14:55:02 2001 | %c
//      %SD   | Short MM/DD/YY date                                 | 08/23/01        | %D
//      %sd   | Short YY/MM/DD date                                 | 01/08/23        | %y/%m/%d
//      %FD   | Short YYYY-MM-DD date                               | 2001-08-23      | %F
//      %fd   | Short MM-DD-YYYY date                               | 08-23-2001      | %m-%d-%Y
//      %RT   | 24 - hour HH:MM time                                | 14:55           | %R
//      %rt   | 12 - hour clock time                                | 02:55:02 pm     | %r
//      %TT   | ISO 8601 time format                                | 14:55:02        | %T
//      %tt   | ISO 8601 time format 12 hour                        | 02:55:02        | %I:%M:%S
//      %TZ   | Timezone name                                       | CDT             | %Z
//      %ZZ   | ISO 8601 offset from UTC in timezone(1 minute = 1,  |                 | %z
//            | 1 hour = 100) If timezone cannot be determined,     |                 |
//            | no characters)                                      |                 |
//      %n    | New        - line character('\n')                   |                 | %n
//      %t    | Horizontal - tab  character('\t')                   |                 | %t
//      %%    |  A % sign - %                                       |                 | %%

// }}} ![ Fmt format Notes ]
// ================================================================================================ //
// ================================================================================================ //
// ==  StrTime format Notes :                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// [ StrTime format Notes : ] {{{
//
//  specifier | Replaced by                                         | Example
// ------------------------------------------------------------------------------------------------ //
//     %a     | Abbreviated weekday name *                          | Thu
//     %A     | Full weekday name *                                 | Thursday
//     %b     | Abbreviated month name *                            | Aug
//     %B     | Full month name *                                   | August
//     %c     | Date and time representation *                      | Thu Aug 23 14:55:02 2001
//     %C     | Year divided by 100 and truncated to integer(00-99) | 20
//     %d     | Day of the month, zero - padded(01 - 31)            | 23
//     %D     | Short MM/DD/YY date, equivalent to %m/%d/%y         | 08/23/01
//     %e     | Day of the month, space - padded(1 - 31)            | 23
//     %F     | Short YYYY-MM-DD date, equivalent to %Y-%m-%d       | 2001-08-23
//     %g     | Week - based year, last two digits(00-99)           | 01
//     %G     | Week - based year                                   | 2001
//     %h     | Abbreviated month name * (same as %b)               | Aug
//     %H     | Hour in 24h format(00 - 23)                         | 14
//     %I     | Hour in 12h format(01 - 12)                         | 02
//     %j     | Day of the year(001 - 366)                          | 235
//     %m     | Month as a decimal number(01 - 12)                  | 08
//     %M     | Minute(00 - 59)                                     | 55
//     %n     | New - line character('\n')                          |
//     %p     | AM or PM designation                                | PM
//     %r     | 12 - hour clock time *                              | 02:55:02 pm
//     %R     | 24 - hour HH:MM time, equivalent to %H:%M           | 14:55
//     %S     | Second(00 - 61)                                     | 02
//     %t     | Horizontal - tab character('\t')                    |
//     %T     | ISO 8601 time format(HH:MM:SS),equivalent to        | 14:55:02
//            | %H:%M:%S                                            |
//     %u     | ISO 8601 weekday as number with Monday as 1(1-7)    | 4
//     %U     | Week number with the first Sunday as the first day  | 33
//            | of week one(00-53)                                  |
//     %V     | ISO 8601 week number(01-53)                         | 34
//     %w     | Weekday as a decimal number with Sunday as 0(0-6)   | 4
//     %W     | Week number with the first Monday as the first day  | 34
//            | of week one(00-53)                                  |
//     %x     | Date representation *                               | 08/23/01
//     %X     | Time representation *                               | 14:55:02
//     %y     | Year, last two digits(00-99)                        | 01
//     %Y     | Year                                                | 2001
//     %z     | ISO 8601 offset from UTC in timezone(1 minute = 1,  | + 100
//            | 1 hour = 100) If timezone                           |
//            | cannot be determined, no characters                 |
//     %Z     | Timezone name or abbreviation * If timezone cannot  | CDT
//            | be determined, no characters                        |
//     %%     | A % sign                                            | %
//
// }}} ![ StrTime format Notes ]
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
