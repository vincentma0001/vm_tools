// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CWinKernal.h.inl                                      == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 0.0.0.0                                                           == //
// ==   Create Time          : 2020-10-02 10:09:49                                               == //
// ==   Modify Time          : 2020-10-04 19:09:33                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef   __CWINKERNAL_H_INL__
#define   __CWINKERNAL_H_INL__

// ================================================================================================ //
// ==  Class CWinKernal Construct && Destruct realization                                        == //
// ================================================================================================ //
// [ Class CWinKernal Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinKernal::CWinKernal()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline CWinKernal::CWinKernal(  )
    :mhHandle(INVALID_HANDLE_VALUE),
     mulErrCode(0)
// {{{
{
    vMemZero(mstSecurityAttributes);
    mstSecurityAttributes.nLength = sizeof(mstSecurityAttributes);
    mstSecurityAttributes.bInheritHandle = false;
    mstSecurityAttributes.lpSecurityDescriptor = nullptr;
}
// }}} End of func CWinKernal::CWinKernal()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CWinKernal::CWinKernal()                                                == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline CWinKernal::~CWinKernal(  )
// {{{
{
    if ( CheckHandle()==emRet::vSucceed )
        ::CloseHandle(mhHandle);
}
// }}} End of func CWinKernal::~CWinKernal()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinKernal::CWinKernal()                                                        == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline CWinKernal::CWinKernal( const CWinKernal &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CWinKernal::~CWinKernal()
// ================================================================================================ //

// }}} ![ Class CWinKernal Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinKernal operator realization                                                     == //
// ================================================================================================ //
// [ Class CWinKernal operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinKernal::operator = ()                                                       == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CWinKernal&      - [O] this object
inline CWinKernal& CWinKernal::operator = ( const CWinKernal &obj )
// {{{
{
    return *this;
}
// }}} End of func CWinKernal::~CWinKernal()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinKernal::operator * (...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : class operator * operation
// ==  Return  : void*            - [O] return object handle
// ==  Params  : 
inline void* CWinKernal::operator * (  )
// {{{
{
    return mhHandle;
}
// }}} end of func CWinKernal::operator * (...)
// ================================================================================================ //

// }}} ![ Class CWinKernal operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinKernal Functional realization                                                   == //
// ================================================================================================ //
// [ Class CWinKernal Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinKernal::CheckHandle(...)                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Check windows handle
// ==  Return  : long             - [O] emRet::vSucceed    for sucess
// ==                                   emRet::vIsInvalied for the handle is invalied
// ==                                   emRet::vIsExisted  for the handle has existed
// ==                                   emRet::vlError     for has error
inline long CWinKernal::CheckHandle(  )
// {{{
{
    if ( mhHandle == INVALID_HANDLE_VALUE )
        return emRet::vIsInvalied;

    if ( mhHandle != 0 )
        return emRet::vSucceed;

    mulErrCode = ::GetLastError();

    if ( mulErrCode == ERROR_ALREADY_EXISTS )
        return emRet::vIsExisted;

    return emRet::vlError; 
}
// }}} end of func CWinKernal::CheckHandle(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinKernal::SetHandleInfo(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Set windows handle info
// ==  Return  : unsigned long    - [O] 0     for sucess
// ==                                   not 0 for error code
// ==  Params  : dwMask           - [X] # TODO : Add comment for dwMask #
// ==            dwFlags          - [X] # TODO : Add comment for dwFlags #
inline unsigned long CWinKernal::SetHandleInfo( DWORD dwMask, DWORD dwFlags )
// {{{
{
    // Reset error code
    mulErrCode = 0;

    // Set handle info
    BOOL lbRet = ::SetHandleInformation( mhHandle, dwMask, dwFlags );
    if ( lbRet == TRUE )
        return mulErrCode;

    // Set handle operation has error launched, get error info
    mulErrCode = ::GetLastError();
    return mulErrCode;
}
// }}} end of func CWinKernal::SetHandleInfo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinKernal::GetHandleInfo(...)                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get windows handle info
// ==  Return  : unsigned long    - [O] 0     for sucess
// ==                                   not 0 for error code
inline unsigned long CWinKernal::GetHandleInfo(  )  
// {{{
{
    // Rest error code;
    mulErrCode = 0;

    // Get handle info
    DWORD ldwFlags = 0;
    BOOL lbRet = ::GetHandleInformation( mhHandle, &ldwFlags );
    if ( lbRet == TRUE )
        return mulErrCode;

    // Get handle operation has error launched, get error info
    mulErrCode = ::GetLastError();
    return mulErrCode;
}
// }}} end of func CWinKernal::GetHandleInfo(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinKernal::Duplicate(...)                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Create a new handle for current process, using for ipc
// ==  Return  : void             - [O] Nothing for return
// ==  Return  : long             - [O] emRet::vSucceed    for sucess
// ==                                   emRet::vIsInvalied for the handle is invalied
// ==                                   emRet::vIsExisted  for the handle has existed
// ==                                   emRet::vUnknown    for unknown error
// ==                                   emRet::vlError     for error code
// ==  Params  : hSrcProcHandle   - [X] # TODO : Add comment for hSrcProcHandle #
// ==            hSrcObjHandle    - [X] # TODO : Add comment for hSrcObjHandle #
// ==            dwDesiredAccess  - [X] # TODO : Add comment for dwDesiredAccess #
// ==            bInheritHandle   - [X] # TODO : Add comment for bInheritHandle #
// ==            dwOptions        - [X] # TODO : Add comment for dwOptions #
inline long CWinKernal::Duplicate( HANDLE hSrcProcHandle,
                                   HANDLE hSrcObjHandle,
                                   DWORD  dwDesiredAccess,
                                   BOOL   bInheritHandle,
                                   DWORD  dwOptions )
// {{{
{
    // Reset error code
    mulErrCode = 0;

    // Get current process
    HANDLE lhCurrProc = ::GetCurrentProcess();
    long llRetForGetCurrProc = CheckHandle();
    if ( llRetForGetCurrProc != emRet::vSucceed )
        return llRetForGetCurrProc;

    // Create a new handle
    BOOL lbRet =  ::DuplicateHandle( hSrcProcHandle,
                                     hSrcObjHandle,
                                     lhCurrProc,
                                     &mhHandle,
                                     dwDesiredAccess,
                                     bInheritHandle,
                                     dwOptions );
    if ( lbRet == TRUE )
        return emRet::vSucceed;

    // Create handle failed, get error code
    mulErrCode = ::GetLastError();
    return emRet::vlError;
}
// }}} end of func CWinKernal::Duplicate(...)
// ================================================================================================ //

// ==  }}} ![ Class CWinKernal Functional realization ]
// ================================================================================================ //

#endif // __CWINKERNAL_H_INL__
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
