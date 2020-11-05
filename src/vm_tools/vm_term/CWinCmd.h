// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinCmd..h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-01 19:38:42                                               == //
// ==   Modify Time          : 2020-10-08 21:08:02                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CWINCMD__H__
#define  __CWINCMD__H__

// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CWinCmd : this class deal with window console output func                           == //
// ------------------------------------------------------------------------------------------------ //
class CWinCmd : public CWinKernal
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct & Destruct define
    inline          CWinCmd();
    inline virtual ~CWinCmd();

private:
    // Copy construct define
    inline CWinCmd( const CWinCmd &obj );
    // Assignment operation
    inline CWinCmd& operator = ( const CWinCmd &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers  : {{{
private:
    tchar       mszBuf[_V_FILE_MAX_PATH_];
    CONSOLE_SCREEN_BUFFER_INFO mstBufInfo;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
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

};
// }}} ! [ class CWinCmd ]
// ================================================================================================ //
// Class realization :
#include "CWinCmd.h.inl"
// ================================================================================================ /

}
// }}} ! End of namespace vm
// ================================================================================================ //

#endif // ! __CWINCMD__H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
