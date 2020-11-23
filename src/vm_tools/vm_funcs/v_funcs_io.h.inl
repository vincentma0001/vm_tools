// ================================================================================================ //
// ==                                                                                            == //
// ==                                     v_funcs_io.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-11 13:01                                                  == //
// ==   Modify Time          : 2020-11-23 14:21                                                  == //
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
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
//.vm's.function.files.inlcuded
#include "v_funcs_io.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Methord : v_sprintf(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, and copy new string to dst buffer
// ==  Return  : int              - [O] >=0  - new string length
// ==                                   <0   - format failed, lookfor errno for error infomation
// ==  Params  : pDst             - [O] Dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpFmt            - [I] string's format
// ==            ...              - [I] string's format paramters
inline int vm::v_sprintf ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_ ... )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_sprintf()"), pDst, cpFmt);

    // format string
    va_list vlist;
    va_start( vlist, cpFmt );
    int liRet = vm::v_sprintf( pDst, csztDstSize, cpFmt, vlist);
    va_end(vlist);

    return liRet;
}
// }}} end of func v_sprintf(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_sprintf(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Format string, and copy new string to dst buffer
// ==  Return  : int              - [O] >=0  - new string length
// ==                                   <0   - format failed, lookfor errno for error infomation
// ==  Params  : pDst             - [O] Dst buffer
// ==            csztDstSize      - [I] Dst buffer's size
// ==            cpFmt            - [I] String's format
// ==            vList            - [I] String's format paramters
inline int vm::v_sprintf ( _vOt_ tchar* const pDst, _vIn_ const size_t csztDstSize, _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList )
// {{{
{
    // Verify input paramters
    _VERIFY_2_(vT("v_vsprintf()"), pDst, cpFmt);

    // format string
#if defined (_MSC_VER) && (_MSC_VER > 1300)
    int liRet = vVsprintf_s( pDst, csztDstSize, cpFmt, vList );
#else
    int liRet = vVsprintf( pDst, cpFmt, vList );
#endif

    return liRet;
}
// }}} end of func v_sprintf(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_output(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output a formated string
// ==  Return  : bool             - [O] true  - output sucess
// ==                                   false - output failed
// ==  Params  : cpFmt            - [I] output string's format
// ==            vList            - [I] output string's format paramters
inline bool vm::v_output ( _vIn_ const tchar* const cpFmt, _vIn_ va_list& vList )
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
inline bool vm::v_output ( _vIn_ const tchar* const cpFmt, _vIn_ ... )
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
inline bool vm::v_output_line ( _vIn_ const tchar* const cpFmt, _vIn_ ... )
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

// ================================================================================================ //
// ==  Methord : v_input_char_unshow(...)                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a char from input stream, and don't display on termainal
// ==  Return  : inline char      - [O] char geted from input stream
inline char vm::v_input_char_unshow ( void )
// {{{
{
    char lcVal = 0x00;
    system("stty -echo");
    system("stty -icanon");
    lcVal = getchar();
    system("stty icanon");
    system("stty echo");
    return lcVal;
}
// }}} end of func v_input_char_unshow(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : v_inpput_line(...)                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get a string line form input stream
// ==  Return  : size_t           - [O] letters in line string
// ==  Params  : pBuf             - [O] string line's buffer
// ==            csztBufSize      - [I] string line's buffer size
inline size_t vm::v_inpput_line ( tchar* const pBuf, const size_t csztBufSize )
// {{{
{
    bool lbLoop            = true;
    size_t lsztOffset      = 0;

    while ( lbLoop == true ) 
    { // {{{

        if( lsztOffset >= csztBufSize )
        {
            char &lVal = *(pBuf+csztBufSize);
            lVal = 0x00;
            break;
        }

        char &lVal = *(pBuf+lsztOffset);
        lVal = vm::v_input_char_unshow();
        switch (lVal) 
        { // {{{
            case '\b':
            {
                printf( "\033[1D \033[1D" );
                lVal = 0x00;
                lsztOffset--;
                char& lTmp = *(pBuf+lsztOffset);
                lTmp = 0x00;
                break; 
            }
            case '\n':
            {
                putc('\n',stdout);
                lVal = 0x00;
                lbLoop = false;
                break;
            }
            default:
            {
                putc(lVal,stdout);
                lsztOffset++;
            }
        } // }}} End of switch(lVal)

    }; // }}} End of while(  lbLoop == true  )

    return lsztOffset;
}
// }}} end of func v_inpput_line(...)
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
