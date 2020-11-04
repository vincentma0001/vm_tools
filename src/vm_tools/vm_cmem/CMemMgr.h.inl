// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CMemMgr.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-04 11:59                                                  == //
// ==   Modify Time          : 2020-11-04 11:59                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMEMMGR_H_INL__
#define  __CMEMMGR_H_INL__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
#include <vm_tools/vm_cbit.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// [ Comment info ] {{{


// ================================================================================================ //
// ==  Class CMemMgr Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CMemMgr Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemMgr::CMemMgr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CMemMgr::CMemMgr(  )
// {{{
{
}
// }}} End of func CMemMgr::CMemMgr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CMemMgr::CMemMgr()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CMemMgr::~CMemMgr(  )
// {{{
{
}
// }}} End of func CMemMgr::~CMemMgr()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CMemMgr::CMemMgr()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CMemMgr::CMemMgr( const CMemMgr &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CMemMgr::CMemMgr()
// ================================================================================================ //

// }}} ![ Class CMemMgr Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CMemMgr operator realization                                                        == //
// ================================================================================================ //
// [ Class CMemMgr operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemMgr::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CMemMgr&         - [O] this object
inline vm::CMemMgr& vm::CMemMgr::operator = ( const CMemMgr &obj )
// {{{
{
    return *this;
}
// }}} End of func CMemMgr::operator=()
// ================================================================================================ //

// }}} ![ Class CMemMgr operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CMemMgr Functional realization                                                      == //
// ================================================================================================ //
// [ Class CMemMgr Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CMemMgr::Output(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Output string by hex mode
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pHandle          - [I] Output handle, stdout stderr, *file
// ==            cpStr            - [I] String that need output
// ==            csztStrLen       - [I] string's length
template< size_t tsztLineLen, size_t tsztSpliteLen >
inline void vm::CMemMgr::Output( FILE* pHandle, const char* const cpStr, const size_t csztStrLen )
// {{{ 
{
    char*        lpPos              = const_cast<char*>(cpStr);
    unsigned int luiLineCount       = 1;
    unsigned int luiSpliteCount     = 1;
    char  lszStrValue[tsztLineLen]  = {0x00};

    for( size_t i=1; i<=csztStrLen; i++, luiLineCount++, luiSpliteCount++ )
    {
        vm::CBit08              loBit(*lpPos);
        vm::CBitStr<vm::CBit08> loBitStr(loBit);

        fprintf( pHandle, "%s", loBitStr.toHeX02() );
        lszStrValue[luiLineCount-1]=*lpPos;
        lpPos++;

        if( luiSpliteCount>=tsztSpliteLen )
        {
            if( luiLineCount<tsztLineLen && i<csztStrLen )
            { fputs( " |", pHandle ); }
            luiSpliteCount = 0;
        }
        if( luiLineCount>=tsztLineLen )
        {
            fputs( " || ", pHandle );
            for( size_t i=0; i<tsztLineLen; i++ )
            {
                if( isprint( lszStrValue[i] ) )
                { fputc( lszStrValue[i], pHandle ); }
                else
                { fputc( '.', pHandle ); }
            }
            vMemZero( lszStrValue );
            fputc( '\n',pHandle );
            luiLineCount = 0;
            luiSpliteCount = 0;
            continue;
        }

        fputc( ' ', pHandle );
    }

    int liLeftCount = csztStrLen % tsztLineLen;
    int liSpaceNum  = (tsztLineLen-liLeftCount)*3;
    int liSpliteNun = (liSpaceNum/tsztSpliteLen)*2;
    if( liLeftCount != 0 )
    {
        for(size_t i=0;i<(size_t)(liSpaceNum+liSpliteNun);i++)
        { fputc( ' ', pHandle ); }
        fputs( " || ", pHandle );
        for( size_t i=0; i<tsztLineLen; i++ )
        {
            if( isprint( lszStrValue[i] ) )
            { fputc( lszStrValue[i], pHandle ); }
            else
            { fputc( '.', pHandle ); }
        }
        vMemZero( lszStrValue );
        fputc( '\n',pHandle );
    }
}
// }}} end of func CMemMgr::Output(...)
// ================================================================================================ //

// }}} ![ Class CMemMgr Functional realization ]
// ================================================================================================ //


// }}} ! Comment info
// ================================================================================================ //


#endif // ! __CMEMMGR_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
