// ================================================================================================ //
// ==                                                                                            == //
// ==                                      CWinErr.hpp.inl                                       == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-05 19:06:13                                               == //
// ==   Modify Time          : 2020-10-05 19:45:32                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CWINERR_HPP_INL__
#define  __CWINERR_HPP_INL__


// ================================================================================================ //
// ==  Class CWinErr<tszBufSize> Construct && Destruct realization                               == //
// ================================================================================================ //
// [ Class CWinErr<tszBufSize> Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinErr<tszBufSize>::CWinErr()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
template< size_t tszBufSize >
inline vm::CWinErr<tszBufSize>::CWinErr(  )
    : vm::CErrPtr( ::GetLastError(), mBuf, sizeof(mBuf) ),mBuf{0x00}
// {{{
{
}
// }}} End of func CWinErr<tszBufSize>::CWinErr<tszBufSize>()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinErr<tszBufSize>::CWinErr(...)                                               == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : # TODO : Add function brief #
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : cllErrCode       - [I] Error code
template< size_t tszBufSize >
inline vm::CWinErr<tszBufSize>::CWinErr( const long long cllErrCode )
    : vm::CErrPtr( cllErrCode, mBuf, sizeof(mBuf) ),mBuf{0x00}
// {{{
{
}
// }}} end of func CWinErr<tszBufSize>::CWinErr(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CWinErr<tszBufSize>::CWinErr()                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
template< size_t tszBufSize >
inline vm::CWinErr<tszBufSize>::~CWinErr(  )
// {{{
{
}
// }}} End of func CWinErr<tszBufSize>::~CWinErr<tszBufSize>()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CWinErr<tszBufSize>::CWinErr()                                                  == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
template< size_t tszBufSize >
inline vm::CWinErr<tszBufSize>::CWinErr( const vm::CWinErr<tszBufSize> &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CWinErr<tszBufSize>::~CWinErr<tszBufSize>()
// ================================================================================================ //

// }}} ![ Class CWinErr<tszBufSize> Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinErr<tszBufSize> operator realization                                            == //
// ================================================================================================ //
// [ Class CWinErr<tszBufSize> operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinErr<tszBufSize>::operator = ()                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CWinErr<tszBufSize>& - [O] this object
template< size_t tszBufSize >
inline vm::CWinErr<tszBufSize>& vm::CWinErr<tszBufSize>::operator = ( const vm::CWinErr<tszBufSize> &obj )
// {{{
{
    mllErrCode = obj.mllErrCode;
    vm::v_memcpy(mpBuf, msztBufSize, obj.mpBuf, obj.msztBufSize);
    return *this;
}
// }}} End of func CWinErr::~CWinErr()
// ================================================================================================ //

// }}} ![ Class CWinErr<tszBufSize> operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CWinErr<tszBufSize> Functional realization                                          == //
// ================================================================================================ //
// [ Class CWinErr<tszBufSize> Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CWinErr<tszBufSize>::GetErrStr(...)                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get error string
// ==  Return  : tchar*           - [O] Error message
// ==  Params  : pBuf             - [O] Error message buffer address
// ==            tszBufSize      - [I] Error message buffer size
// ==            sztStrLen        - [O] Error message length
template< size_t tszBufSize >
inline tchar* vm::CWinErr<tszBufSize>::GetErrStr( tchar* const pBuf, const size_t tszBufSize, size_t& sztStrLen )
// {{{
{
    try
    {
        /////////////////////////////////////////////////////////////////////////////////////////
        //
        // FormateMessage 说明
        //      原形定义： DWORD WINAPI FormatMessage( 
        //                  __in DWORD dwFlags,      // 格式化选项，对lpSource参数值有指导作用。dwFlags
        //                                              的低位值指定了函数如何处理输出缓冲区处理行转换，
        //                                              也可以指定格式化输出字符串输出行的最大宽度。
        //                  __in LPCVOID lpSource,   // 这个值是消息表资源来自哪里，这个值依靠dwFlags,
        //                                              详细请看FORMAT_MESSAGE_FROM_HMODULE和FORMAT_MESSAGE_FROM_STRING，
        //                                              如果这两个标示符都没设置，那么lpSource将会被忽略。
        //                  __in DWORD dwMessageId,  // 所需格式化消息的标识符。当dwFlags设置了FORMAT_MESSAGE_FROM_STRING，
        //                                              这个参数将会被忽略。
        //                  __in DWORD dwLanguageId, // 格式化消息语言标识符。
        //                  __out LPTSTR lpBuffer,   // 一个缓冲区指针来接受格式化后的消息。当dwFlags包括了
        //                                              FORMAT_MESSAGE_ALLOCATE_BUFFER标志符，这个函数将会
        //                                              使用LocalAlloc函数分配一块缓冲区，lpBuffer需要接受
        //                                              一个地址来使用这个缓冲区。（这里要注意传参一定要传地址）。
        //                  __in DWORD nSize,        // 如果FORMAT_MESSAGE_ALLOCATE_BUFFER没有设置，那么这个参数
        //                                              指定了输出缓冲区的消息，以TCHARs为单位。如果FORMAT_MESSAGE_ALLOCATE_BUFFER设置了，
        //                                              这个参数设置以TCHARs为单位的输出缓冲区的最小值。这个输出缓冲区不能大于64KB。
        //                  __in va_list* Arguments
        //              );
        /////////////////////////////////////////////////////////////////////////////////////////
        //      参数说明：
        //***************************************************************************************
        //              dwFlags :   [in] Specifies aspects of the formatting process and how to interpret the lpSource parameter. The low-order 
        //                          byte of dwFlags specifies how the function handles line breaks in the output buffer. The low-order byte can 
        //                          also specify the maximum width of a formatted output line.This parameter can be a combination of the following 
        //                          bit flags.
        //---------------------------------------------------------------------------------------
        //                          FORMAT_MESSAGE_ALLOCATE_BUFFER             Specifies that the lpBuffer parameter is a pointer to a 
        //                                                                  PVOID pointer, and that the nSize parameter specifies the 
        //                                                                  minimum number of bytes (ANSI version) or characters 
        //                                                                  (Unicode version) to allocate for an output message buffer. 
        //                                                                  The function allocates a buffer large enough to hold the 
        //                                                                  formatted message, and places a pointer to the allocated 
        //                                                                  buffer at the address specified by lpBuffer. The caller 
        //                                                                  should use the LocalFree function to free the buffer when 
        //                                                                  it is no longer needed.
        //                          FORMAT_MESSAGE_IGNORE_INSERTS               Specifies that insert sequences in the message definition 
        //                                                                  are to be ignored and passed through to the output buffer 
        //                                                                  unchanged. This flag is useful for fetching a message for 
        //                                                                  later formatting. If this flag is set, the Arguments parameter 
        //                                                                  is ignored.
        //                          FORMAT_MESSAGE_FROM_STRING                  Specifies that lpSource is a pointer to a null-terminated message 
        //                                                                  definition. The message definition may contain insert sequences, 
        //                                                                  just as the message text in a message table resource may. Cannot 
        //                                                                  be used with FORMAT_MESSAGE_FROM_HMODULE or FORMAT_MESSAGE_FROM_SYSTEM.
        //                          FORMAT_MESSAGE_FROM_HMODULE                 Specifies that lpSource is a module handle containing the 
        //                                                                  message-table resources to search. If this lpSource handle is NULL, 
        //                                                                  the current process's application image file will be searched. Cannot 
        //                                                                  be used with FORMAT_MESSAGE_FROM_STRING.
        //                          FORMAT_MESSAGE_FROM_SYSTEM                  Specifies that the function should search the system message-table 
        //                                                                  resources for the requested message. If this flag is specified 
        //                                                                  with FORMAT_MESSAGE_FROM_HMODULE, the function searches the system 
        //                                                                  message table if the message is not found in the module specified 
        //                                                                  by lpSource. Cannot be used with FORMAT_MESSAGE_FROM_STRING.
        //                                                                      If this flag is specified, an application can pass the result 
        //                                                                  of the GetLastError function to retrieve the message text for a 
        //                                                                  system-defined error.Not all Windows Embedded CE–based devices 
        //                                                                  will contain the system message-table resources. This is a selectable 
        //                                                                  part of the Windows Embedded CE operating system and is often removed 
        //                                                                  to conserve space.
        //                          FORMAT_MESSAGE_ARGUMENT_ARRAY               Specifies that the Arguments parameter is not a va_list structure, 
        //                                                                  but instead is just a pointer to an array of 32-bit values that represent 
        //                                                                  the arguments.
        //
        //                              the low-order byte of dwFlags can specify the maximum width of a formatted output line. Use the 
        //                          FORMAT_MESSAGE_MAX_WIDTH_MASK constant and bitwise Boolean operations to set and retrieve this maximum width value.
        //                          The following list shows how FormatMessage interprets the value of the low-order byte.
        //
        //                          0                                           There are no output line width restrictions. The function stores line 
        //                                                                  breaks that are in the message definition text into the output buffer.
        //                          A nonzero value other than 
        //                          FORMAT_MESSAGE_MAX_WIDTH_MASK               The nonzero value is the maximum number of characters in an output line. 
        //                                                                  The function ignores regular line breaks in the message definition text. 
        //                                                                  The function never splits a string delimited by white space across a line 
        //                                                                  break. The function stores hard-coded line breaks in the message definition 
        //                                                                  text into the output buffer. Hard-coded line breaks are coded with the %n 
        //                                                                  escape sequence.
        //                          FORMAT_MESSAGE_MAX_WIDTH_MASK               The function ignores regular line breaks in the message definition text. 
        //                                                                  The function stores hard-coded line breaks in the message definition text 
        //                                                                  into the output buffer. The function generates no new line breaks.
        //***************************************************************************************
        //              lpSource : [in] Pointer to the location of the message definition. The type of this parameter depends on the settings in the 
        //                         dwFlags parameter.
        //---------------------------------------------------------------------------------------
        //                          FORMAT_MESSAGE_FROM_HMODULE                 The lpSource parameter is an hModule of the module that contains the 
        //                                                                  message table to search.
        //                          FORMAT_MESSAGE_FROM_STRING                  The lpSource parameter is an LPTSTR that points to unformatted message 
        //                                                                  text. It will be scanned for inserts and formatted accordingly.
        //***************************************************************************************
        //              dwMessageId : [in] Specifies the 32-bit message identifier for the requested message. This parameter is ignored if dwFlags 
        //                            includes FORMAT_MESSAGE_FROM_STRING.
        //***************************************************************************************
        //              dwLanguageId : [in] Not supported.
        //***************************************************************************************
        //              lpBuffer : [out] Pointer to a buffer for the formatted (and null-terminated) message. If dwFlags includes 
        //                         FORMAT_MESSAGE_ALLOCATE_BUFFER, the function allocates a buffer using the LocalAlloc function, and places 
        //                         the pointer to the buffer at the address specified in lpBuffer.
        //***************************************************************************************
        //              nSize : [in] If the FORMAT_MESSAGE_ALLOCATE_BUFFER flag is not set, this parameter specifies the maximum number of characters 
        //                      that can be stored in the output buffer. If FORMAT_MESSAGE_ALLOCATE_BUFFER is set, this parameter specifies the minimum 
        //                      number of bytes or characters to allocate for an output buffer.
        //***************************************************************************************
        //              Arguments :     [in] Pointer to an array of 32-bit values that are used as insert values in the formatted message. A %1 in the format 
        //                          string indicates the first value in the Arguments array; a %2 indicates the second argument; and so on.
        //                              The interpretation of each 32-bit value depends on the formatting information associated with the insert in the 
        //                          message definition. The default is to treat each value as a pointer to a null-terminated string.
        //                              By default, the Arguments parameter is of type va_list*, which is a language- and implementation-specific data 
        //                          type for describing a variable number of arguments. If you do not have a pointer of type va_list*, then specify the 
        //                          FORMAT_MESSAGE_ARGUMENT_ARRAY flag and pass a pointer to an array of 32-bit values; those values are input to the 
        //                          message formatted as the insert values. Each insert must have a corresponding element in the array.
        /////////////////////////////////////////////////////////////////////////////////////////
        ::FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER |
            FORMAT_MESSAGE_FROM_SYSTEM |
            FORMAT_MESSAGE_IGNORE_INSERTS,
            NULL,
            mulErrCode,
            MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), // Default language
            (LPSTR)&pBuf,
            (DWORD)csztBufSzie,
            NULL);

        // 将获得的信息
        sztStrLen = vStrlen(pBuf);

        // 去掉字符串的空格类字符
        vm::v_strtrim_right(pBufAddr, sztStrLen);

        return pBuf;
    } // End of __try
    catch (...)
    {
        // 获取错误代码失败的情况下返回空字符
        return pBuf;
    } // End of __except ( EXCEPTION_EXECUTE_HANDLER )
}
// }}} end of func CErrPtr::GetErrStr(...)
// ================================================================================================ //

// }}} ![ Class CWinErr<tszBufSize> Functional realization ]
// ================================================================================================ //


#endif // ! __CWINERR_HPP_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
