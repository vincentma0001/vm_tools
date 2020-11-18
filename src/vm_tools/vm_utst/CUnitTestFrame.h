// ================================================================================================ //
// ==                                                                                            == //
// ==                                     CUnitTestFrame.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-03 15:24:04                                               == //
// ==   Modify Time          : 2020-11-18 09:14:07                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CUNITTESTFRAME_H__
#define  __CUNITTESTFRAME_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
// crt, std files included
#include <list>
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CUnit : this is a test unit for unit test frame
class CUnit
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct & Destruct define
    inline          CUnit( const tchar* const cpName );
    inline virtual ~CUnit();

private:
    // Copy construct define
    inline CUnit( const CUnit &obj );
    // Assignment operation
    inline CUnit& operator = ( const CUnit &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    tchar mszName[256];
// }}} ! Members

// Methods   : {{{
public:
    virtual bool todo(void) = 0;
// }}} ! Methods

// Friendefs : {{{
friend class CUnitTestFrame;
// }}} ! Friendefs

}; // }}} End of class CUnit

// ------------------------------------------------------------------------------------------------ //

// Class CUnitTestFrame : Unit test frame
class CUnitTestFrame
{ // {{{

// Typedefs  : {{{
public:
    typedef typename std::list<CUnit*>              tList;
    typedef typename std::list<CUnit*>::iterator    tListItor;
// }}} ! Typedefs

// Construct & Destruct : {{{
public:
    // Construct & Destruct define
    inline          CUnitTestFrame();
    inline virtual ~CUnitTestFrame();

private:
    // Copy construct define
    inline CUnitTestFrame( const CUnitTestFrame &obj );
    // Assignment operation
    inline CUnitTestFrame& operator = ( const CUnitTestFrame &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
protected:
    tList  mListUnits;
// }}} ! Members

// Methods   : {{{
public:
    // Run all unit test
    inline void Run(  );
private:
    // Write text to console
    inline void Log( const tchar* const cpFmt, ... );
public:
    // Regist a unit test function class to test frame
    virtual void Regist( void ) = 0;
// }}} ! Methods

}; // }}} End of class CUnitTestFrame

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CUnitTestFrame.h.inl"
// ================================================================================================ //

// ================================================================================================ //
// [ Macro defines ] {{{
#ifndef   __V_UNIT_TEST_MACRO__
#define   __V_UNIT_TEST_MACRO__

#define UT_FUNC_BEGIN(func)      class func : public vm::CUnit { public: func():CUnit(vT(#func)){}; ~func(){}; public: virtual bool todo(void) {
#define UT_FUNC_ENDED            }};
#define UT_FRAME_BEGIN(utFrame)  class utFrame : public vm::CUnitTestFrame{ virtual void Regist() {
#define UT_FRAME_REGIST(func)    {func* lp##func = new func ; mListUnits.push_back( lp##func );}
#define UT_FRAME_ENDED           }};
#define RUN_UNITTEST(utFrame)    utFrame lo##utFrame; lo##utFrame.Run();

#endif // __V_UNIT_TEST_MACRO__
// }}} ! Macro defines
// ================================================================================================ //


#endif // ! __CUNITTESTFRAME_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
