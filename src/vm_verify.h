// ================================================================================================ //
// ==                                                                                            == //
// ==                                        vm_verify.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-09-30 21:09:58                                               == //
// ==   Modify Time          : 2020-10-03 19:23:12                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef __VM_VERIFY_H__
#define __VM_VERIFY_H__

// ================================================================================================ //
// ==  Verify macro define :                                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// [ Verify macro define : ] {{{
#ifndef _DEBUG
// {{{
#define _VERIFY_(func, pHandle)
#define _VERIFY_2_(func, pHandle1, pHandle2)
#define _VERIFY_3_(func, pHandle1, pHandle2, pHandle3)
#define _VERIFY_4_(func, pHandle1, pHandle2, pHandle3, pHandle4)
#define _VERIFY_5_(func, pHandle1, pHandle2, pHandle3, pHandle4, pHandle5)
#define _VERIFY_6_(func, pHandle1, pHandle2, pHandle3, pHandle4, pHandle5, pHandle6)
#define _VERIFY_7_(func, pHandle1, pHandle2, pHandle3, pHandle4, pHandle5, pHandle6, pHandle7)
#define _VERIFY_8_(func, pHandle1, pHandle2, pHandle3, pHandle4, pHandle5, pHandle6, pHandle7, pHandle8)
#define _VERIFY_9_(func, pHandle1, pHandle2, pHandle3, pHandle4, pHandle5, pHandle6, pHandle7, pHandle8, pHandle9)
// }}}
#else
// {{{
#define _VERIFY_(func, pHandle)   if(pHandle==nullptr){ throw THROW_INVAILED_HANDLE(func, pHandle); }
#define _VERIFY_2_(func, pHandle1,pHandle2) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2)
#define _VERIFY_3_(func, pHandle1,pHandle2,pHandle3) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3)
#define _VERIFY_4_(func, pHandle1,pHandle2,pHandle3,pHandle4) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4)
#define _VERIFY_5_(func, pHandle1,pHandle2,pHandle3,pHandle4,pHandle5) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4);\
                _VERIFY_(func, pHandle5)
#define _VERIFY_6_(func, pHandle1,pHandle2,pHandle3,pHandle4,pHandle5,pHandle6) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4);\
                _VERIFY_(func, pHandle5);_VERIFY_(func, pHandle6)
#define _VERIFY_7_(func, pHandle1,pHandle2,pHandle3,pHandle4,pHandle5,pHandle6,pHandle7) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4);\
                _VERIFY_(func, pHandle5);_VERIFY_(func, pHandle6);_VERIFY_(func, pHandle7)
#define _VERIFY_8_(func, pHandle1,pHandle2,pHandle3,pHandle4,pHandle5,pHandle6,pHandle7,pHandle8)\
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4);\
                _VERIFY_(func, pHandle5);_VERIFY_(func, pHandle6);_VERIFY_(func, pHandle7);_VERIFY_(func, pHandle8)
#define _VERIFY_9_(func, pHandle1,pHandle2,pHandle3,pHandle4,pHandle5,pHandle6,pHandle7,pHandle8,pHandle9) \
                _VERIFY_(func, pHandle1);_VERIFY_(func, pHandle2);_VERIFY_(func, pHandle3);_VERIFY_(func, pHandle4);\
                _VERIFY_(func, pHandle5);_VERIFY_(func, pHandle6);_VERIFY_(func, pHandle7);_VERIFY_(func, pHandle8);\
                _VERIFY_(func, pHandle9)
// }}}
#endif
// }}} ![ Verify macro define : ]
// ================================================================================================ //

// ================================================================================================ //
// ==  Assert macro define                                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// [ Assert macro define ] {{{
#ifndef _DEBUG
// {{{
#define _V_ASSERT_( func, x )
// }}}
#else
// {{{
#define _ASSERT_( func, X ) if ( !(X) ) { throw THROW_ASSERT_FAILED(func, X); }
// }}}
#endif
// }}} ![ Assert macro define ]
// ================================================================================================ //

// ================================================================================================ //
// ==  THROW_INVAILED_HANDLE                                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// [ THROW_INVAILED_HANDLE ] {{{
#ifndef    THROW_INVAILED_HANDLE
#   define THROW_INVAILED_HANDLE(func, pHandle)  vT(#func" - Get an Invailed Handle ("#pHandle")!")
#endif // ! THROW_INVAILED_HANDLE
// }}} ![ THROW_INVAILED_HANDLE ]
// ================================================================================================ //

// ================================================================================================ //
// ==  THROW_ASSERT_FAILED                                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// [ THROW_ASSERT_FAILED ] {{{
#ifndef    THROW_ASSERT_FAILED
#   define THROW_ASSERT_FAILED(func, X) vT(#func" - Assert failed("#X")!")
#endif  // THROW_ASSERT_FAILED
// }}} ![ THROW_ASSERT_FAILED ]
// ================================================================================================ //

#endif // ! __VM_VERIFY_H__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //

