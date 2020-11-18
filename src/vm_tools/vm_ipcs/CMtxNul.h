// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CMtxNul.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 09:15                                                  == //
// ==   Modify Time          : 2020-11-18 17:42                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMTXNUL_H__
#define  __CMTXNUL_H__


// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CMtxNul : This calls wraped a empty mutex
class CMtxNul
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CMtxNul(){};
    // Destruct define
    inline virtual ~CMtxNul(){};

public:
    // Copy construct define
    inline CMtxNul             ( const CMtxNul &obj ){             };
    // Assignment operation
    inline CMtxNul& operator = ( const CMtxNul &obj ){return *this;};
// }}} ! Construct & Destruct

// Methods   : {{{
public:
    inline void Enter(){};
    inline void Leave(){};
// }}} ! Methods

}; // }}} End of class CMtxNul

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CMTXNUL_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //