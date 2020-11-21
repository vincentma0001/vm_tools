// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CActTestFrame.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 22:42                                                  == //
// ==   Modify Time          : 2020-11-21 13:27                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CACTTESTFRAME_H__
#define  __CACTTESTFRAME_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
//.vm's.function.depend.on.included
#include <vm_cfgs.h>
#include <vm_tools/vm_util.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// [ Macro defines ] {{{
#ifndef   __V_ACT_TEST_MACRO__
#define   __V_ACT_TEST_MACRO__

#define AC_FUNC_BEGIN(func, name )      class func : public vm::CAct \
                                 { public: inline          func():CAct(vT(#name)){}; \
                                           inline virtual ~func(){}; \
                                   public: virtual bool todo( vm::CActTestFrame* pFrame, const vm::CArgs<128> &oArgs ) { bool lbRet = true;
#define AC_FUNC_ENDED            return lbRet; }};
#define AC_FRAME_BEGIN(utFrame)  class utFrame : public vm::CActTestFrame{ virtual bool Regist() { bool lbRet = true;
#define AC_FRAME_REGIST(Act)    { lbRet = RegAct<Act>();}
#define AC_FRAME_ENDED           return lbRet; }};
#define RUN_ACTTEST(acFrame)    utFrame lo##utFrame; lo##utFrame.Run();

#endif // __V_UNIT_TEST_MACRO__
// }}} ! Macro defines
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

class CActTestFrame;

// ------------------------------------------------------------------------------------------------ //

// Class CAct : this class deal with Action operation
class CAct
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CAct(                           );
    inline          CAct( const tchar* const cpName );
    // Destruct define
    inline virtual ~CAct(                           );

private:
    // Copy construct define
    inline CAct             ( const CAct &obj );
    // Assignment operation
    inline CAct& operator = ( const CAct &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    vString             mstrActName;
// }}} ! Members

// Methods   : {{{
public:
    const tchar* cs_name();

public:
    virtual bool todo( vm::CActTestFrame* pFrame, const vm::CArgs<128> &oArgs ) = 0;
// }}} ! Methods

// Friendefs : {{{
friend class CActTestFrame;
// }}} ! Friendefs

}; // }}} End of class CAct

// ------------------------------------------------------------------------------------------------ //

// Class CActTestFrame : this class define act test frame
class CActTestFrame
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CActTestFrame();
    // Destruct define
    inline virtual ~CActTestFrame();

private:
    // Copy construct define
    inline CActTestFrame             ( const CActTestFrame &obj );
    // Assignment operation
    inline CActTestFrame& operator = ( const CActTestFrame &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    bool                                   mbLoop;
    vm::CStdMapPtr<vString, vm::CAct>      mActMap;
// }}} ! Members

// Methods   : {{{
public:
    inline void StopLoop( void );
    template< typename tAct >
    inline bool RegAct( void );
    inline void Action( void );

public:
    virtual bool Regist( void ) = 0;
// }}} ! Methods

}; // }}} End of class CActTestFrame

}; // }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CActTestFrame.h.inl"
// ================================================================================================ //


#endif // ! __CACTTESTFRAME_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
