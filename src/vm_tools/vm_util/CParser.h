// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CParser.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 21:31:55                                               == //
// ==   Modify Time          : 2020-11-18 17:48:59                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CPARSER_H__
#define  __CPARSER_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm {
// ------------------------------------------------------------------------------------------------ //

// Class CPattern : TODO add class brief here
class CPattern
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CPattern( const tchar* const cpFlg, const size_t csztFlgLen,
                              const tchar* const cpRpl, const size_t csztRplLen  );
    // Construct define
    inline          CPattern( const tchar* const cpFlg, const tchar* const cpRpl );
    // Destruct define
    inline virtual ~CPattern(                                                    );

private:
    // Copy construct define
    inline CPattern             ( const CPattern &obj );
    // Assignment operation
    inline CPattern& operator = ( const CPattern &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // Flag string's address
    const tchar*          mpFlg;
    // Flag string's length
    size_t          msztFlgLen;
    // Replace string's address
    const tchar*          mpRpl;
    // Replace string's length
    size_t          msztRplLen;

private:
    // Pattern list
    CPattern*       mpPattern;
// }}} ! Members

// Friendefs : {{{
friend class CParser;
// }}} ! Friendefs

}; // }}} End of class CPattern

// ------------------------------------------------------------------------------------------------ //

// Class CParser : this class parse format string
class CParser
{ // {{{

// Construct & Destruct : {{{
public:
    // Construct define
    inline          CParser( const tchar cszSpecifier, const tchar* const cpFmt, const size_t csztFmtLen);
    // Construct define
    inline          CParser( const tchar cszSpecifier, const tchar* const cpFmt                         );
    // Destruct define
    inline virtual ~CParser(                                                                            );

private:
    // Copy construct define
    inline CParser             ( const CParser &obj );
    // Assignment operation
    inline CParser& operator = ( const CParser &obj );
// }}} ! Construct & Destruct

// Menbers   : {{{
private:
    // Format specify letter
    tchar           mszSpecifier;

    // Format string's address
    const tchar*    mpFmt;
    // Format string's length
    size_t          msztFmtLen;

    // Pattern list
    CPattern*       mpPattern;
// }}} ! Members

// Methods   : {{{
public:
    CPattern*&  LastPattern( CPattern* &pPattern )
    {
        if( pPattern == nullptr )
            return pPattern;

        return LastPattern( pPattern->mpPattern );
    }
    // Regis a CPattern object
    void   Regist ( CPattern& oFlag );

    // Parse format string
    tchar* Parse  ( tchar* const pOutBuf, const size_t csztOutBufLen );
// }}} ! Methods

}; // }}} End of class CParser

// ------------------------------------------------------------------------------------------------ //
}; // }}} End of namespace vm
// ================================================================================================ //
// class realization
#include "CParser.h.inl"
// ================================================================================================ //


#endif // ! __CPARSER_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
