
#include <limits.h>
#include <stdio.h>
#include <iostream>

#include <vm_cfgs.h>

int main(int argc, char *argv[])
{

    printf( "Test %d", vMax(10, 20) );

    ///*
    printf( "int Max size : %d\n", INT_MAX );
    printf( "int Min size : %d\n", INT_MIN );
    printf( "int Max size : %d\n", vMaxsInt );
    printf( "int Min size : %d\n", vMinsInt );
    //*/

    //*
    std::string lsTmp   =  "this is text! 测试";
    std::cout.imbue(std::locale("chs"));
    std::cout  << "tst_cfgs  cout is running!  str = "<< lsTmp << " len = " << lsTmp.length() << std::endl;
    std::cout  << "tst_cfgs  cout is running!  str = "<< lsTmp << " len = " << lsTmp.size() << std::endl;

    std::wstring lsTmpw = L"this is text! 测试";
    std::wcout.imbue(std::locale("chs"));
    std::wcout << L"tst_cfgs wcout is running! wstr = " << lsTmpw << " len = " << lsTmpw.length() << std::endl;
    std::wcout << L"tst_cfgs wcout is running! wstr = " << lsTmpw << " len = " << lsTmpw.size() << std::endl;

    vstring lsTmpv = vT("this is text! 测试");
    vCout      << vT("tst_cfgs vCout is running! vstr = ") << lsTmpv << " len = " << lsTmpv.length() << vEndl;
    vCout      << vT("tst_cfgs vCout is running! vstr = ") << lsTmpv << " len = " << lsTmpv.size() << vEndl;
    //*/

    return 0;
}
