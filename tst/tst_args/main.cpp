
#include <vm_tools/vm_util/CArgs.hpp>
#include <vm_tools/vm_util/v_funcs_io.h>

int main(int argc, char *argv[])
{
    tchar lszTmp[1024] = {vT("This is a test!")};

    vm::CArgs<20> loArgs;
    loArgs.Splite( lszTmp, vT(" !") );

    for( unsigned int i=0; i<loArgs.Argc(); i++ )
    {
        vLine( vT("String part (%d:%s)"), i, loArgs[i] );
    }
    return 0;
}
