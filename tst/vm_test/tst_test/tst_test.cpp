
//#include "tst_test.h"
#include <cstdlib>
#include <curses.h>
#include <vm_tools/vm_funcs.h>

int main(int argc, char *argv[])
{

    tchar lszBuf[10] = {0x00};
    vm::v_inpput_line( lszBuf, sizeof(lszBuf) );

    vLine( vT("Input : %s"), lszBuf );
    return 0;
}
