// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CCycBufPtr.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 11:04                                                  == //
// ==   Modify Time          : 2020-11-04 11:04                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CCYCBUFPTR_H__
#define  __CCYCBUFPTR_H__


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

// ================================================================================================ //
// ==  Class CCycBufPtr : This class deal with cyc buffer                                        == //
// ------------------------------------------------------------------------------------------------ //
class CCycBufPtr
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CCycBufPtr( const tchar* const cpBuf, const size_t csztBufSize );
    // Destruct define
    inline virtual ~CCycBufPtr();

private:
    // Copy construct define
    inline CCycBufPtr             ( const CCycBufPtr &obj );
    // Assignment operation
    inline CCycBufPtr& operator = ( const CCycBufPtr &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    const tchar*       mpBufStart;
    const tchar*       mpBufEnded;
    const size_t       msztSize  ;
    tchar*             mpStartPos;
    tchar*             mpEndedPos;
    size_t             msztLen   ;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // normal funcs {{{
    // Get buffer size
    size_t Size  (  );
    // Reset cyc buffer
    void   Reset (  );
    // }}}

    // Size funcs {{{
    // Get used size in buffer
    size_t       SizeUsed  (  );
    // Get unused size in buffer
    size_t       SizeUnused(  );
    // Get offset between start pointer and buffer start pointer
    unsigned int StartPos  (  );
    // Get offset between ended pointer and buffer start pointer
    unsigned int EndedPos  (  );
    // }}}

    // Put funcs {{{
    bool Put( const    char* const pStr, const size_t  csztStrLen ){return true;};
    bool Put( const wchar_t* const pStr, const size_t  csztStrLen ){return true;};

    // Write a char to cyc buffer
    bool Put( const               char    cVal );
    // Write a char to cyc buffer
    bool Put( const unsigned      char  cucVal ){return true;};

    bool Put( const            wchar_t  cwcVal ){return true;};

    bool Put( const              short   csVal ){return true;};
    bool Put( const unsigned     short  cusVal ){return true;};

    bool Put( const                int   ciVal ){return true;};
    bool Put( const unsigned       int  cuiVal ){return true;};

    bool Put( const               long   clVal ){return true;};
    bool Put( const unsigned      long  culVal ){return true;};

    bool Put( const          long long  cllVal ){return true;};
    bool Put( const unsigned long long cullVal ){return true;};

    bool Put( const              float   cfVal ){return true;};
    bool Put( const             double   cdVal ){return true;};
    // }}}

    // Get funcs {{{
    bool Get(    char* const pBuf, const size_t csztBufSize ){return true;};
    bool Get( wchar_t* const pBuf, const size_t csztBufSize ){return true;};

    // Get a letter from cyc buffer, and remove it form cyc buffer
    bool Get(               char    &Val );
    // Get a letter from cyc buffer, and remove it form cyc buffer
    bool Get( unsigned      char  &ucVal ){return true;};

    bool Get(            wchar_t  &wcVal ){return true;};

    bool Get(              short   &sVal ){return true;};
    bool Get( unsigned     short  &usVal ){return true;};

    bool Get(                int   &iVal ){return true;};
    bool Get( unsigned       int  &uiVal ){return true;};

    bool Get(               long   &lVal ){return true;};
    bool Get( unsigned      long  &ulVal ){return true;};

    bool Get(          long long  &llVal ){return true;};
    bool Get( unsigned long long &ullVal ){return true;};

    bool Get(              float   &fVal ){return true;};
    bool Get(             double   &dVal ){return true;};
    // }}}

    // trailer funcs {{{
    bool trailer(    char* const pBuf, size_t csztBufSize ){return true;};
    bool trailer( wchar_t* const pBuf, size_t csztBufSize ){return true;};

    bool trailer(               char   &cVal ){return true;};
    bool trailer( unsigned      char  &ucVal ){return true;};

    bool trailer(            wchar_t  &wcVal ){return true;};

    bool trailer(              short   &sVal ){return true;};
    bool trailer(unsigned      short  &usVal ){return true;};

    bool trailer(                int   &iVal ){return true;};
    bool trailer( unsigned       int  &uiVal ){return true;};

    bool trailer(               long   &lVal ){return true;};
    bool trailer( unsigned      long  &ulVal ){return true;};

    bool trailer(          long long  &llVal ){return true;};
    bool trailer( unsigned long long &ullVal ){return true;};

    bool trailer(              float   &fVal ){return true;};
    bool trailer(             double   &dVal ){return true;};
    // }}}
// }}} ! Methods

};
// }}} ! [ class CCycBufPtr ]
// ================================================================================================ //
// Class realization :
#include "CCycBufPtr.h.inl"
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CCYCBUFPTR_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
