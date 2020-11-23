// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CActTestFrame.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-12 22:42                                                  == //
// ==   Modify Time          : 2020-11-23 11:45                                                  == //
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
#include <vm_tools/vm_string.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// [ Macro defines ] {{{

#ifndef    _CACTTESTFRAME_MAX_ARGS_
#   define _CACTTESTFRAME_MAX_ARGS_      36
#endif // !_CACTTESTFRAME_MAX_ARGS_

#ifndef   __V_ACT_TEST_MACRO__
#define   __V_ACT_TEST_MACRO__

#define AC_FUNC_BEGIN(func, name )      class func : public vm::CAct { \
                                            public: inline          func():CAct(vT(name)){}; \
                                                    inline virtual ~func(){};\
                                            public: virtual void todo( vm::CActTestFrame* pFrame, const vm::CArgs<_CACTTESTFRAME_MAX_ARGS_> &oArgs ) { 
#define AC_FUNC_ENDED                   };};

#define AC_FRAME_BEGIN(acFrame)         class acFrame : public vm::CActTestFrame{ virtual bool Regist() { bool lbRet = true;
#define AC_FRAME_REGIST(Act)            { lbRet = RegAct<Act>();}
#define AC_FRAME_ENDED                  return lbRet; }};

#define RUN_ACTTEST(acFrame)            acFrame lo##acFrame; lo##acFrame.Run();

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
    virtual void todo( vm::CActTestFrame* pFrame, const vm::CArgs<_CACTTESTFRAME_MAX_ARGS_> &oArgs ) = 0;
// }}} ! Methods

// Friendefs : {{{
friend class CActTestFrame;
// }}} ! Friendefs

}; // }}} End of class CAct

// ------------------------------------------------------------------------------------------------ //

// Class CActTestFrame : this class define act test frame
class CActTestFrame
{ // {{{

// Typedefs  : {{{
public:
    typedef typename vm::CStdMap<vString, vm::CAct*>              tMap;
    typedef typename vm::CStdMap<vString, vm::CAct*>::tMapItor    tMapItor;
    typedef typename vm::CStdMap<vString, vm::CAct*>::tMapValue   tMapValue;
// }}} ! Typedefs

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
public:
    bool        mbLoop;
    tMap        mActMap;
// }}} ! Members

// Methods   : {{{
public:
    inline void StopLoop( void );
    template<size_t tsztTmpBufSize>
    inline void ShowHelps( const size_t csztCmdWidth=30, const size_t csztCmdsInLine=4 )
    {
        tMapItor loIter = mActMap.First();
        size_t lsztCmdCount = 0;

        for( ;loIter!=mActMap.Last(); lsztCmdCount++ )
        {
            if( lsztCmdCount > csztCmdsInLine )
            {
                vOutput(vT("\n"));
                lsztCmdCount = 0;
                continue;
            }

            tchar lszBuf[tsztTmpBufSize] = {0x00};
            vm::CStrFmtPtr loStrFmt( lszBuf, sizeof(lszBuf) );
            vOutput( *loStrFmt.fmt_str<tsztTmpBufSize>(csztCmdWidth, true), vStdMapKey(loIter).c_str() );

            loIter++;
        }

        if( lsztCmdCount != 0 )
        {
            vOutput(vT("\n"));
        }
    };
    template< typename tAct >
    inline bool RegAct( void );
    inline void Run( void );

public:
    virtual bool Regist( void ) = 0;
// }}} ! Methods

// Friendefs : {{{
friend class CAct;
// }}} ! Friendefs

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
