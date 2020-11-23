// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CTimePtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-24 00:05                                                  == //
// ==   Modify Time          : 2020-11-24 00:47                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CTIMEPTR_H__
#define  __CTIMEPTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
// system files inlcuded
#include <ctime>
#include <sys/timeb.h>
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#if        ( _V_SYS_ == _V_WIN_ )
// Win coders {{{
//  TODO : add windows codes
// }}}
#elif      ( _V_SYS_ == _V_LUX_ )
// Lux codes {{{
#   define  tTimeb   ::timeb
#   define  tTimet   ::time_t
// }}}
#endif // !( _V_SYS_ == _V_WIN_ )
// }}} ! Macrodefs

// Class CTimePtr : this class deal with functions about time
class CTimePtr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTimePtr( tTimeb &Timeb, tchar* const pBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CTimePtr();

private:
    // Copy construct define
    inline CTimePtr             ( const CTimePtr &obj );
    // Assignment operation
    inline CTimePtr& operator = ( const CTimePtr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tTimeb          &mTimeb;
    tchar*          mpBuf;
    size_t          msztBufSize;

    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    inline tTimet&          timet ( void ){ return mTimeb.time;    };
    inline tTimeb&          timeb ( void ){ return mTimeb;         };
    inline unsigned short&  msec  ( void ){ return mTimeb.millitm; };

    inline tTimeb& Now()
    {
        bool lbRet = vm::CTimePtr::Now( mTimeb );
        if( lbRet == false )
        {
            mllErrCode = vMakeLLong( vm::emRet::emError, errno );
        } // End of if( lbRet ... )

        return mTimeb;
    }
    inline tchar* toTimeStr( const tchar* const cpFmt )
    {
        return vm::CTimePtr::StrTime( mTimeb.time, mpBuf, msztBufSize, cpFmt );
    }

public:
    inline static bool Now( tTimeb &Timeb )
    {
        #if        ( _V_SYS_ == _V_WIN_ )
        // Win coders {{{
        //  TODO : add windows codes
        // }}}
        #elif      ( _V_SYS_ == _V_LUX_ )
        // Lux codes {{{
            int liRet = ftime( &Timeb );
            if( liRet != 0 )
                return false;
        // }}}
        #endif // !( _V_SYS_ == _V_WIN_ )

        return true;
    }

    inline tchar* StrTime( const tTimet &Timet, tchar* const pBuf, const size_t csztBufSize, const tchar* const cpFmt )
    {
        _VERIFY_( vT("CTimePtr::StrTime()"), pBuf );

        #if        ( _V_SYS_ == _V_WIN_ )
        // Win coders {{{
        //  TODO : add windows codes
        // }}}
        #elif      ( _V_SYS_ == _V_LUX_ )
        // Lux codes {{{
            struct tm* lpTm = ::localtime( &Timet );
            vStrftime(pBuf, csztBufSize, cpFmt, lpTm);
        // }}}
        #endif // !( _V_SYS_ == _V_WIN_ )

        return pBuf;
    }
// }}} ! Methods

}; // }}} End of class CTimePtr


// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CTimePtr.h.inl"
// ================================================================================================ //

#endif // ! __CTIMEPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
