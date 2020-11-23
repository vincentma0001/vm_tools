
#include <vm_tools/vm_time/CLuxClock2.h>
#include <vm_tools/vm_funcs.h>

#include "../tst_time_func.h"

int main(int argc, char *argv[])
{

    vm::CLuxClock2 loClock;
    loClock.Start();

    frequency_of_primes( 999999 );

    loClock.Ended();
    vLine( vT("Clock : sec(%lld,%f), msec(%lld), usec(%lld), nsec(%lld)"), loClock.sec(), loClock.d_sec(), loClock.msec(), loClock.usec(), loClock.nsec() );
    return 0;
}
