
#include "tst_string.h"
#include "tst_func_str.h"
#include <vm_tools/vm_utst.h>

int main(int argc, char *argv[])
{
    RUN_UNITTEST( tst_frame_cstr );
    RUN_UNITTEST( tst_frame_fstr );
    return 0;
}
