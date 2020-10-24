// ================================================================================================ //
// ==                                                                                            == //
// ==                                        CWinKernal.h                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-10-02 09:28:40                                               == //
// ==   Modify Time          : 2020-10-04 19:04:33                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef   __CWINKERNAL_H__
#define   __CWINKERNAL_H__

// ================================================================================================ //
// ==  Class CWinKernal : this class deal with windows handle                                    == //
// ------------------------------------------------------------------------------------------------ //
class CWinKernal
// {{{
{ 
// ------------------------------------------------------------------------------------------------ //
// Type  defines : {{{
public:
    // return value for this class
    enum emRet
    // {{{
    {
        vSucceed    = 0,
        vError      = vMaxsInt,
        vlError     = vMaxsLong,
        vulError    = vMaxuLong,

        vTimeout    = vMaxsInt-1,

        vIsInvalied = vMaxsInt-2,
        vIsExisted  = vMaxsInt-3
    };
    // }}} End of enum emRet
// }}} ! Type defines

// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct & Destruct define
    inline          CWinKernal();
    inline virtual ~CWinKernal();

private:
    // Copy construct define
    inline CWinKernal( const CWinKernal &obj );
    // Assignment operation
    inline CWinKernal& operator = ( const CWinKernal &obj );

public:
    // * operation
    inline void* operator * ();
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers  : {{{
protected:
    // windows handle
    HANDLE                mhHandle;
    // handle's security info
    SECURITY_ATTRIBUTES   mstSecurityAttributes;
    
public:
    // Error code
    unsigned long mulErrCode;
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods  : {{{
public:
    // Check windows handle
    inline long CheckHandle();

    // Set windows handle info
    inline unsigned long SetHandleInfo( DWORD dwMask, DWORD dwFlags );
    // Get Windows handle info
    inline unsigned long GetHandleInfo();

    // Create a new handle for current process, using for ipc
    inline long Duplicate( HANDLE hSrcProcHandle,
                           HANDLE hSrcObjHandle,
                           DWORD  dwDesiredAccess,
                           BOOL   bInheritHandle,
                           DWORD  dwOptions );

// }}} ! Methods

}; // }}} ! [ class CWinKernal ]
// ================================================================================================ //
// Class realization :
#include "CWinKernal.h.inl"
// ================================================================================================ //

#endif // __CWINKERNAL_H__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
