

#include <vm_tools/vm_utst.h>
#include <iostream>

UT_FUNC_BEGIN(ut_unitframe_1)
    std::cout << "This is a unit test 1 function!" << std::endl;
    return true;
UT_FUNC_ENDED

UT_FUNC_BEGIN(ut_unitframe_2)
    std::cout << "This is a unit test 2 function!" << std::endl;
    return true;
UT_FUNC_ENDED

UT_FRAME_BEGIN( utf_unitframe )
UT_FRAME_REGIST(ut_unitframe_1)
UT_FRAME_REGIST(ut_unitframe_2)
UT_FRAME_ENDED

int main(int argc, char *argv[])
{
    RUN_UNITTEST(utf_unitframe)

    return 0;
}
