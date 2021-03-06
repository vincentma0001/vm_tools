// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CFileMode.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-10 15:06:36                                               == //
// ==   Modify Time          : 2020-11-18 18:02:22                                               == //
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
#include <vm_tools/vm_string.h>
//.vm's.function.files.inlcuded
#include "CFileMode.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileMode Construct && Destruct realization                                         == //
// ================================================================================================ //
// [ Class CFileMode Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileMode::CFileMode()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CFileMode::CFileMode(  ) : mszFileMode{0x00}
// {{{
{
}
// }}} End of func CFileMode::CFileMode()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CFileMode::CFileMode()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CFileMode::~CFileMode(  )
// {{{
{
}
// }}} End of func CFileMode::~CFileMode()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CFileMode::CFileMode()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CFileMode::CFileMode( const vm::CFileMode &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CFileMode::CFileMode()
// ================================================================================================ //

// }}} ![ Class CFileMode Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileMode operator realization                                                      == //
// ================================================================================================ //
// [ Class CFileMode operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileMode::operator = ()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CFileMode&       - [O] this object
inline vm::CFileMode& vm::CFileMode::operator = ( const vm::CFileMode &obj )
// {{{
{
    return *this;
}
// }}} End of func CFileMode::operator=()
// ================================================================================================ //

// }}} ![ Class CFileMode operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CFileMode Functional realization                                                    == //
// ================================================================================================ //
// [ Class CFileMode Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CFileMode::Tranformat(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Tranform emFileMode flag to string
// ==  Return  : tchar*            - [O] File mode string
// ==  Params  : csFileMode       - [I] FileMode emFileMode value.
inline tchar* vm::CFileMode::Tranformat( const short csFileMode )
// {{{
{
    vMemZero( mszFileMode );
    unsigned short lusPos = 0;

    if( csFileMode & emFileMode::emRead )
    {
        mszFileMode[lusPos++] = vT('r');
    } // End of if(...)

    if( csFileMode & emFileMode::emWrite )
    {
        mszFileMode[lusPos++] = vT('w');
    } // End of if(...)

    if( csFileMode & emFileMode::emAppend )
    {
        mszFileMode[lusPos++] = vT('a');
    } // Enf of if(...)

    if ( csFileMode & emFileMode::emBinary )
    {
        mszFileMode[lusPos++] = vT('b');
    } // End of if(...)

    if( csFileMode & emFileMode::emText )
    {
        mszFileMode[lusPos++] = vT('t');
    } // Enf of if(...)

    if( csFileMode & emFileMode::emUpdate )
    {
        mszFileMode[lusPos++] = vT('+');
    } // Enf of if(...)

    if( csFileMode & emFileMode::emExist )
    {
        mszFileMode[lusPos++] = vT('x');
    } // End of if(...)

    return mszFileMode;
}
// }}} end of func CFileMode::Tranformat(...)
// ================================================================================================ //


// }}} ![ Class CFileMode Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
