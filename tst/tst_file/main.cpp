
#include "tst_file_locale.h"
#include "tst_file.h"
#include "tst_filesys.h"
#include "tst_filemode.h"

int main(int argc, char *argv[])
{
    RUN_UNITTEST( tst_frame_locale )
    RUN_UNITTEST( tst_frame_file )
    RUN_UNITTEST( tst_frame_filesys )
    RUN_UNITTEST( tst_frame_filemode )
    return 0;
}
