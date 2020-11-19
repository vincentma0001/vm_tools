
#include "tst_test.h"

int main(int argc, char *argv[])
{

    CTst<int,1024> loTst1;
    loTst1.Print();

    CUsrTst loTst2;
    loTst2.Print();

    return 0;
}
