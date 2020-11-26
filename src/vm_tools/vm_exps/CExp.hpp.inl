// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CExp.hpp.inl                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-26 11:40                                                  == //
// ==   Modify Time          : 2020-11-26 21:40                                                  == //
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
// ------------------------------------------------------------------------------------------------ //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
#include <vm_tools/vm_files.h>
#include <vm_tools/vm_util.h>
#include <vm_tools/vm_bits.h>
#include <vm_tools/vm_funcs.h>
//.vm's.function.files.inlcuded
#include "CExp.hpp"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CExp Construct && Destruct realization                                              == //
// ================================================================================================ //
// [ Class CExp Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CExp::CExp()                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CExp::CExp( const tchar* const    cpFile,
                       const unsigned int   cuiLine,
                       const unsigned int   cuiType,
                       const tchar* const cpTimeFmt )
        : mszFile{0x00}, mszFunc{0x00}, muiLine(cuiLine), mszTime{0x00}, mszMsg{0x00}, 
          muiExpType(cuiType), mszBuf{0x00}, mpNextExp(nullptr), mllErrCode(vm::emRet::emSucess)
// {{{
{
    // recode file name
    vm::CFileSys::GetFileName( mszFile, sizeof(mszFile), cpFile, vStrlen(cpFile) );

    // recode time
    tTimeb  lstTimeb = vm::CTimeb::TimeNow();
    vm::CTimeStr::Fmt<_V_CEXP_TIME_BUF_SIZE_>( lstTimeb.time, lstTimeb.millitm, mszTime, sizeof(mszTime), cpTimeFmt );
}
// }}} End of func CExp::CExp()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::CExp()                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CExp::CExp( const CExp              &Exp,
                       const tchar* const    cpFile,
                       const unsigned int   cuiLine,
                       const tchar* const cpTimeFmt  )
        : mszFile{0x00}, mszFunc{0x00}, muiLine(cuiLine), mszTime{0x00}, mszMsg{0x00}, 
          muiExpType(emTypes::emErr), mszBuf{0x00}, mpNextExp(const_cast<vm::CExp*>(&Exp)), mllErrCode(vm::emRet::emSucess)
// {{{
{
    // recode file name
    vm::CFileSys::GetFileName( mszFile, sizeof(mszFile), cpFile, vStrlen(cpFile) );

    // recode time
    tTimeb  lstTimeb = vm::CTimeb::TimeNow();
    vm::CTimeStr::Fmt<_V_CEXP_TIME_BUF_SIZE_>( lstTimeb.time, lstTimeb.millitm, mszTime, sizeof(mszTime), cpTimeFmt );

    // reset exption type
    muiExpType = Exp.muiExpType;
}
// }}} End of func CExp::CExp()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CExp::~CExp()                                                           == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CExp::~CExp(  )
// {{{
{
}
// }}} End of func CExp::~CExp()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::CExp( const CExp &obj )                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CExp::CExp( const CExp &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CExp::CExp()
// ================================================================================================ //

// }}} ![ Class CExp Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CExp operator realization                                                           == //
// ================================================================================================ //
// [ Class CExp operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CExp::operator = ()                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CExp& - [O] this object
inline vm::CExp& vm::CExp::operator = ( const CExp &obj )
// {{{
{
    // where
    vm::v_strcpy( mszFile, sizeof(mszFile), obj.mszFile );
    vm::v_strcpy( mszFunc, sizeof(mszFunc), obj.mszFunc );
    muiLine     = obj.muiLine;
    // when
    vm::v_strcpy( mszTime, sizeof(mszTime), obj.mszTime );
    // what
    vm::v_strcpy( mszMsg , sizeof(mszMsg ), obj.mszMsg  );
    // type
    muiExpType  = obj.muiExpType;

    mpNextExp = obj.mpNextExp;

    return *this;
}
// }}} End of func CExp::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::operator () (...)                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : operater ()
// ==  Return  : CExp&            - [O] this object
// ==  Params  : cpFunc           - [I] function name
// ==            cpFmt            - [I] message string format
// ==            ...              - [I] message string format's paramters
inline vm::CExp& vm::CExp::operator () ( const tchar* const cpFunc, const tchar* const cpFmt, ... )
// {{{ 
{
    // record func anme,
    size_t lsztCopied = vm::v_strcpy( mszFunc, sizeof(mszFunc), cpFunc );
    if( lsztCopied == 0 )
        mllErrCode = vMakeLLong( vm::emRet::emError, errno );

    // recode exception message
    va_list lvList;
    va_start( lvList, cpFmt );
    int liRet = vm::v_sprintf( mszMsg, sizeof(mszMsg), _V_CEXP_MSG_LEN_, cpFmt, lvList );
    if( liRet <=0  )
        mllErrCode = vMakeLLong( vm::emRet::emError, errno );
    va_end( lvList );

    return *this;
}
// }}} end of func CExp::operator () (...)
// ================================================================================================ //

// }}} ![ Class CExp operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CExp Functional realization                                                         == //
// ================================================================================================ //
// [ Class CExp Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CExp::Next(...)                                                                 == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get nest exception
// ==  Return  : vm::CExp*        - [O] next exception pointer
// ==  Params  : pExp             - [I] current exception pointer
inline vm::CExp* vm::CExp::Next( vm::CExp* pExp )
// {{{ 
{
    return pExp->mpNextExp;
}
// }}} end of func CExp::Next(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::Fmt(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output formated exception string, FMT :  %M(ethod), %F(ile), %L(ine), %T(ime), %N(otification)
// ==  Return  : size_t           - [O] Formated string's length
// ==  Params  : cpFmt            - [I] string's format
inline tchar* vm::CExp::Fmt( const tchar* const cpFmt )
// {{{
{
    vm::CPattern loMethod( vT("%M"), mszFunc );
    vm::CPattern loFile  ( vT("%F"), mszFile );
    vm::CPattern loLine  ( vT("%L"), vm::CAny<64>(muiLine).toStr2(vT(vStrFmtUInt_zw(3))) );
    vm::CPattern loTime  ( vT("%T"), mszTime );
    vm::CPattern loMsg   ( vT("%N"), mszMsg  );

    vm::CParser loParse( vT('%'), cpFmt );
    loParse.Regist( loMethod );
    loParse.Regist( loFile   );
    loParse.Regist( loLine   );
    loParse.Regist( loTime   );
    loParse.Regist( loMsg    );

    vMemZero( mszBuf );
    return loParse.Parse( mszBuf, sizeof(mszBuf) );
}
// }}} end of func CExp::Fmt(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::isErr(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide this excepion is error or not
// ==  Return  : bool             - [O] true  - this exception is error
// ==                                   false - this exception isn't error
inline bool vm::CExp::isErr( void )
// {{{
{
    vm::CBit32 loBit32(muiExpType);
    return loBit32.isSet( CExp::emTypes::emErr );
}
// }}} end of func CExp::isErr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CExp::isWrn(...)                                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Decide this exception is warn or not
// ==  Return  : bool             - [O] true  - this exception is warn
// ==                                   false - this exception isn't warn
inline bool vm::CExp::isWrn( void )
// {{{
{
    vm::CBit32 loBit32(muiExpType);
    return loBit32.isSet( CExp::emTypes::emWrn );
}
// }}} end of func CExp::isWrn(...)
// ================================================================================================ //

// }}} ![ Class CExp Functional realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
