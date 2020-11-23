

#include <vm_tools/vm_time/CCrtClock.h>
#include <vm_tools/vm_funcs.h>

#include "../tst_time_func.h"

int main(int argc, char *argv[])
{

    vLine( vT("Clock per sec : %lld"), CLOCKS_PER_SEC );
    vm::CCrtClock loClock;
    loClock.Start();

    frequency_of_primes( 999999 );

    loClock.Ended();
    vLine( vT("Clock : sec(%lld,%f), msec(%lld), usec(%lld), nsec(%lld)"), loClock.sec(), loClock.d_sec(), loClock.msec(), loClock.usec(), loClock.nsec() );
    return 0;
}
