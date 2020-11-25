
//#include "tst_test.h"
#include "vm_tools/vm_time/CTime.hpp"
#include <cstdlib>
#include <curses.h>
#include <vm_tools/vm_time.h>
#include <vm_tools/vm_funcs.h>

int main(int argc, char *argv[])
{
    vm::CTime<1024> loTime;
    loTime.Now();
    vLine( loTime.Fmt() );
    return 0;
}
