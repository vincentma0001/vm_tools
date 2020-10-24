

#include <vm_tools/vm_cmds.h>

int main(int argc, char *argv[])
{
    std::cout << "this is tst_cmds!" << std::endl;
    vm::CWinCmd loCmd;

    loCmd.SetTitile(vT("tst_cmds"));
    loCmd.Write( vm::emColor::vf_lRed, vT("This is a test txt for red color!\n") );

    tchar* lpTitile = loCmd.GetTitile();
    loCmd.Write( vm::emColor::vf_lGreen, vT("Titile : %s"), lpTitile );

    return 0;
}
