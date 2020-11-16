// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CUsrErr.hpp                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-06 08:30                                                  == //
// ==   Modify Time          : 2020-11-16 13:42                                                  == //
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
namespace vm
{

// Class CUsrErr : this class deal with usr defined error info
template< class tType >
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
    // Error infomation
    vm::CStdMap<long, vString>      mpUsrErrMap;
// }}} ! Members

// Methods   : {{{
public:
    // Output error code
    inline long         toCode   ( void );
    // Output error message
    inline const tchar* toString ( void );

    // Regist a user defined message
    inline bool         RegMsg   ( const long clErrCode, const vString cstrErrMsg );

public:
    inline virtual bool Regist   ( void ) = 0;
// }}} ! Methods

}; // }}} End of class CUsrErr

}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CUsrErr.hpp.inl"
// ================================================================================================ //

// ================================================================================================ //
// [ class CUsrErr define macros ] {{{
#define DEF_CUSRERR_BEGIN( tUsrErr ) class e#tUsrErr : public CUsrErr<e#tUsrErr>{ \
    public: inline e#tUsrErr(const long clErrCode):mlErrCode(clErrCode){};\
            inline virtual ~e#tUsrErr(){};\
    public: inline virtual bool Regist( void ) {
#define DEF_CUSRERR_REGMEG( clErrCode, cstrErrMsg ) { RegMsg( clErrCode, cstrErrMsg ); }
#define DEF_CUSRERR_ENDED }};
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
