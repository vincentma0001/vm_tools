
#include <vm_cfgs.h>

#include <vm_tools/vm_util.h>
#include <vm_tools/vm_files/CFileMode.h>

#include <vm_tools/vm_utst.h>

// ================================================================================================ //
// [ ut_filemode_1 ] {{{
UT_FUNC_BEGIN( ut_filemode_1 )

vTry
    vCout << vEndl;
    vCout << vT("*********************************************************************") << vEndl;

    // Add unit test coder here
    vm::CFileMode loFileMode;
    char* lpFileMode = loFileMode.Tranformat( vm::emFileMode::emRead|vm::emFileMode::emWrite|vm::emFileMode::emAppend );

    vCout << vT("FileMode : ") << lpFileMode << vEndl;
    

    vCout << vT("*********************************************************************") << vEndl;
    vCout << vEndl;
vCatch(...)
    return false;
vEnd
    return true;

UT_FUNC_ENDED
// }}} ! ut_filemode_1
// ================================================================================================ //

// ================================================================================================ //
// ==   unit test frame tst_frame_filemode                                                       == //
// ================================================================================================ //
// [ tst_frame_filemode ] {{{
UT_FRAME_BEGIN ( tst_frame_filemode )
UT_FRAME_REGIST( ut_filemode_1 )
UT_FRAME_ENDED
// }}} ![ tst_frame_filemode ]
// ================================================================================================ //

