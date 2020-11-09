// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CFileMode.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-09 09:43:57                                               == //
// ==   Modify Time          : 2020-11-09 12:39:08                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CFILEMODE_H__
#define  __CFILEMODE_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// enum emFileMode : File mode List
enum emFileMode
// {{{
{
    // Open file for input  operations. The file must exist.
    emRead   = 0x0001,
    // Open file for output operations. Create an empty file. If a file with the same name already 
    // exists, its contents are discarded and the file is treated as a new empty file.
    emWrite  = 0x0002,
    // Open file for output at the end of a file. Output operations always write data at the end of 
    // the file, expanding it. Repositioning operations (fseek, fsetpos, rewind) are ignored. The 
    // file is created if it does not exist.
    emAppend = 0x0004,

    // emRead  |emUpdate : Open a file for update (both for input and output). The file must exist.
    // emWrite |emUpdate : Create an empty file and open it for update (both for input and output). 
    //                     If a file with the same name already exists its contents are discarded 
    //                     and the file is treated as a new empty file.
    // emAppend|emUpdate : Open a file for update (both for input and output) with all output operations 
    //                     writing data at the end of the file. Repositioning operations (fseek, fsetpos, 
    //                     rewind) affects the next input operations, but output operations move the 
    //                     position back to the end of file. The file is created if it does not exist.
    emUpdate = 0x0010,

    // Open a file as a binary file, a "b" character has to be included in the mode string. 
    emBinary = 0x0100,
    // Open a file as a text file, a "t" character has to be included in the mode string. 
    emText   = 0x0200,

    // This subspecifier forces the function to fail if the file exists, instead of overwriting
    // it. (stdc 2011) 
    emExist  = 0x1000
};
// }}} End of def enum emFileMode

// ================================================================================================ //
// ==  Class CFileMode : the class change enfileMode to string                                   == //
// ------------------------------------------------------------------------------------------------ //
class CFileMode
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    _V_CFILEMODE_MAX_BUF_
#   define _V_CFILEMODE_MAX_BUF_     32
#endif // !_V_CFILEMODE_MAX_BUF_
// }}} ! Macrodefs

// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CFileMode();
    // Destruct define
    inline virtual ~CFileMode();

private:
    // Copy construct define
    inline CFileMode( const CFileMode &obj );
    // Assignment operation
    inline CFileMode& operator = ( const CFileMode &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar   mszFileMode[_V_CFILEMODE_MAX_BUF_];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Tranform emFileMode flag to string
    tchar* Tranformat( const short csFileMode );
// }}} ! Methods

};
// }}} ! [ class CFileMode ]
// ================================================================================================ //

}
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CFileMode.h.inl"
// ================================================================================================ //


#endif // ! __CFILEMODE_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
