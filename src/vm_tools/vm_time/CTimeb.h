// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CTimeb.h                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-23 23:22                                                  == //
// ==   Modify Time          : 2020-11-23 23:57                                                  == //
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
// system files inlcuded
#include "vm_cfgs/vm_cfg_def_ret.h"
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

// ------------------------------------------------------------------------------------------------ //

// Class CTimeb : this class deal with about timeb's functions
class CTimeb
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTimeb( tTimeb &Timeb );
    // Destruct define
    inline virtual ~CTimeb();

private:
    // Copy construct define
    inline CTimeb             ( const CTimeb &obj );
    // Assignment operation
    inline CTimeb& operator = ( const CTimeb &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tTimeb          &mTimeb;

    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    inline tTimet&          GetTimet  ( void ){ return mTimeb.time;    };
    inline tTimeb&          GetTimeb  ( void ){ return mTimeb;         };
    inline unsigned short&  GetMillitm( void ){ return mTimeb.millitm; };

    inline tTimeb& Now()
    {
        bool lbRet = vm::CTimeb::Now( mTimeb );
        if( lbRet == false )
        {
            mllErrCode = vMakeLLong( vm::emRet::emError, errno );
        } // End of if( lbRet ... )

        return mTimeb;
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
