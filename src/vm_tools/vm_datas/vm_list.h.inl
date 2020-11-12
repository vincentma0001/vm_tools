// ================================================================================================ //
// ==                                                                                            == //
// ==                                       vm_list.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-10 11:45                                                  == //
// ==   Modify Time          : 2020-11-10 11:45                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __VM_LIST_H_INL__
#define  __VM_LIST_H_INL__


// ================================================================================================ //
// [ Comment info ] {{{

///*
// ================================================================================================ //
// ==  Methord : vl_init_e(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Initialize a list note
// ==  Return  : stListNote<tType>* - [O] New list note
// ==  Params  : pNoteAddr          - [I] list note's init address, if it's nullptr, it will create
// ==                                     new note in heap
// ==            pDataAddr          - [I] list note's init address, if it's nullptr, it will create
// ==                                     new note in heap
template< typename tType >
inline vm::stListNote<tType>* vm::vl_init ( _vIn_ void* pNoteAddr, _vIn_ void* pDataAddr )
// {{{
{
    tType* lpData = nullptr;
    if( pDataAddr == nullptr )
        lpData = new tType;
    else
        lpData = new( pDataAddr ) tType;
    
    return vm::vl_init( lpData, pNoteAddr );
}
// }}} end of func vl_init_e(...)
// ================================================================================================ //
//*/

// ================================================================================================ //
// ==  Methord : vl_init(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Initialize a list note with tType pData
// ==  Return  : stListNote<tType>* - [O] New list note
// ==  Params  : pData              - [I] list note's data pointer
// ==            paddr              - [I] list note's init address, if it's nullptr, it will create
//                                        new note in heap
template< typename tType >
inline vm::stListNote<tType>* vm::vl_init ( _vIn_ tType* pData, _vIn_ void* paddr )
// {{{
{
    _VERIFY_(vT("vl_init()"), pData);
    
    stListNote<tType>* lpNote = nullptr;
    if( paddr != nullptr )
        lpNote = new( paddr ) stListNote<tType>;
    else
        lpNote = new stListNote<tType>;
    
    lpNote->mpData = pData;
    lpNote->mpPrev = nullptr;
    lpNote->mpNext = nullptr;
    
    return lpNote;
}
// }}} end of func vl_init(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_init(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Initialize a list note with tType object oData
// ==  Return  : stListNote<tType>* - [O] New list note 
// ==  Params  : oData              - [I] tType object
// ==            pNoteAddr          - [I] list note's init address, if it's nullptr, it will create
// ==                                     new note in heap
// ==            pDataAddr          - [I] list note's init address, if it's nullptr, it will create
// ==                                     new note in heap
template< typename tType >
inline vm::stListNote<tType>* vm::vl_init ( _vIn_ tType oData, _vIn_ void* pNoteAddr, _vIn_ void* pDataAddr )
// {{{
{
    vm::stListNote<tType>* lpNote = vm::vl_init<tType>( pNoteAddr, pDataAddr );
    *(lpNote->mpData) = oData;
    return lpNote;
}
// }}} end of func vl_init(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_free(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Free a list note
// ==  Return  : stListNote<tType>* - [O] list note's next note
// ==  Params  : pNote              - [I] list note need to be free
// ==            false              - [I] decide neet to free data or note
template< typename tType >
inline vm::stListNote<tType>* vm::vl_free ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ bool bFreeData )
// {{{
{
    _VERIFY_(vT("vl_free()"), pNote);
    
    vm::stListNote<tType>* lpPrev = pNote->mpPrev;
    vm::stListNote<tType>* lpNext = pNote->mpNext;
    if( lpPrev != nullptr )
        lpPrev = lpNext;
    
    if( pNote != nullptr )
    {
        if( bFreeData == true )
        {
            delete pNote->mpData;
            pNote->mpData = nullptr;
        }
        else
        {
            pNote->mpData = nullptr;
        }
    
        pNote->mpNext = nullptr;
        pNote->mpPrev = nullptr;
    
        delete pNote;
        pNote = nullptr;
    }
    
    return lpNext;
}
// }}} end of func vl_free(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_clean(...)                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Clean all note in list 
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pNote            - [I] Any note in list
// ==            bFreeData        - [I] Decide free data or note
template< typename tType >
void vm::vl_clean ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ bool bFreeData )
// {{{
{
    _VERIFY_( vT("vl_clean()"), pNote );

    vm::stListNote<tType>* lpNote = vm::vl_head( pNote );
    while( lpNote != nullptr )
    {
        lpNote = vm::vl_free( lpNote, bFreeData );
    }
}
// }}} end of func vl_clean(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_find(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find note in list by tType value pointer
// ==  Return  : stListNote<tType>* - [O] note pointer
// ==  Params  : pNote              - [I] Any note in list
// ==            pVal               - [I] value pointer
template< typename tType >
inline vm::stListNote<tType>* vm::vl_find ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ tType* pVal )
// {{{
{
    _VERIFY_2_( vT("vl_find()"), pNote, pVal );

    vm::stListNote<tType>* lpHead = vm::vl_head( pNote );
    while( lpHead != nullptr )
    {
        if( *(lpHead->mpData) == *pVal )
            return lpHead;
    }

    return lpHead;
}
// }}} end of func vl_find(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_find(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Find note in list by tType value
// ==  Return  : stListNote<tType>* - [O] note pointer
// ==  Params  : pNote              - [I] Any note in list
// ==            oVal               - [I] value
template< typename tType >
vm::stListNote<tType>* vm::vl_find ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ tType oVal )
// {{{
{
    _VERIFY_( vT("vl_find()"), pNote );

    vm::stListNote<tType>* lpHead = vm::vl_head( pNote );
    while( lpHead != nullptr )
    {
        if( *(lpHead->mpData) == oVal )
            return lpHead;
    }

    return lpHead;
}
// }}} end of func vl_find(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_insert(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Insert a child note to parent note
// ==  Return  : stListNote<tType>* - [O] Child  note pointer
// ==  Params  : pParent            - [I] Parent note pointer
// ==            pChild             - [I] Child  note pointer
template< typename tType >
inline vm::stListNote<tType>* vm::vl_insert ( _vIn_ vm::stListNote<tType>* pParent, _vIn_ vm::stListNote<tType>* pChild )
// {{{
{
    _VERIFY_2_( vT("vl_insert()"), pParent, pChild );
    
    if( pParent!=nullptr )
    {
        pParent->mpNext = pChild;
        pChild->mpPrev  = pParent;
    }
    
    return pChild;
}
// }}} end of func vl_insert(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_insert_tail(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Insert a child note to list end
// ==  Return  : vm::stListNote<tType>* - [O] list end note
// ==  Params  : pNote                  - [I] any note in list
// ==            pChild                 - [I] chlid note
template< typename tType >
vm::stListNote<tType>* vm::vl_insert_tail ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ vm::stListNote<tType>* pChild )
// {{{
{
    _VERIFY_2_( vT("vl_insert_tail()"), pNote, pChild );

    vm::stListNote<tType>* lpTail = vm::vl_tail( pNote );
    lpTail                        = vm::vl_insert( lpTail, pChild );
    return lpTail;
}
// }}} end of func vl_insert_tail(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_remove(...)                                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Remove a note from list
// ==  Return  : stListNote<tType>* - [O] note's next note
// ==  Params  : pNote              - [I] the note need to be remove
// ==            bFreeNote          - [I] decide it's need free note or not
// ==            bFreeData          - [I] decide note's data is need free or not
template< typename tType >
inline vm::stListNote<tType>* vm::vl_remove ( _vIn_ vm::stListNote<tType>* pNote, _vIn_ bool bFreeNote, _vIn_ bool bFreeData )
// {{{
{
    _VERIFY_( vT("vl_remove()"), pNote );

    stListNote<tType>* lpPrev = pNote->mpPrev;
    stListNote<tType>* lpNext = pNote->mpNext;
    if( lpPrev != nullptr )
        lpPrev->mpNext = lpNext;
    if( lpNext != nullptr )
        lpNext->mpPrev = lpPrev;

    pNote->mpPrev = nullptr;
    pNote->mpNext = nullptr;
    if( bFreeNote == true )
        vm::vl_free( pNote, bFreeData );

    return lpNext;
}
// }}} end of func vl_remove(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_head(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get list head note
// ==  Return  : stListNote<tType>* - [O] head note pointer
// ==  Params  : pNote              - [I] any note pointer in list
template< typename tType >
inline vm::stListNote<tType>* vm::vl_head ( _vIn_ vm::stListNote<tType>* pNote )
// {{{
{
    _VERIFY_( vT("vl_head()"), pNote );

    vm::stListNote<tType>* lpHead = pNote;
    while( lpHead->mpPrev != nullptr )
        lpHead = lpHead->mpPrev;

    return lpHead;
}
// }}} end of func vl_head(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_tail(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get list tail note
// ==  Return  : stListNote<tType>* - [O] tail note pointer
// ==  Params  : pNote              - [I] any note pointer in list
template< typename tType >
inline vm::stListNote<tType>* vm::vl_tail ( _vIn_ vm::stListNote<tType>* pNote )
// {{{
{
    _VERIFY_( vT("vl_tail()"), pNote );
    vm::stListNote<tType>* lpLast = pNote;

    while( lpLast->mpNext != nullptr )
        lpLast = lpLast->mpNext;

    return lpLast;
}
// }}} end of func vl_tail(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_set(...)                                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set note's data
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pNote            - [O] note pointer
// ==            oData            - [I] new value
template< typename tType >
inline void vm::vl_set  ( _vIn_ stListNote<tType>* pNote, _vIn_ const tType        oData )
// {{{
{
    _VERIFY_( vT("vl_set()"), pNote );

    *(pNote->mpData) = oData;
}
// }}} end of func vl_set(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_set(...)                                                                     == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set note's data
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : pNote            - [O] note pointer
// ==            pData            - [X] new value
template< typename tType >
inline vm::stListNote<tType>* vm::vl_set  ( _vIn_ stListNote<tType>* pNote, _vIn_ const tType* const pData )
// {{{
{
    _VERIFY_( vT("vl_set()"), pNote );

    tType* lpOldData = pNote->mpData;
    if( pNote->mpData == nullptr )
    {
        pNote->mpData = pData;
    }

    return lpOldData;
}
// }}} end of func vl_set(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_data(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get note's data pointer
// ==  Return  : tType*           - [O] data pointer
// ==  Params  : pNote            - [I] note pointer
template< typename tType >
inline tType* vm::vl_data ( _vIn_ const vm::stListNote<tType>* const pNote )
// {{{
{
    _VERIFY_( vT("vl_data()"), pNote );

    return pNote->mpData;
}
// }}} end of func vl_data(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_prev(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get note's prev pointer
// ==  Return  : stListNote<tType>* - [O] note's prev pointer
// ==  Params  : pNote              - [I] note's pointer
template< typename tType >
inline vm::stListNote<tType>* vm::vl_prev ( _vIn_ const vm::stListNote<tType>* const pNote )
// {{{
{
    _VERIFY_( vT("vl_prev()"), pNote );

    return pNote->mpPrev;
}
// }}} end of func vl_prev(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : vl_next(...)                                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get note's next pointer
// ==  Return  : stListNote<tType>* - [O] note's prev pointer
// ==  Params  : pNote              - [I] note's pointer
template< typename tType >
inline vm::stListNote<tType>* vm::vl_next( _vIn_ const vm::stListNote<tType>* const pNote )
// {{{
{
    _VERIFY_( vT("vl_next()"), pNote );

    return pNote->mpNext;
}
// }}} end of func vl_next(...)
// ================================================================================================ //

// }}} ! Comment info
// ================================================================================================ //


#endif // ! __VM_LIST_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
