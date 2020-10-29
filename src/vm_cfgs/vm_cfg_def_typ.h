// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_typ.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 20:36:11                                               == //
// ==   Modify Time          : 2020-10-29 11:44:14                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef __VM_CFG_DEF_TYP_H__
#define __VM_CFG_DEF_TYP_H__


// ================================================================================================ //
// Type redefines : {{{

#if        ( _V_SYS_ == _V_WIN_ )
#   define verrno_t     errno_t
#elif      ( _V_SYS_ == _V_LUX_ )
#   define verrno_t     error_t
#endif // !( _V_SYS_ == _V_WIN_ )

typedef unsigned char tByte;

#define tVoid         void
#define tBool         bool
#define tShort        short
#define tuShort       unsigned short
#define tInt          int
#define tuInt         unsigned int
#define tLong         long
#define tuLong        unsigned long
#define tLLong        long long
#define tuLLong       unsigned long long
#define tFloat        float
#define tDouble       double
#define tLDouble      long double

#define ctBool        const bool
#define ctShort       const short
#define ctuShort      const unsigned short
#define ctInt         const int
#define ctuInt        const unsigned int
#define ctLong        const long
#define ctuLong       const unsigned long
#define ctLLong       const long long
#define ctuLLong      const unsigned long long
#define ctFloat       const float
#define ctDouble      const double
#define ctLDouble     const long double

#define ptVoid        void*
#define ptShort       short*
#define ptuShort      unsigned short*
#define ptInt         int*
#define ptuInt        unsigned int*
#define ptLong        long*
#define ptuLong       unsigned long*
#define ptLLong       long long*
#define ptuLLong      unsigned long long*
#define ptFloat       float*
#define ptDouble      double*
#define ptLDouble     long double*

#define cptVoid       const void*
#define cptShort      const short*
#define cptuShort     const unsigned short*
#define cptInt        const int*
#define cptuInt       const unsigned int*
#define cptLong       const long*
#define cptuLong      const unsigned long*
#define cptLLong      const long long*
#define cptuLLong     const unsigned long long*
#define cptFloat      const float*
#define cptDouble     const double*
#define cptLDouble    const long double*

#define pctVoid       void* const
#define pctShort      short* const
#define pctuShort     unsigned short* const
#define pctInt        int* const
#define pctuInt       unsigned int* const
#define pctLong       long* const
#define pctuLong      unsigned long* const
#define pctLLong      long long* const
#define pctuLLong     unsigned long long* const
#define pctFloat      float* const
#define pctDouble     double* const
#define pctLDouble    long double* const

#define cpctVoid      const void* const
#define cpctShort     const short* const
#define cpctuShort    const unsigned short* const
#define cpctInt       const int* const
#define cpctuInt      const unsigned int* const
#define cpctLong      const long* const
#define cpctuLong     const unsigned long* const
#define cpctLLong     const long long* const
#define cpctuLLong    const unsigned long long* const
#define cpctFloat     const float* const
#define cpctDouble    const double* const
#define cpctLDouble   const long double* const

// }}}
// ================================================================================================ //

// ================================================================================================ //
// size_t types redefine : {{{

#define tSize          size_t
#define ctSize         const size_t
#define ptSize         size_t*
#define cptSize        const size_t*
#define cpctSize       const size_t* const

// }}}
// ================================================================================================ //

// ================================================================================================ //
// Make type defines : {{{ 

#define vMakeShort( low, high )  ((short)(((tByte)(((short)(low)) & 0xff)) | ((short)((tByte)(((short)(high)) & 0xff))) << 8))
#define vLowShort ( val )        ((tByte)((  (short)(w))       & 0xff ))
#define vHighShort( val )        ((tByte)(( ((short)(w)) >> 8) & 0xff ))

#define vMakeInt( low, high )    ((int)(((short)(((unsigned short)(low)) & 0xffff)) | ((int)((short)(((unsigned short)(high)) & 0xffff))) << 16))
#define vLowInt ( val )          ((short)((  (unsigned int)(w))       & 0xffff ))
#define vHighInt( val )          ((short)(( ((unsigned int)(w)) >> 8) & 0xffff ))

#define vMakeLong( low, high )   ((long)(((short)(((unsigned short)(low)) & 0xffff)) | ((long)((short)(((unsigned short)(high)) & 0xffff))) << 16))
#define vLowLong ( val )         ((short)((  (unsigned long)(w))       & 0xffff ))
#define vHighLong( val )         ((short)(( ((unsigned long)(w)) >> 8) & 0xffff ))

#define vMakeLLong( low, high )  ((long long)(((long)(((unsigned long)(low)) & 0xffffffff)) | ((long long)((long)(((unsigned long)(high)) & 0xffffffff))) << 32))
#define vLowLLong ( val )        ((long)((  (unsigned long long)(w))       & 0xffffffff ))
#define vHighLLong( val )        ((long)(( ((unsigned long long)(w)) >> 8) & 0xffffffff ))

#define vMakeuShort( low, high ) ((unsigned short)(((tByte)(((unsigned short)(low)) & 0xff)) | ((unsigned short)((tByte)(((unsigned short)(high)) & 0xff))) << 8))
#define vLowuShort ( val )       ((tByte)((  (unsigned short)(w))       & 0xff ))
#define vHighuShort( val )       ((tByte)(( ((unsigned short)(w)) >> 8) & 0xff ))

#define vMakeuInt( low, high )   ((unsigned int)(((unsigned short)(((unsigned short)(low)) & 0xffff)) | ((unsigned int)((unsigned short)(((unsigned short)(high)) & 0xffff))) << 16))
#define vLowuInt ( val )         ((unsigned short)((  (unsigned int)(w))       & 0xffff ))
#define vHighuInt( val )         ((unsigned short)(( ((unsigned int)(w)) >> 8) & 0xffff ))

#define vMakeuLong( low, high )  ((unsigned long)(((unsigned short)(((unsigned short)(low)) & 0xffff)) | ((unsigned long)((unsigned short)(((unsigned short)(high)) & 0xffff))) << 16))
#define vLowuLong ( val )        ((unsigned short)((  (unsigned long)(w))       & 0xffff ))
#define vHighuLong( val )        ((unsigned short)(( ((unsigned long)(w)) >> 8) & 0xffff ))

#define vMakeullong( low, high ) ((unsigned long long)(((long)(((unsigned long)(low)) & 0xffffffff)) | ((long long)((long)(((unsigned long)(high)) & 0xffffffff))) << 32))
#define vLowullong ( val )       ((unsigned long)((  (unsigned long long)(w))       & 0xffffffff ))
#define vHighullong( val )       ((unsigned long)(( ((unsigned long long)(w)) >> 8) & 0xffffffff ))

// }}}
// ================================================================================================ //

#endif // ! __VM_CFG_DEF_TYP_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
