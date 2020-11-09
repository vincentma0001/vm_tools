
#include <iostream>
#include <vm_cfgs.h>
#include <dlfcn.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>

void scanFile(const char *szDir)
{
    DIR *pDir            = NULL;
    struct dirent *pFile = NULL;

    pDir                 = opendir(szDir);
    if (pDir == NULL) return;

    while ((pFile = readdir(pDir)) != NULL) 
    {
        if (pFile->d_type & DT_DIR) 
        {
        
            if (strcmp(pFile->d_name, ".") == 0 || strcmp(pFile->d_name, "..") == 0) 
                continue;

            char Path[256];
            int len = strlen(szDir);
            strncpy(Path, szDir, len + 1);
            if (szDir[len - 1] != '/') strncat(Path, "/", 2);
            strncat(Path, pFile->d_name, strlen(pFile->d_name) + 1);
            scanFile(Path);
        } 
        else 
        {
            printf("path:%s     fileName:%s\n", szDir, pFile->d_name);
        }
    }

    closedir(pDir);
}
int main(int argc, char *argv[])
{

    const char* lpDir = "/vm/vm_tools/bin";
    scanFile( lpDir );

    return 0;
}
