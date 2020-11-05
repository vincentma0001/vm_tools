// ================================================================================================ //
// ==                                                                                            == //
// ==                                           CLog.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-02 08:22                                                  == //
// ==   Modify Time          : 2020-11-02 08:22                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CLOG_H__
#define  __CLOG_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CLog : This class deal with log info                                                == //
// ------------------------------------------------------------------------------------------------ //
class CLog 
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emLogLevel : this enum list log levels
    enum emLogLevel
    // {{{
    {
        ALL = 0xFF,
        NUL = 0x00,

        ERR = 0x01,
        DBG = 0x02,
        WAN = 0x04,
        INF = 0x08
    };
    // }}} End of def enum emLogLevel
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CLog( const emLogLevel eLevel ) : mLevel(eLevel), mpLogPrev(nullptr), mpLogNext(nullptr);
    // Destruct define
    inline virtual ~CLog();

private:
    // Copy construct define
    inline CLog             ( const CLog &obj );
    // Assignment operation
    inline CLog& operator = ( const CLog &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    CLog*               mpLogNext;
    CLog*               mpLogPrev;

    const emLogLevel    mLevel;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    CLog*   Prev( )
    {
        return mpLogPrev;
    }
    CLog*   Next( )
    {
        return mpLogNext;
    };
    CLog*   Root( )
    {
        CLog* lpPrev = mpLogPrev;
        CLog* lpNow  = this;
        while ( lpPrev != nullptr )
        {
            lpNow  = lpPrev;
            lpPrev = lpPrev->mpLogPrev;
        }

        return lpNow;
    };
    CLog*   Tail( )
    {
        CLog* lpNext = mpLogNext;
        CLog* lpNow  = this;
        while ( lpNext != nullptr  )
        {
            lpNow  = lpNext;
            lpNext = lpNext->mpLogNext;
        }

        return lpNow;
    }


    bool    Push( const CLog& oNote );


    virtual bool    Output( const tchar* cpFmt, ... )
    {
        
    }
    virtual bool    Output( const tchar* cpFmt, va_list& vList );
    /* TODO Add class's Methods here */
// }}} ! Methods

};
// }}} ! [ class CLog ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CLog.h.inl"
// ================================================================================================ //      


#endif // ! __CLOG_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
