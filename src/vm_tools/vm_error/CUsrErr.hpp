// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CUsrErr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-06 08:30                                                  == //
// ==   Modify Time          : 2020-11-17 17:47                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CUSRERR_HPP__
#define  __CUSRERR_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
#include <vm_tools/vm_util/CStdMap.hpp>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Macrodefs : {{{
#ifndef    _V_CUSEERR_BUF_SIZE_
#   define _V_CUSEERR_BUF_SIZE_      1024
#endif // !_V_CUSEERR_BUF_SIZE_
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CUsrErr : this class deal with usr defined error info
template< typename tType, size_t tsztBufSize >
class CUsrErr
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CUsrErr( const long clErrCode );
    // Destruct define
    inline virtual ~CUsrErr(                      );

private:
    // Copy construct define
    inline CUsrErr             ( const CUsrErr &obj );
    // Assignment operation
    inline CUsrErr& operator = ( const CUsrErr &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // Error code
    const long                      mlErrCode;
    // buffer
    tchar                           mszBuf[tsztBufSize];

    // Error infomation
    vm::CStdMap<long, vString>      mpUsrErrMap;

// }}} ! Members

// Methods   : {{{
public:
    // Output error code
    inline long         toCode   ( void );
    // Output error message
    inline const tchar* toString ( void );

    // Format output error message
    //      $EC = error code, $EM = error message
    inline tchar*       Fmt      ( const tchar* const cpFmt=vT("%EC:%EM"), ... );

    // Regist a user defined message
    inline bool         RegMsg   ( const long clErrCode, const vString cstrErrMsg );

// }}} ! Methods

}; // }}} End of class CUsrErr

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CUsrErr.hpp.inl"
// ================================================================================================ //

// ================================================================================================ //
// [ class CUsrErr define macros ] {{{
#define DEF_CUSRERR_BEGIN( tUsrErr, tBufSize )      class tUsrErr : public vm::CUsrErr<tUsrErr,tBufSize> \
                            { public: inline tUsrErr(const long clErrCode):CUsrErr(clErrCode){
#define DEF_CUSRERR_REGMEG( clErrCode, cstrErrMsg ) { RegMsg( clErrCode, cstrErrMsg ); }
#define DEF_CUSRERR_ENDED( tUsrErr )                }; inline virtual ~tUsrErr(){};};
// }}} ! class CUsrErr define macros
// ================================================================================================ //


#endif // ! __CUSRERR_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
