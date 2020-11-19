
#ifndef  __TST_SINGLETON_H__
#define  __TST_SINGLETON_H__

#include <vm_cfgs.h>
#include <vm_tools/vm_ipcs.h>
#include <vm_tools/vm_util.h>

#ifndef    vTst
#   define vTst      vSingleTon(CTst, vm::CMutex_null)
#endif // !vTst

// ================================================================================================ //
// ==  Class CTst : public vm::CSingleton<CTst,vm::CMutex_null> : TODO add class brief here      == //
// ------------------------------------------------------------------------------------------------ //
class CTst : public vm::CSingleton<CTst,vm::CMutex_null>
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CTst(){};
    // Destruct define
    inline virtual ~CTst(){};

private:
    // Copy construct define
    inline CTst             ( const CTst &obj ){               };
    // Assignment operation
    inline CTst& operator = ( const CTst &obj ){ return *this; };
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
public:
    int         miA;
    int         miB;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    void print(  )
    {
        vPrintf( vT("Val A : %d, Val B : %d\n"), miA, miB );
    }
// }}} ! Methods

};
// }}} ! [ class CTst : public vm::CSingleton<CTst,vm::CMutex_null> ]
// ================================================================================================ //


#endif // ! __TST_SINGLETON_H__
