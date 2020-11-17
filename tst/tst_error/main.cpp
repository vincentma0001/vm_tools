
//#include "tst_syserr.h"
#include "tst_usrerr.h"
#include "tst_err.h"

int main(int argc, char *argv[])
{
//    RUN_UNITTEST( tst_frame_syserr );
    RUN_UNITTEST( tst_frame_usrerr );
    RUN_UNITTEST( tst_frame_err    );
    return 0;
}
