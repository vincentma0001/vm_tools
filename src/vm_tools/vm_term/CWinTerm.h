// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CWinTerm..h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 19:38:42                                               == //
// ==   Modify Time          : 2020-11-18 09:15:04                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CWINTERM_H__
#define  __CWINTERM_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_system.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CWinTerm : this class deal with window console output func
class CWinTerm : public CWinKernal
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct & Destruct define
    inline          CWinTerm();
    inline virtual ~CWinTerm();

private:
    // Copy construct define
    inline CWinTerm( const CWinTerm &obj );
    // Assignment operation
    inline CWinTerm& operator = ( const CWinTerm &obj );
// }}} ! Construct & Destruct

// Menbers  : {{{
private:
    tchar       mszBuf[_V_FILE_MAX_PATH_];
    CONSOLE_SCREEN_BUFFER_INFO mstBufInfo;
// }}} ! Members

// Methods  : {{{
public:
    // Set Text color
    bool SetTxtColor( const short csColor = 0x0f );

    // Write string to screen
    int Write( const short csColor, const tchar* const cpFmt,            ... );
    // Write string to screen
    int Write( const short csColor, const tchar* const cpFmt, va_list& vList );

    // Set screen titile
    bool   SetTitile( const tchar* const cpTitile );
    // Get screen titile
    tchar* GetTitile();
// }}} ! Methods

}; // }}} End of class CWinTerm
// ================================================================================================ //

// ------------------------------------------------------------------------------------------------ //
}; // }}} ! End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CWinTerm.h.inl"
// ================================================================================================ /

#endif // ! __CWINTERM_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
