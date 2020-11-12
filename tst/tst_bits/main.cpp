

#include "tst_cbit08.h"
#include "tst_cbit16.h"
#include "tst_cbit32.h"
#include "tst_cbit64.h"

int main(int argc, char *argv[])
{
    RUN_UNITTEST( tst_frame_cbit08 );
    RUN_UNITTEST( tst_frame_cbit16 );
    RUN_UNITTEST( tst_frame_cbit32 );
    RUN_UNITTEST( tst_frame_cbit64 );
    return 0;
}
