
//#include "tst_test.h"
#include <cstdlib>
#include <curses.h>
#include <vm_tools/vm_time.h>
#include <vm_tools/vm_funcs.h>

int main(int argc, char *argv[])
{

    tTimeb lstTimeb1 = vm::CTimeb::TimeNow();
    vLine( vT("Timeb : time(%lld), milltm(%d), zone(%d), flag(%d) "), lstTimeb1.time, lstTimeb1.millitm, lstTimeb1.timezone, lstTimeb1.dstflag );

    tchar lszBuf[1024] = {0x00};
    vm::CTimeStr loTimeStr( lstTimeb1, lszBuf, sizeof(lszBuf) );
    vLine( vT("TimeStr : %s"), loTimeStr.StrTime() );
    vLine( vT("Fmt[%s]"), loTimeStr.Fmt<1024>( vT("This is a test! %Y4-%MM-%DD %hh:%mm:%ss:%ms") ) );

    return 0;
}
