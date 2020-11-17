
#ifndef  __TSTRET_H__
#define  __TSTRET_H__

// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_error.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //
// enum emTstRet : emTstRet comment
enum emTstRet
{  // {{{$
    // test error return
    emErrRet1 = vm::emRet::emError-1

}; // }}} End of def enum emTstRetRet

// ------------------------------------------------------------------------------------------------ //

// define user error infomation for special object
DEF_CUSRERR_BEGIN( eTstRet, _V_CUSEERR_BUF_SIZE_ )
DEF_CUSRERR_REGMEG( emTstRet::emErrRet1, vT("this is a test error return") )
DEF_CUSRERR_ENDED( eTstRet )

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //

#endif // ! __TSTRET_H__
