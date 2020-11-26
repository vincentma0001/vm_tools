
//#include "tst_test.h"
#include "vm_tools/vm_funcs/v_funcs_str.h"
#include <cstdlib>
#include <curses.h>
#include <vm_tools/vm_time.h>
#include <vm_tools/vm_funcs.h>

int main(int argc, char *argv[])
{
    vm::CTime<1024> loTime;
    loTime.Now();
  
    long lMaxCount = 99999999;
    tchar lszBuf[1024] = {0x00};

    vm::CLuxClock loClock;
    loClock.Start();
    for( long lCount=0; lCount<lMaxCount; lCount++ )
    {
        //loTime.Fmt();
        vm::v_strcpy( lszBuf, sizeof(lszBuf), vT("This is a test!") );
    }
    loClock.Ended();
    vLine( vT("Fmt cost : msec(%lld,%f)"), loClock.msec(), (double)loClock.usec()/lMaxCount );

    return 0;
}
