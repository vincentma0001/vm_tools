// ================================================================================================ //
// ==                                                                                            == //
// ==                                       v_funcs_io.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 13:01                                                  == //
// ==   Modify Time          : 2020-11-18 09:48                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __V_FUNCS_IO_H__
#define  __V_FUNCS_IO_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    vOutput
#   define vOutput      vm::v_output
#endif // !vOutput

#ifndef    vLine
#   define vLine        vm::v_output_line
#endif // !vLine
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Format string, and copy new string to dst buffer
inline int  v_sprintf ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_            ... );
// Format string, and copy new string to dst buffer
inline int  v_sprintf ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList );

// Output a formated string
inline bool v_output      ( _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList );
// Output a formated string
inline bool v_output      ( _vIn_ const tchar* const cpFmt, _vIn_            ... );

// Output a formated string line
inline bool v_output_line ( _vIn_ const tchar* const cpFmt, _vIn_            ... );

}; // }}} End of namespace vm
// ================================================================================================ //
// functions realization
#include "v_funcs_io.h.inl"
// ================================================================================================ //


#endif // ! __V_FUNCS_IO_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
