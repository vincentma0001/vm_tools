
/*
#include <vm_tools/vm_error.h>
#include <iostream>

int main(int argc, char *argv[])
{
    tchar lsTmp[256] = { 0x00 };
    vm::CErrPtr loErr1(10, lsTmp, sizeof(lsTmp) );
    vCout << "Code1 : " << loErr1.toCode() << " str1 : " << loErr1.toString() << vEndl;

    vm::CErr<256> loErr2;
    vCout << "Code2 : " << loErr2.toCode() << " str2 : " << loErr2.toString() << vEndl;

    vCout << "Code3 : " << vm::CErr<256>(10).toString() << vEndl;

    vm::CErr<256> loErr4(10);
    vCout << "Code4 : " << loErr4.toCode() << " str4 : " << loErr4.toString() << vEndl;

    long long leRet = 6;
    vm::CErr<256> loErr5(leRet);
    vCout << "Code5 : " << loErr5.toCode() << " str5 : " << loErr5.toString() << vEndl;

    try{
        vm::CErr<256>(leRet).Throw();
    } catch( tchar* lpErrStr )
    {
        vCout << vT("Err   : ") << lpErrStr << vEndl;
    }

    return 0;
}
//*/
