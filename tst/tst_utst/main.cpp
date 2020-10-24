

#include <vm_tools/vm_utst.h>

UT_FUNC_BEGIN(ut_utst_1)
    std::cout << "This is a unit test 1 function!" << std::endl;
    return true;
UT_FUNC_ENDED
UT_FUNC_BEGIN(ut_utst_2)
    std::cout << "This is a unit test 2 function!" << std::endl;
    return true;
UT_FUNC_ENDED

UT_FRAME_BEGIN( utf_utst )
UT_FRAME_REGIST(ut_utst_1)
UT_FRAME_REGIST(ut_utst_2)
UT_FRAME_ENDED

int main(int argc, char *argv[])
{
    RUN_UNITTEST(utf_utst)

    return 0;
}
