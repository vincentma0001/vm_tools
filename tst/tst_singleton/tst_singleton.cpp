
#include "tst_singleton.h"
#include "tst_singleton2.h"

int main(int argc, char *argv[])
{
    vTst->miA = 10;
    vTst->miB = 20;
    vTst->print();

    tst();
    return 0;
}
