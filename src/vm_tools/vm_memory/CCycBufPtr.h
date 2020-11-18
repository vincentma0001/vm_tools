// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CCycBufPtr.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 11:04                                                  == //
// ==   Modify Time          : 2020-11-18 09:20                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CCYCBUFPTR_H__
#define  __CCYCBUFPTR_H__


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
#ifndef    vCycBufRemoveAfterGet
#   define vCycBufRemoveAfterGet      1
#endif // !vCycBufRemoveAfterGet
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //

// Class CCycBufPtr : This class deal with cyc buffer
class CCycBufPtr
{ // {{{

// Typedefs  : {{{
public:
    // enum emRet : this enum define return value for class CCycBufPtr
    enum emRet
    // {{{
    {
        emSucess                = 0,

        emError                 = vMaxsLong -1,
        emErrPutFailed          = emError   -1,
        emErrGetFailed          = emError   -2,
        emErrPeekFailed         = emError   -3,
        emErrNoEnoughData       = emError   -4,

        emWarns                 = vMaxsLong -20,
        emWrnBufIsFull          = emWarns   -1,
        emWrnNoBufSpace         = emWarns   -2
    };
    // }}} End of def enum emRet
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CCycBufPtr   ( const tchar* const cpBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CCycBufPtr   (                                                    );

private:
    // Copy construct define
    inline CCycBufPtr             ( const CCycBufPtr &obj );
    // Assignment operation
    inline CCycBufPtr& operator = ( const CCycBufPtr &obj );
// }}} ! Construct & Destruct

// Operators : {{{
public:
    inline const tchar* operator * () { return mpBufStart; }
// }}} ! Operators

// Menbers   : {{{
private:
    // Cyc buffer start pointer
    const tchar*       mpBufStart;
    // Cyc buffer ended pointer
    const tchar*       mpBufEnded;
    // Cyc buffer size
    const size_t       msztSize  ;
    // Cys start postion
    tchar*             mpStartPos;
    // Cyc ended postion
    tchar*             mpEndedPos;
    // Data length in buffer
    size_t             msztLen   ;

    // Error code
    long long          mllErrCode;
// }}} ! Members

// Methods   : {{{
public:
    // Get buffer size
    inline size_t Size  ( void );
    // Reset cyc buffer
    inline void   Reset ( void );

    // Get used size in buffer
    inline size_t       SizeUsed  ( void );
    // Get unused size in buffer
    inline size_t       SizeUnused( void );
    // Get offset between start pointer and buffer start pointer
    inline unsigned int StartPos  ( void );
    // Get offset between ended pointer and buffer start pointer
    inline unsigned int EndedPos  ( void );

    // Write datas (length=csztDataLen) to cyc buffer
    inline bool Put  ( const void* const cpData, const size_t csztDataLen );
    // Write a tType object to cyc buffer
    template<typename tType> 
    inline bool Put  ( const tType                                  tData );

    // Get datas (length=csztDataLen) from cyc buffer
    inline bool Get  (        void* const pData, const size_t csztDataLen );
    // Get tType object from cyc buffer
    template<typename tType> 
    inline bool Get  ( tType                                       &tData );

    // Peek datas (length=csztDataLen) from cyc buffer
    inline bool Peek (        void* const pData, const size_t csztDataLen );
    // Peek tType object from cyc buffer
    template<typename tType> 
    inline bool Peek ( tType                                       &tData );
// }}} ! Methods

}; // }}} End of class CCycBufPtr

}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CCycBufPtr.h.inl"
// ================================================================================================ //

#endif // ! __CCYCBUFPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
