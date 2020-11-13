// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CActTestFrame.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 22:42                                                  == //
// ==   Modify Time          : 2020-11-12 22:42                                                  == //
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
#include <vm_cfgs.h>
#include <vm_tools/vm_util/CArgs.hpp>
#include <vm_tools/vm_util/CStdMapPtr.hpp>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{


class CActTestFrame;

// ================================================================================================ //
// ==  Class CAct : this class deal with Action operation                                        == //
// ------------------------------------------------------------------------------------------------ //
class CAct
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CAct():mstrActName(vT("")){};
    inline          CAct( const tchar* const cpName ):mstrActName(cpName){};
    // Destruct define
    inline virtual ~CAct(){};

private:
    // Copy construct define
    inline CAct             ( const CAct &obj ){};
    // Assignment operation
    inline CAct& operator = ( const CAct &obj ){ return *this; };
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    vString             mstrActName;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    const tchar* cs_name()
    {
        return mstrActName.c_str();
    }
    virtual bool todo( vm::CActTestFrame* pFrame, const vm::CArgs<128> &oArgs ) = 0;
// }}} ! Methods

};
// }}} ! [ class CAct ]
// ================================================================================================ //

// ================================================================================================ //
// ==  Class CActTestFrame : this class define act test frame                                    == //
// ------------------------------------------------------------------------------------------------ //
class CActTestFrame
// {{{
{
// ------------------------------------------------------------------------------------------------ //
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

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    bool                                   mbLoop;
    vm::CStdMapPtr<tchar*, vm::CAct*>      mActMap;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    void StopLoop( void ){ mbLoop = false; }
    void ListActs( void )
    {
        vm::CStdMapPtr<tchar*, vm::CAct*>::tMapItor loIter = mActMap.First();
        for( ; loIter != mActMap.Last(); loIter++  )
    }
    void    Action( void )
    {
        bool lbRetForReg = Regist();
        if( lbRetForReg == false )
            return;

        while( mbLoop == true )
        {
            tchar lszBuf[2048] = {0x00};
            fgets( lszBuf, sizeof(lszBuf), stdin );
            vm::CArgs<128> loArgs;
            loArgs.Splite( lszBuf, vT(" ") );

            tchar* lpName = loArgs[0];
            vm::CAct* lpAction = *mActMap.Find( lpName );
            if( lpAction == nullptr )
                continue;

            lpAction->todo( this, loArgs );

        }
    }
    virtual bool Regist( void ) = 0;
// }}} ! Methods

};
// }}} ! [ class CActTestFrame ]
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CActTestFrame.h.inl"
// ================================================================================================ //

// ================================================================================================ //
// [ Macro defines ] {{{
#ifndef   __V_ACT_TEST_MACRO__
#define   __V_ACT_TEST_MACRO__

#define AC_FUNC_BEGIN(func, name )      class func : public vm::CAct \
                                 { public: func():CAct(vT(#name)){}; ~func(){}; \
                                   public: virtual bool todo( vm::CActTestFrame* pFrame, const vm::CArgs<128> &oArgs ) {
#define AC_FUNC_ENDED            }};
#define AC_FRAME_BEGIN(utFrame)  class utFrame : public vm::CActTestFrame{ virtual bool Regist() {
#define AC_FRAME_REGIST(func)    {func* lp##func = new func ; mpActMap.insert( lp##func->cs_name(), lp##func );}
#define AC_FRAME_ENDED           }};
#define RUN_ACTTEST(acFrame)    utFrame lo##utFrame; lo##utFrame.Run();

#endif // __V_UNIT_TEST_MACRO__
// }}} ! Macro defines
// ================================================================================================ //

AC_FUNC_BEGIN( ac_func_list_acts, "help" )



    return true;
AC_FUNC_ENDED

AC_FUNC_BEGIN( ac_func_stop, "stop" )
    pFrame->StopLoop();
    return true;
AC_FUNC_ENDED

#endif // ! __CACTTESTFRAME_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
