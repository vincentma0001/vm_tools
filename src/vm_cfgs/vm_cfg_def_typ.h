// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_typ.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 20:36:11                                               == //
// ==   Modify Time          : 2020-11-11 12:25:22                                               == //
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

#endif // ! __VM_CFG_DEF_TYP_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
