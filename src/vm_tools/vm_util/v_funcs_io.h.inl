// ================================================================================================ //
// ==                                                                                            == //
// ==                                     v_funcs_io.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 13:01                                                  == //
// ==   Modify Time          : 2020-11-11 13:01                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __V_FUNCS_IO_H_INL__
#define  __V_FUNCS_IO_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// [ Comment info ] {{{

// ================================================================================================ //
// ==  Methord : v_output(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string
// ==  Return  : bool             - [O] true  - output sucess
// ==                                   false - output failed
// ==  Params  : cpFmt            - [I] output string's format
// ==            vList            - [I] output string's format paramters
inline bool vm::v_output ( const tchar* const cpFmt, va_list& vList )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_output()"), cpFmt);

    // format string
#if defined (_MSC_VER) && (_MSC_VER > 1300)
    int liRet = vVprintf_s( cpFmt, vList );
    if (liRet < 0) 
        return false;
#else
    int liRet = vVprintf( cpFmt, vList );
    if (liRet < 0) 
        return false;
#endif

    return true;
}
// }}} end of func v_output(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_output(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string
// ==  Return  : bool             - [O] true  - output sucess
// ==                                   false - output failed
// ==  Params  : cpFmt            - [I] output string's format
// ==            ...              - [I] output string's format paramters
inline bool vm::v_output ( const tchar* const cpFmt, ... )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_output()"), cpFmt);

    // format string
    va_list vlist;
    va_start( vlist, cpFmt );
    bool lbRet = vm::v_output( cpFmt, vlist);
    va_end(vlist);

    return lbRet;
}
// }}} end of func v_output(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_output_line(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string line
// ==  Return  : bool             - [O] true  - output sucess
// ==                                   false - output failed
// ==  Params  : cpFmt            - [I] output string's format
// ==            ...              - [I] output string's format paramters
bool vm::v_output_line ( const tchar* const cpFmt, ... )
// {{{
{
    // Verify input paramters
    _VERIFY_(vT("v_output_line()"), cpFmt);

    // format string
    va_list vlist;
    va_start( vlist, cpFmt );
    bool lbRet = vm::v_output( cpFmt, vlist);
    va_end(vlist);
    vm::v_output( vT("\n") );

    return lbRet;
}
// }}} end of func v_output_line(...)
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __V_FUNCS_IO_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
