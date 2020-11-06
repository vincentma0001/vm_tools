// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CPrFmt.hpp                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-05 10:51                                                  == //
// ==   Modify Time          : 2020-11-05 10:51                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CPRFMT_HPP__
#define  __CPRFMT_HPP__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_string.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CPrFmt : This class deal with printf funcs's input format                           == //
// ------------------------------------------------------------------------------------------------ //
template< size_t tsztBufSize >
class CPrFmt
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CPrFmt(){};
    // Destruct define
    inline virtual ~CPrFmt(){};

private:
    // Copy construct define
    inline CPrFmt             ( const CPrFmt &obj ){};
    // Assignment operation
    inline CPrFmt& operator = ( const CPrFmt &obj ){return *this;};
// }}} ! Construct & Destruct
// ------------------------------------------------------------------------------------------------ //
// Operators : {{{
public:
    inline tchar* operator * () { return mszBuf; }
// }}} ! Operators

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    tchar               mszBuf[tsztBufSize];
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : 
public:
    size_t Size(){ return tsztBufSize;     };
    size_t Len (){ return vStrlen(mszBuf); };

    CPrFmt&      Char( const size_t csztWidth=0, const bool bFillZero=false, const bool bLeft=false )
    {
        vMemZero(mszBuf);
        size_t lsztOffset = 0;

        mszBuf[lsztOffset] = vT('%');
        lsztOffset += sizeof(tchar);

        if( csztWidth != 0 )
        {
            if( bLeft == true )
            {
                mszBuf[lsztOffset] = vT('-');
                lsztOffset += sizeof(tchar);
            }

            if( bFillZero == true )
            {
                mszBuf[lsztOffset] = vT('0');
                lsztOffset += sizeof(tchar);
            }

            tchar* lpPos = mszBuf+lsztOffset;
            vm::v_sprintf( lpPos, (tsztBufSize-lsztOffset), vT("%zu"), csztWidth );
            lsztOffset += vStrlen(lpPos);
        }

        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        printf( "Step 1 : %s\n", mszBuf );
        return *this;
    };
    CPrFmt&     UChar()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('u');

        return *this;
    };

    CPrFmt&      Short()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        return *this;
    };
    CPrFmt&     UShort()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('h');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('u');

        return *this;
    };

    CPrFmt&      Int()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        return *this;
    };
    CPrFmt&     UInt()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('u');

        return *this;
    };

    CPrFmt&      Long()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        return *this;
    };
    CPrFmt&     ULong()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('u');

        return *this;
    };

    CPrFmt&      LLong()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        return *this;
    };
    CPrFmt&     ULLong()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('u');

        return *this;
    };

    CPrFmt&       Float()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('f');

        return *this;
    };
    CPrFmt&      Double()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('f');

        return *this;
    };
    CPrFmt&     LDouble()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('l');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('f');

        return *this;
    };

    CPrFmt&      Size_t()
    {
        vMemZero(mszBuf);

        size_t lsztOffset = 0;
        mszBuf[lsztOffset] = vT('%');

        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('z');
        lsztOffset += sizeof(tchar);
        mszBuf[lsztOffset] = vT('d');

        return *this;
    }
//  ! Methods

};
// }}} ! [ class CPrFmt ]
// ================================================================================================ //
// Class realization :
#include "CPrFmt.hpp.inl"
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CPRFMT_HPP__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
