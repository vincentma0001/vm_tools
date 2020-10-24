// ================================================================================================ //
// ==                                                                                            == //
// ==                                       CParser.h.inl                                        == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-08 21:48:08                                               == //
// ==   Modify Time          : 2020-10-08 22:31:07                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CPARSER_H_INL__
#define  __CPARSER_H_INL__

// ================================================================================================ //
// [ CPattern ] {{{

// ================================================================================================ //
// ==  Class CPattern Construct && Destruct realization                                          == //
// ================================================================================================ //
// [ Class CPattern Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CPattern::CPattern()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CPattern::CPattern( const tchar* const cpFlg, const size_t csztFlgLen,
                               const tchar* const cpRpl, const size_t csztRplLen  )
                             : mpFlg(cpFlg), msztFlgLen(csztFlgLen),
                               mpRpl(cpRpl), msztRplLen(csztRplLen),
                               mpPattern(nullptr)
// {{{
{
}
// }}} End of func CPattern::CPattern()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPattern::CPattern()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CPattern::CPattern( const tchar* const cpFlg, const tchar* const cpRpl )
                             : mpFlg(cpFlg), msztFlgLen(vStrlen(cpFlg),
                               mpRpl(cpRpl), msztRplLen(vStrlen(cpRpl)),
                               mpPattern(nullptr)
// {{{
{
}
// }}} End of func CPattern::CPattern()
// ================================================================================================ //
//
// ================================================================================================ //
// ==  Methord : virtual CPattern::CPattern()                                                    == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CPattern::~CPattern(  )
// {{{
{
    mpFlg       = nullptr;
    msztFlgLen  = 0;
    mpRpl       = nullptr;
    msztRplLen  = 0;
    mpPattern   = nullptr;
}
// }}} End of func CPattern::~CPattern()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CPattern::CPattern()                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CPattern::CPattern( const vm::CPattern &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CPattern::CPattern()
// ================================================================================================ //

// }}} ![ Class CPattern Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CPattern operator realization                                                       == //
// ================================================================================================ //
// [ Class CPattern operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CPattern::operator = ()                                                         == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CPattern&        - [O] this object
inline vm::CPattern& vm::CPattern::operator = ( const vm::CPattern &obj )
// {{{
{
    return *this;
}
// }}} End of func CPattern::operator=()
// ================================================================================================ //

// }}} ![ Class CPattern operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CPattern Functional realization                                                     == //
// ================================================================================================ //
// [ Class CPattern Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CPattern::GetLast(...)                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Get last CPattern in pattern
// ==  Return  : CPattern*&   - [O] the last CPattern pointer
// ==  Params  : 
inline vm::CPattern*& vm::CPattern::GetLast(  )
// {{{
{
    if (mpPattern == nullptr)
        return mpPattern;

    return mpPattern->GetLast();
}
// }}} end of func CPattern::GetLast(...)
// ================================================================================================ //

// }}} ![ Class CPattern Functional realization ]
// ================================================================================================ //

// }}} ! CPattern
// ================================================================================================ //

// ================================================================================================ //
// [ CParser ] {{{

// ================================================================================================ //
// ==  Class CParser Construct && Destruct realization                                           == //
// ================================================================================================ //
// [ Class CParser Construct && Destruct realization ] {{{

// ================================================================================================ //
// ==  Methord : CParser::CParser()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CParser::CParser( const tchar cszSpecifier, const tchar* const cpFmt, const size_t csztFmtLen)
                           : mszSpecifier(cszSpecifier), mpPatterns(nullptr),
                             mpFmt(const_cast<tchar*>(mpFmt)), msztFmtLen(csztFmtLen) 
// {{{
{
}
// }}} End of func CParser::CParser()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CParser::CParser()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Construct define
inline vm::CParser::CParser( const tchar cszSpecifier, const tchar* const cpFmt )
                           : mszSpecifier(cszSpecifier), mpPatterns(nullptr),
                             mpFmt(const_cast<tchar*>(mpFmt)), msztFmtLen(vStrlen(cpFmt))
// {{{
{
}
// }}} End of func CParser::CParser()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : virtual CParser::CParser()                                                      == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Destruct define
inline vm::CParser::~CParser(  )
// {{{
{
}
// }}} End of func CParser::~CParser()
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CParser::CParser()                                                              == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Copy construct define
inline vm::CParser::CParser( const vm::CParser &obj )
// {{{
{
    *this = obj;
}
// }}} End of func CParser::CParser()
// ================================================================================================ //

// }}} ![ Class CParser Construct && Destruct realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CParser operator realization                                                        == //
// ================================================================================================ //
// [ Class CParser operator realization ] {{{

// ================================================================================================ //
// ==  Methord : CParser::operator = ()                                                          == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Assignment operation
// ==  Return  : CParser&         - [O] this object
inline vm::CParser& vm::CParser::operator = ( const vm::CParser &obj )
// {{{
{
    return *this;
}
// }}} End of func CParser::operator=()
// ================================================================================================ //

// }}} ![ Class CParser operator realization ]
// ================================================================================================ //


// ================================================================================================ //
// ==  Class CParser Functional realization                                                      == //
// ================================================================================================ //
// [ Class CParser Functional realization ] {{{

// ================================================================================================ //
// ==  Methord : CParser::Regist(...)                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Regis a CPattern object
// ==  Return  : void             - [O] Nothing for return
// ==  Params  : oFlag            - [I] CPattern object
inline void vm::CParser::Regist( vm::CPattern& oFlag )
// {{{
{
    if (mpPatterns == nullptr)
    {
        mpPatterns = &oFlag; 
        return;
    }; // End of if(...)
    
    vm::CPattern*& lpFlag = mpPatterns->GetLast();
    lpFlag = &oFlag
}
// }}} end of func CParser::Regist(...)
// ================================================================================================ //

// ================================================================================================ //
// ==  Methord : CParser::Parse(...)                                                             == //
// == ------------------------------------------------------------------------------------------ == //
// ==  Brief   : Parse format string
// ==  Return  : tchar*           - [O] Address - for formated string 
// ==  Params  : pOutBuf          - [O] Output buffer for formated string
// ==            csztOutBufLen    - [I] Output buffer's size
inline tchar* vm::CParser::Parse( tchar* const pOutBuf, const size_t csztOutBufLen )
// {{{
{
    // 准备解析数据
    vm::CStrPtr loFmt(mpFmt, msztFmtLen);
    size_t lsztFmtOffSet = 0;
    tchar* lpFmtEnd      = mpFmt + msztFmtLen;

    vm::CStrPtr loOutBuf(pOutBuf, csztOutBufLen);
    size_t lsztOutBufOffset = 0;

    // 查找第一个标识符，若查找不到则返回。
    tchar* lpPos = loFmt.Find(mszSpecifier);
    if (lpPos == nullptr) 
        return nullptr;

    // 将标识符到源数据开始位置的数据复制到目标数据中
    size_t lsztCount        = (lpPos - mpFmt);
    size_t lsztFirstCopied  = loOutBuf.CopyFm(mpFmt, lsztCount, 0);
    lsztOutBufOffset       += lsztFirstCopied;
    lsztFmtOffSet          += lsztFirstCopied;

    // 循环对每一个Pattern进行对比
    while (lpPos != nullptr)
    {
        // 依次检测Pattern标识
        CPattern* lpPattern = mpPatterns;
        while (lpPattern != nullptr)
        {
            // 若当前Pattern与标识符不相同，将转到下一个Pattern进行检测
            if (!loFmt.Cmp(lpPattern->mpFlg, lpPattern->msztFlgLen, lsztFmtOffSet))
            {
                lpPattern = lpPattern->mpPattern;
                continue;
            } // End of if ( !loFmt...

            // 对Pattern代表的字符串进行替换 
            size_t lsztCopied    = loOutBuf.CopyFm(lpPattern->mpRpl, lpPattern->msztRplLen, lsztOutBufOffset);
            lsztFmtOffSet       += lpPattern->msztFlgLen;
            lsztOutBufOffset    += lsztCopied;
            lpPattern            = lpPattern->mpPattern;
            break;
        } // End of while ( lpPattern ...

        // 查找下一个标识符所在的位置
        tchar* lpNextPos = loFmt.Find(lsztFmtOffSet, mszSpecifier);
        if (lpNextPos != lpPos)
        {
            // 将当前标识符与下一个标识符中的数据复制到目标数据中
            size_t lsztCount = 0;
            if (lpNextPos == nullptr)
            {
                // 当前标识符后以不存在标识符，将当前标识符到源字符串结尾的数据复制到目标字符串中。
                lsztCount = lpFmtEnd - (mpFmt + lsztFmtOffSet);
            }
            else
            {
                // 将当前标识符与下一个标识符中的数据复制到目标数据中
                lsztCount = lpNextPos - (mpFmt + lsztFmtOffSet);
            }
            size_t lsztCopied   = loOutBuf.CopyFm(loFmt[ lsztFmtOffSet ], lsztCount, lsztOutBufOffset);
            lsztOutBufOffset   += lsztCopied;
            lsztFmtOffSet      += lsztCount;
            lpPos               = lpNextPos;
        }
        else
        {
            // 当前标识符的后面不存在可解析的数据
            size_t lsztCopied   = loOutBuf.CopyFm(loFmt[ lsztFmtOffSet ], sizeof(mszSpecifier), lsztOutBufOffset);
            lsztFmtOffSet      += lsztCopied;
            lsztOutBufOffset   += lsztCopied;
            lpPos               = lpNextPos;
        } // End of if ( lpNextPos ...

    } // End of while （ ... 

    return pOutBuf;

}
// }}} end of func CParser::Parse(...)
// ================================================================================================ //

// }}} ![ Class CParser Functional realization ]
// ================================================================================================ //

// }}} ! CParser
// ================================================================================================ //

#endif // ! __CPARSER_H_INL__
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
