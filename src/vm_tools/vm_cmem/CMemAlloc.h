// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CMemAlloc.h                                         == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-03 10:00:00                                               == //
// ==   Modify Time          : 2020-11-05 09:26:58                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CMEMALLOC_H__
#define  __CMEMALLOC_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include "CMemBlock.h"
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CMemAlloc : This class deal with memory alloc and free operation                    == //
// ------------------------------------------------------------------------------------------------ //
class CMemAlloc
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Macrodefs : {{{
#ifndef    _V_CMEMALLOC_BLOCK_SIZE_1_
#   define _V_CMEMALLOC_BLOCK_SIZE_1_      128
#endif // !_V_CMEMALLOC_BLOCK_SIZE_1_

#ifndef    _V_CMEMALLOC_BLOCK_SIZE_2_
#   define _V_CMEMALLOC_BLOCK_SIZE_2_      1024
#endif // !_V_CMEMALLOC_BLOCK_SIZE_2_

#ifndef    _V_CMEMALLOC_BLOCK_SIZE_3_
#   define _V_CMEMALLOC_BLOCK_SIZE_3_      8192
#endif // !_V_CMEMALLOC_BLOCK_SIZE_3_

#ifndef    _V_CMEMALLOC_BLOCK_SIZE_4_
#   define _V_CMEMALLOC_BLOCK_SIZE_4_      32768
#endif // !_V_CMEMALLOC_BLOCK_SIZE_4_
// }}} ! Macrodefs
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline explicit CMemAlloc();
    // Destruct define
    inline virtual ~CMemAlloc();

private:
    // Copy construct define
    inline CMemAlloc             ( const CMemAlloc &obj );
    // Assignment operation
    inline CMemAlloc& operator = ( const CMemAlloc &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_1_>*          mpUnuseBlock1;
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_1_>*          mpUseedBlock1;
    
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_2_>*          mpUnuseBlock2;
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_2_>*          mpUseedBlock2;
    
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_3_>*          mpUnuseBlock3;
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_3_>*          mpUseedBlock3;
    
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_4_>*          mpUnuseBlock4;
    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_4_>*          mpUseedBlock4;
    /* TODO Add class's menbers here */
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    template<typename tType>
    tType* Alloc(  )
    {
        unsigned long lulTypeSize = sizeof(tType);
        if( lulTypeSize < _V_CMEMALLOC_BLOCK_SIZE_1_ )
            void* lpAddress = 
    }

    CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_1_>* GetBlock1()
    {
        CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_1_>* lpBlock = nullptr; 
        if( mpUnuseBlock1 == nullptr )
        {
            lpBlock = new CMemBlock<_V_CMEMALLOC_BLOCK_SIZE_1_>();
            mpUseedBlock1->push_back( lpBlock );
        }
        else
        {
            lpBlock = mpUnuseBlock1;
            mpUnuseBlock1 = lpBlock->Next();
            mpUseedBlock1->push_back( lpBlock );
        }
    }

    char mszBuf[1025];

    template<typename tType>
    tType* alloc(  )
    {
        vMemZero(mszBuf);
        tType* lpType = new(mszBuf) tType;
        return lpType;
    }
    /* TODO Add class's Methods here */
// }}} ! Methods

};
// }}} ! [ class CMemAlloc ]
// ================================================================================================ //
// Class realization :
#include "CMemAlloc.h.inl"
// ================================================================================================ //


};
// }}} End of namespace vm
// ================================================================================================ //


#endif // ! __CMEMALLOC_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
