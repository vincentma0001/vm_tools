
#include <iostream>
#include <vm_cfgs.h>
#include <dlfcn.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    ::Dl_info loInfo;
    int liRet = dladdr( (void*)main, &loInfo );
    if( liRet == 0 )
    {
        vCout << "dl err  : " << dlerror() << vEndl;
    }
    else
    {
        vCout << "dl name : " << loInfo.dli_fname << vEndl;
    }

    char cwd_path[1024] = {0x00};
    ::getcwd( cwd_path, sizeof(cwd_path) );
    vCout << "Cwd : " << cwd_path << vEndl;


    char file_path[1024] = {0x00};
    if (readlink("/proc/self/exe", file_path, sizeof(file_path) - 1) != -1) 
    {
        printf("%s\n", file_path);
    }else
    {
        printf("%s\n", strerror(errno));
    }


    return 0;
}
