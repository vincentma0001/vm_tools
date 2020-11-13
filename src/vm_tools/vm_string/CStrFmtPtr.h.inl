// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CStrFmtPtr.h.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-13 09:06                                                  == //
// ==   Modify Time          : 2020-11-13 09:06                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CSTRFMTPTR_H_INL__
#define  __CSTRFMTPTR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_funcs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CStrFmtPtr Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CStrFmtPtr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::CStrFmtPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CStrFmtPtr::CStrFmtPtr( _vOt_ tchar* const pBuf, _vIn_ const size_t csztBufSize )
    : mpBuf(pBuf), msztBufSize(csztBufSize), msztOffset(0)
// {{{
{
}
// }}} End of func CStrFmtPtr::CStrFmtPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::CStrFmtPtr()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CStrFmtPtr::CStrFmtPtr( const CStrFmtPtr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CStrFmtPtr::CStrFmtPtr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::~CStrFmtPtr(...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CStrFmtPtr::~CStrFmtPtr(  )
// {{{
{
}
// }}} end of func CStrFmtPtr::~CStrFmtPtr(...)
// ================================================================================================ //

// }}} ![ Class CStrFmtPtr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrFmtPtr operator realization                                                     == //
// ================================================================================================ //
// [ Class CStrFmtPtr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CStrFmtPtr&      - [O] this object
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator = ( const CStrFmtPtr &obj )
// {{{
{
    return *this;
}
// }}} End of func CStrFmtPtr::operator=()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator * (...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : string pointer in buffer
// ==  Return  : tchar*           - [O] string pointer
inline tchar* vm::CStrFmtPtr::operator * ( void )
// {{{
{
    return mpBuf;
}
// }}} end of func CStrFmtPtr::operator * (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator () (...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : add string to buffer
// ==  Return  : CStrFmtPtr&      - [O] this object
// ==  Params  : cpStr            - [I] string's pointer
// ==            csztStrLen       - [I] string's length
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator () ( const tchar* const cpStr, const size_t csztStrLen )
// {{{
{
    // prepare environment
    mllErrCode = emRet::emSucess;

    // check buffer size
    size_t lsztBufLeftLen = msztBufSize - msztOffset;
    if( lsztBufLeftLen < csztStrLen )
    {
        mllErrCode = vMakeLLong( emRet::emErrUnEnoughBuf, 0 );
        return *this;
    } // end of if( lsztBufLeftLen ...

    // copy string data to buffer
    tchar* lpPos = mpBuf+msztOffset;
    size_t lsztRet = vm::v_strcpy( lpPos, lsztBufLeftLen, cpStr );
    if( lsztRet == csztStrLen )
    {
        mllErrCode = vMakeLLong( emRet::emErrCopyFailed, errno );
        return *this;
    }

    // reset offset && return
    msztOffset += lsztRet;
    return *this;
}
// }}} end of func CStrFmtPtr::operator () (...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CStrFmtPtr::operator () (...)                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy string to buffer
// ==  Return  : CStrFmtPtr&      - [O] this object
// ==  Params  : cpStr            - [I] string need to be copy
inline vm::CStrFmtPtr& vm::CStrFmtPtr::operator () ( const tchar* const cpStr )
// {{{
{
    size_t lsztStrLen = vStrlen( cpStr );
    return operator()( cpStr, lsztStrLen );
}
// }}} end of func CStrFmtPtr::operator () (...)
// ================================================================================================ //

// }}} ![ Class CStrFmtPtr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CStrFmtPtr Functional realization                                                   == //
// ================================================================================================ //
// [ Class CStrFmtPtr Functional realization ] {{{



// }}} ![ Class CStrFmtPtr Functional realization ]
// ================================================================================================ //


// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CSTRFMTPTR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
