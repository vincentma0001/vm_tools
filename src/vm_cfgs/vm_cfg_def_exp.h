// ================================================================================================ //
// ==                                                                                            == //
// ==                                     vm_cfg_def_exp.h                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-04 21:39:49                                               == //
// ==   Modify Time          : 2020-11-26 20:59:33                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_CFG_DEF_EXP_H__
#define  __VM_CFG_DEF_EXP_H__


// ================================================================================================ //
// [ exception configure ] {{{

#define vTry            try{
#define vCatch(x)       }catch(x){
#define vEnd            };

#define vCatch_throw(func)      }catch( const tchar* const cpStr ){ \
                                    throw vm::CExp(__FILE__,__LINE__)(    func, cpStr ); \
                                }catch( const std::exception &ex ){ \
                                    throw vm::CExp(__FILE__,__LINE__)(    func, ex.what() ); \
                                }catch( const vm::CExp& ex ){ \
                                    throw vm::CExp(ex,__FILE__,__LINE__)( func, vT("Get a CExp object!") ); \
                                }catch( ... ){ \
                                    throw vm::CExp(__FILE__,__LINE__)(    func, vT("Get a Unknow exception!") );

#define vCExp                   vm::CExp(__FILE__,__LINE__,vm::CExp::emTypes::emErr)
#define vCExp_E( ex )           vm::CExp( ex, __FILE__,__LINE__ )

#define vCErrExp                vm::CExp(__FILE__,__LINE__,vm::CExp::emTypes::emErr)
#define vCWrnExp                vm::CExp(__FILE__,__LINE__,vm::CExp::emTypes::emWrn)

// }}} ! exception configure
// ================================================================================================ //


#endif // ! __VM_CFG_DEF_EXP_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
