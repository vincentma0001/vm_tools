// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CTimeStr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 10:35                                                  == //
// ==   Modify Time          : 2020-11-25 19:49                                                  == //
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
//.vm's.function.depend.on.included
#include <vm_tools/vm_util.h>
//.vm's.function.files.inlcuded
#include "CTimeStr.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr Construct && Destruct realization                                          == //
// ================================================================================================ //
// [ Class CTimeStr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::CTimeStr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CTimeStr::CTimeStr( tTimet &stTimet, unsigned short &usMillitm, tchar* const pBuf, const size_t csztBufSize )
    :mstTimet(stTimet),musMillitm(usMillitm), mpBuf(pBuf), msztBufSize(csztBufSize)
// {{{
{
}
// }}} End of func CTimeStr::CTimeStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::CTimeStr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CTimeStr::CTimeStr( tTimeb &stTimeb, tchar* const pBuf, const size_t csztBufSize )
    :mstTimet(stTimeb.time),musMillitm(stTimeb.millitm), mpBuf(pBuf), msztBufSize(csztBufSize)
// {{{
{
}
// }}} End of func CTimeStr::CTimeStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CTimeStr::CTimeStr()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CTimeStr::~CTimeStr(  )
// {{{
{
}
// }}} End of func CTimeStr::~CTimeStr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::CTimeStr()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CTimeStr::CTimeStr( const CTimeStr &obj )
    :mstTimet(obj.mstTimet),musMillitm(obj.musMillitm), mpBuf(0), msztBufSize(0)
// {{{
{
    *this = obj;
}
// }}} End of func CTimeStr::CTimeStr()
// ================================================================================================ //

// }}} ![ Class CTimeStr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr operator realization                                                       == //
// ================================================================================================ //
// [ Class CTimeStr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::operator = ()                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CTimeStr&        - [O] this object
inline vm::CTimeStr& vm::CTimeStr::operator = ( const CTimeStr &obj )
// {{{
{
    return *this;
}
// }}} End of func CTimeStr::operator=()
// ================================================================================================ //

// }}} ![ Class CTimeStr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CTimeStr Functional realization                                                     == //
// ================================================================================================ //
// [ Class CTimeStr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CTimeStr::Fmt(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output formated string, more format info see this file's note.
// ==  Return  : tchar*           - [O] Formated string
// ==  Params  : cpFmt            - [I] string's format
template< size_t tsztBufSize >
inline tchar* vm::CTimeStr::Fmt( const tchar* const cpFmt )
// {{{
{
    vm::CTimeStr::Fmt<tsztBufSize>( mstTimet, musMillitm, mpBuf, msztBufSize, cpFmt );
    return mpBuf;
}
// }}} end of func CTimeStr::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::Fmt2(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output formated string, more format info see this file's note.
// ==  Return  : sizt_t           - [O] formated string's length
// ==  Params  : cpFmt            - [I] string's format
template< size_t tsztBufSize >
inline size_t vm::CTimeStr::Fmt2( const tchar* const cpFmt )
// {{{
{
    return vm::CTimeStr::Fmt<tsztBufSize>( mstTimet, musMillitm, mpBuf, msztBufSize, cpFmt );
}
// }}} end of func CTimeStr::Fmt2(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::StrTime(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string by object
// ==  Return  : tchar*           - [O] formated string
// ==  Params  : cpFmt            - [I] string's format
inline tchar* vm::CTimeStr::StrTime( const tchar* const cpFmt )
// {{{
{
    _VERIFY_( vT("CTimeStr::StrTime()"), cpFmt );

    size_t lsztRet = vm::CTimeStr::StrTime( mstTimet, mpBuf, msztBufSize, cpFmt );
    if( lsztRet == 0 )
        mllErrCode = vMakeLLong( vm::emRet::emError, errno );

    return mpBuf;
}
// }}} end of func CTimeStr::StrTime(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::StrTime(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string by tTimet object
// ==  Return  : tchar*           - [O] formated string
// ==  Params  : &Timet           - [I] tTimet object
// ==            pBuf             - [O] formated string's buffer
// ==            csztBufSize      - [I] formated string's buffer's size
// ==            cpFmt            - [I] string's format
inline size_t vm::CTimeStr::StrTime( const tTimet &stTimet, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt )
// {{{
{
    _VERIFY_2_( vT("CTimeStr::StrTime()"), pBuf, cpFmt );

#if        ( _V_SYS_ == _V_WIN_ )
    // Win coders {{{
    //  TODO : add windows codes
    // }}}
#elif      ( _V_SYS_ == _V_LUX_ )
    // Lux codes {{{
        struct tm* lpTm = ::localtime( &stTimet );
        size_t lsztRet = vStrftime(pBuf, csztBufSize, cpFmt, lpTm);
    // }}}
#endif // !( _V_SYS_ == _V_WIN_ )

    return lsztRet;
}
// }}} end of func CTimeStr::StrTime(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CTimeStr::Fmt(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output formated string, more format info see this file's note.
// ==  Return  : size_t           - [O] Formated string's length
// ==  Params  : &stTimet         - [I] time_t object
// ==            cusMSec          - [I] millisecond value
// ==            pBuf             - [O] formated string's buffer 
// ==            csztBufSize      - [I] formated string's buffer size
// ==            cpFmt            - [I] string's format
template < size_t tsztBufSize >
inline size_t vm::CTimeStr::Fmt( const tTimet &stTimet, const unsigned short cusMSec, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt )
// {{{
{
    // Initialize CParse object
    vm::CParser loParser(vT('%'), cpFmt);

    // Regist Pattern object
    //      %Y4  (Year                           e.g.                     2009)  = %Y
    vm::CPattern loPatternDTForY4(vT("%Y4"), vT("%Y"));
    loParser.Regist(loPatternDTForY4);
    //      %Y2  (Year, last two digits          e.g.                    00-99)  = %y
    vm::CPattern loPatternDTForY2(vT("%Y2"), vT("%y"));
    loParser.Regist(loPatternDTForY2);
    //      %MM  (Month as a decimal number      e.g.                    01-12)  = %m
    vm::CPattern loPatternDTForMM(vT("%MM"), vT("%m"));
    loParser.Regist(loPatternDTForMM);
    //      %DD  (Day of month, zero padded      e.g,                    01-31)  = %d
    vm::CPattern loPatternDTForDD(vT("%DD"), vT("%d"));
    loParser.Regist(loPatternDTForDD);
    //      %dd  (Day of month, space padded     e.g,                     1-31)  = %e
    vm::CPattern loPatternDTFordd(vT("%dd"), vT("%e"));
    loParser.Regist(loPatternDTFordd);
    //      %hh  (Hour in 24h                    e.g.                    01-24)  = %H
    vm::CPattern loPatternDTForhh(vT("%hh"), vT("%H"));
    loParser.Regist(loPatternDTForhh);
    //      %II  (Hour in 12h                    e.g.                    01-12)  = %I
    vm::CPattern loPatternDTForII(vT("%ii"), vT("%I"));
    loParser.Regist(loPatternDTForII);
    //      %mm  (Minute                         e.g.                    00-59)  = %M
    vm::CPattern loPatternDTFormm(vT("%mm"), vT("%M"));
    loParser.Regist(loPatternDTFormm);
    //      %ss  (Second                         e.g.                    00-61)  = %S
    vm::CPattern loPatternDTForss(vT("%ss"), vT("%S"));
    loParser.Regist(loPatternDTForss);
    //      %ms  (millisecond                    e.g.                  000-999)
    vm::CPattern loPatternDTForms(vT("%ms"), vm::CAny<128>(cusMSec).toStr2( vStrFmtUShort_zw(3) ));
    loParser.Regist(loPatternDTForms);
    //      %WY  (Week based year                e.g.                    00-99)  = %g
    vm::CPattern loPatternDTForWY(vT("%WY"), vT("%g"));
    loParser.Regist(loPatternDTForWY);
    //      %WW  (ISO 8601 weekday as number with Monday          e.g.     1-7)  = %u
    vm::CPattern loPatternDTForWW(vT("%WW"), vT("%u"));
    loParser.Regist(loPatternDTForWW);
    //      %ww  (Weekday as a decimal number with Sunday as 0    e.g.     0-6)  = %w
    vm::CPattern loPatternDTForww(vT("%ww"), vT("%w"));
    loParser.Regist(loPatternDTForww);
    //      %WN  (ISO 8601 week number           e.g.                    00-53)  = %V
    vm::CPattern loPatternDTForWN(vT("%WN"), vT("%V"));
    loParser.Regist(loPatternDTForWN);
    //      %WS  (Week number with the first Sunday as the first day of week one  e.g. 00-53 ) = %U
    vm::CPattern loPatternDTForWS(vT("%WS"), vT("%U"));
    loParser.Regist(loPatternDTForWS);
    //      %WM  (Week number with the first Monday as the first day of week one  e.g. 00-53 ) = %W
    vm::CPattern loPatternDTForWM(vT("%WM"), vT("%W"));
    loParser.Regist(loPatternDTForWM);
    //      %DY  (Day of the year                e.g.                  001-366)  = %j
    vm::CPattern loPatternDTForDY(vT("%DY"), vT("%j"));
    loParser.Regist(loPatternDTForDY);
    //      %AP  (AM or PM designation           e.g.                 AM or PM)  = %p
    vm::CPattern loPatternDTForAP(vT("%AP"), vT("%p"));
    loParser.Regist(loPatternDTForAP);
    //      %AM  (Abbreviated month              e.g.                   August)  = %B
    vm::CPattern loPatternDTForAM(vT("%AM"), vT("%B"));
    loParser.Regist(loPatternDTForAM);
    //      %am  (Abbreviated month              e.g.                      Aug)  = %b
    vm::CPattern loPatternDTForam(vT("%am"), vT("%b"));
    loParser.Regist(loPatternDTForam);
    //      %AW  (Abbreviated weekday            e.g.                   Friday)  = %A
    vm::CPattern loPatternDTForAW(vT("%AW"), vT("%A"));
    loParser.Regist(loPatternDTForAW);
    //      %aw  (Abbreviated weekday            e.g.                      Fri)  = %a
    vm::CPattern loPatternDTForaw(vT("%aw"), vT("%a"));
    loParser.Regist(loPatternDTForaw);
    //      %CD  (date and time representation   e.g. Thu Aug 23 14:55:02 2001)  = %c
    vm::CPattern loPatternDTForCD(vT("%CD"), vT("%c"));
    loParser.Regist(loPatternDTForCD);
    //      %SD  (Short MM/DD/YY date            e.g.                 08/23/01)  = %D
    vm::CPattern loPatternDTForSD(vT("%SD"), vT("%D"));
    loParser.Regist(loPatternDTForSD);
    //      %sd  (Short YY/MM/DD date            e.g.                 01/08/23)  = %y/%m/%d
    vm::CPattern loPatternDTForsd(vT("%sd"), vT("%y/%m/%d"));
    loParser.Regist(loPatternDTForsd);
    //      %FD  (Short YYYY-MM-DD date          e.g.               2001-08-23)  = %F
    vm::CPattern loPatternDTForFD(vT("%FD"), vT("%F"));
    loParser.Regist(loPatternDTForFD);
    //      %fd  (Short YYYY-MM-DD date          e.g.               08-23-2001)  = %m-%d-%Y
    vm::CPattern loPatternDTForfd(vT("%fd"), vT("%m-%d-%Y"));
    loParser.Regist(loPatternDTForfd);
    //      %RT  (24 - hour HH:MM time           e.g.                    14:55)  = %R
    vm::CPattern loPatternDTForRT(vT("%RT"), vT("%R"));
    loParser.Regist(loPatternDTForRT);
    //      %rt  (12 - hour clock time           e.g.              02:55:02 pm)  = %r
    vm::CPattern loPatternDTForrt(vT("%rt"), vT("%r"));
    loParser.Regist(loPatternDTForrt);
    //      %TT  (ISO 8601 time format           e.g.                 14:55:02)  = %T
    vm::CPattern loPatternDTForTT(vT("%TT"), vT("%T"));
    loParser.Regist(loPatternDTForTT);
    //      %tt  (ISO 8601 time format 12 hour   e.g.                 02:55:02)  = %I:%M:%S
    vm::CPattern loPatternDTFortt(vT("%tt"), vT("%I:%M:%S"));
    loParser.Regist(loPatternDTFortt);
    //      %TZ  (Timezone name                  e.g.                      CDT)  = %Z
    vm::CPattern loPatternDTForTZ(vT("%TZ"), vT("%Z"));
    loParser.Regist(loPatternDTForTZ);
    //      %ZZ  (ISO 8601 offset from UTC in timezone(1 minute = 1,             = %z
    //            1 hour = 100) If timezone cannot be determined, 
    //            no characters)
    vm::CPattern loPatternDTForZZ(vT("%ZZ"), vT("%z"));
    loParser.Regist(loPatternDTForZZ);

    tchar lszNewFmt[tsztBufSize] = { 0x00 };
    loParser.Parse(lszNewFmt, sizeof(lszNewFmt));

    size_t lsztStringlen = vm::CTimeStr::StrTime( stTimet, pBuf, csztBufSize, lszNewFmt );
    return lsztStringlen;
}
// }}} end of func CTimeStr::Fmt(...)
// ================================================================================================ //

// }}} ![ Class CTimeStr Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
