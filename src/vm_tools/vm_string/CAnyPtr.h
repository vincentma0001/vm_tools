// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CAnyPtr.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-10 23:54                                                  == //
// ==   Modify Time          : 2020-11-10 23:54                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CANYPTR_H__
#define  __CANYPTR_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CAnyPtr : this class deal with data convet between any type and string              == //
// ------------------------------------------------------------------------------------------------ //
class CAnyPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Typedefs  : {{{
public:
    // enum emType : this enum define data types
    enum emType
    // {{{
    {
        emBool      = 0,

        emChar      = 1,
        emUChar     = 2,

        emWChar     = 3,

        emShort     = 4,
        emUShort    = 5,

        emInt       = 6,
        emUInt      = 7,

        emLong      = 8,
        emULong     = 9,

        emLLong     = 10,
        emULLong    = 11,

        emFloat     = 12,
        emDouble    = 13,
        emLDouble   = 14,

        emSize      = 15,
        emStr       = 99
    };
    // }}} End of def enum emType

    // union unVal : this union inlude value in class CAny
    union unVal
    // {{{
    {
        bool                bValue;
        size_t              sztValue;

        char                cValue;
        unsigned char       ucValue;

        wchar_t             wcValue;

        short               sValue;
        unsigned short      usValue;

        int                 iValue;
        unsigned int        uiValue;

        long                lValue;
        unsigned long       ulValue;

        long long           llValue;
        unsigned long long  ullValue;

        float               fValue;
        double              dValue;
        long double         ldValue;
    };
    // }}} End of def union unVal

    // enum emRet : this enum define ret info for CAny
    enum emRet
    // {{{
    {
        emSuccess = 0,

        emWarn              = vMaxsLong-1,
        emWrnDiffType       = emWarn-1,

        emError             = vMaxsLong-20,
        emErrUnknowType     = emError-1,
        emErrConvertFailed  = emError-2
    };
    // }}} End of def enum emRet
// }}} ! Typedefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construc define 
    inline CAnyPtr(const bool               Val, void* const pBuf, const size_t csztBufSize );
    // Construc define 
//  inline CAnyPtr(const size_t             Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const char               Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const unsigned char      Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const wchar_t            Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const short              Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const unsigned short     Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const int                Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const unsigned int       Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const long               Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const unsigned long      Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const long long          Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const unsigned long long Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const float              Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const double             Val, void* const pBuf, const size_t csztBufSize );
    // Construc define
    inline CAnyPtr(const long double        Val, void* const pBuf, const size_t csztBufSize );

    // Construc define
    inline CAnyPtr(const tchar* const     cpVal, void* const pBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CAnyPtr();

private:
    // Copy construct define
    inline CAnyPtr             ( const CAnyPtr &obj );
    // Assignment operation
    inline CAnyPtr& operator = ( const CAnyPtr &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    // Data value
    unVal           munValue;
    // Data type
    emType          memType;

    // Data string buffer
    tchar*          mpBuf;
    // Data string buffer's size
    size_t          msztBufSize;

    // Error code
    long long       mllErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    inline tchar*                 toStr( void );

    inline bool                  toBool( void );
    inline size_t                toSize( void );
    
    inline wchar_t              toWchar( void );

    inline char                  toChar( void );
    inline unsigned char        toUChar( void );

    inline short                toShort( void );
    inline unsigned short      toUShort( void );

    inline int                    toInt( void );
    inline unsigned int          toUInt( void );

    inline long                  toLong( void );
    inline unsigned long        toULong( void );

    inline long long            toLLong( void );
    inline unsigned long long  toULLong( void );

    inline float                toFloat( void );
    inline double              toDouble( void );
    inline long double        toLDouble( void );

public:
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const bool               Val );
//  inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const size_t             Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const char               Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned char      Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const wchar_t            Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const short              Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned short     Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const int                Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned int       Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long               Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long      Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long long          Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const unsigned long long Val );

    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const float              Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const double             Val );
    inline static tchar* toStr( tchar* const pDst, const size_t csztDstSize, const long double        Val );
// }}} ! Methods

};
// }}} ! [ class CAnyPtr ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CAnyPtr.h.inl"
// ================================================================================================ //

#endif // ! __CANYPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
