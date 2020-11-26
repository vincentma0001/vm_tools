// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CExp.hpp                                           == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-25 08:50                                                  == //
// ==   Modify Time          : 2020-11-26 21:39                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CEXP_HPP__
#define  __CEXP_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_time.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    _V_CEXP_MSG_SIZE_
#   define _V_CEXP_MSG_SIZE_            1024
#endif // !_V_CEXP_MSG_SIZE_

#ifndef    _V_CEXP_MSG_LEN_
#   define _V_CEXP_MSG_LEN_             80
#endif // !_V_CEXP_MSG_LEN_ 

#ifndef    _V_CEXP_BUF_SIZE_
#   define _V_CEXP_BUF_SIZE_            2048
#endif // !_V_CEXP_BUF_SIZE_

#ifndef    _V_CEXP_TIME_BUF_SIZE_
#   define _V_CEXP_TIME_BUF_SIZE_       256
#endif // !_V_CEXP_TIME_BUF_SIZE_
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CExp : this class defined exception object
class CExp
{ // {{{

// Typedefs  : {{{
public:
    // enum emExpTypes : this enum define exption types
    enum emTypes
    {  // {{{
        emErr   = 0x01,
        emWrn   = 0x02,
    }; // }}} End of def enum emExpTypes
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CExp( const tchar* const    cpFile,
                          const unsigned int   cuiLine,
                          const unsigned int   cuiType = emTypes::emErr,
                          const tchar* const cpTimeFmt = hh$mm$ss$ms );
    // Construct define
    inline          CExp( const CExp              &Exp,
                          const tchar* const    cpFile,
                          const unsigned int   cuiLine,
                          const tchar* const cpTimeFmt = hh$mm$ss$ms    );
    // Copy construct define
    inline          CExp( const CExp                               &obj );
    // Destruct define
    inline virtual ~CExp(                                               );
// }}} ! Construct & Destruct

// Operators : {{{
public:
    // Assignment operation
    inline CExp& operator = ( const CExp &obj );
    
    // operation (), recode exption message and func name
    inline CExp& operator () ( const tchar* const cpFunc, const tchar* const cpFmt, ... );
// }}} ! Operators


// Menbers   : {{{
private:
    // file name,   where exception launch
    tchar           mszFile[_V_FILE_MAX_FNAME_];
    // func name,   where exception launch
    tchar           mszFunc[_V_FILE_MAX_FNAME_];
    // line number, where exception launch
    unsigned int    muiLine;

    // time info,  when exception launch
    tchar           mszTime[_V_CEXP_TIME_BUF_SIZE_];

    // msg info,  what eception launch
    tchar           mszMsg[_V_CEXP_MSG_SIZE_];

public:
    // record excption type.
    unsigned int    muiExpType;

    // Output buffers
    tchar           mszBuf[_V_CEXP_BUF_SIZE_];

    CExp*           mpNextExp;
public:
    long long       mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Get next exception
    inline CExp*  Next( CExp* pExp );
    // Output formated exception string, FMT :  %M(ethod), %F(ile), %L(ine), %T(ime), %N(otification)
    inline tchar* Fmt( const tchar* const cpFmt );

    // Decide this excepion is error or not
    inline bool isErr( void );
    // Decide this exception is warn or not
    inline bool isWrn( void );
// }}} ! Methods

}; // }}} End of class CExp


// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// file realization
#include "CExp.hpp.inl"
// ================================================================================================ //


#endif // ! __CEXP_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
