// ================================================================================================ //
// ==                                                                                            == //
// ==                                      v_funcs_list.h                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-11-10 08:51                                                  == //
// ==   Modify Time          : 2020-11-10 08:51                                                  == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __V_FUNCS_LIST_H__
#define  __V_FUNCS_LIST_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <vm_cfgs.h>
// }}}
// ================================================================================================ //

// ================================================================================================ //
// using namespace vm {{{
namespace vm{

// ================================================================================================ //
// Typedefs  : {{{
// struct stListNote : This struct defined list note
template< typename tType >
struct stListNote
{
    // Data pointer
    tType*          mpData;

    // Prev note pointer
    stListNote*     mpPrev;
    // Next note pointer
    stListNote*     mpNext;
}; // End of def struct stListNote
// }}} ! Typedefs
// ================================================================================================ //

// ================================================================================================ //
// [ list funcs ] {{{

// Initialize a list note
template< typename tType >
inline stListNote<tType>* vl_init ( _vIn_ void* pNoteAddr = nullptr, _vIn_ void* pDataAddr = nullptr );
// Initialize a list note with tType pointer
template< typename tType >
inline stListNote<tType>* vl_init ( _vIn_ tType*              pData, _vIn_ void* pNoteAddr = nullptr                                  );
// Initialize a list note with tType object oData
template< typename tType >
inline stListNote<tType>* vl_init ( _vIn_ tType               oData, _vIn_ void* pNoteAddr = nullptr, _vIn_ void* pDataAddr = nullptr );
// Free a list note
template< typename tType >
inline stListNote<tType>* vl_free ( _vIn_ stListNote<tType>* lpNote, _vIn_ bool  bFreeData = false );
// Clean all note in list
template< typename tType >
inline void               vl_clean( _vIn_ stListNote<tType>*  pNote, _vIn_ bool  bFreeData = false );

// Find note in list by tType value pointer
template< typename tType >
inline stListNote<tType>* vl_find ( _vIn_ stListNote<tType>*  pNote, _vIn_ tType* pVal );
// Find note in list by tType value
template< typename tType >
inline stListNote<tType>* vl_find ( _vIn_ stListNote<tType>*  pNote, _vIn_ tType  oVal );

// Insert a child note to parent note
template< typename tType >
inline stListNote<tType>* vl_insert      ( _vIn_ stListNote<tType>* pParent, _vIn_ stListNote<tType>* pChild );
// Insert a child note to list end
template< typename tType >
inline stListNote<tType>* vl_insert_tail ( _vIn_ stListNote<tType>*   pNote, _vIn_ stListNote<tType>* pChild );
// Remove a note from list
template< typename tType >
inline stListNote<tType>* vl_remove      ( _vIn_ stListNote<tType>*   pNote, _vIn_ bool bFreeNote = false, _vIn_ bool bFreeData = false );

// Get list head note
template< typename tType >
inline stListNote<tType>* vl_head ( _vIn_ stListNote<tType>* pNote );
// Get list tail note
template< typename tType >
inline stListNote<tType>* vl_tail ( _vIn_ stListNote<tType>* pNote );

// Set note's data
template< typename tType >
inline void               vl_set  ( _vIn_ stListNote<tType>* pNote, _vIn_ const tType        oData );
// Set note's data
template< typename tType >
inline stListNote<tType>* vl_set  ( _vIn_ stListNote<tType>* pNote, _vIn_ const tType* const pData );

// Get note's data pointer
template< typename tType >
inline tType*             vl_data ( _vIn_ const stListNote<tType>* const pNote );
// Get note's prev pointer
template< typename tType >
inline stListNote<tType>* vl_prev ( _vIn_ const stListNote<tType>* const pNote );
// Get note's next pointer
template< typename tType >
inline stListNote<tType>* vl_next ( _vIn_ const stListNote<tType>* const pNote );

// }}} ! list funcs
// ================================================================================================ //

};
// }}} End of namespace vm
// ================================================================================================ //
// function realization :
#include "v_funcs_list.h.inl"
// ================================================================================================ //

#endif // ! __V_FUNCS_LIST_H__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
