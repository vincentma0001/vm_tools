
#include <vector>
#include <string>
#include <map>
#include <iostream>

#include "tst_test.h"

#include <vm_cfgs.h>
#include <vm_tools/vm_bits.h>

template< unsigned int uiLineLen, unsigned int uiSpliteLen >
void print_str( FILE* pHandle, char* szBuf, size_t tsztBufSize )
{
    char* lpPos = szBuf;
    unsigned int luiLineCount   = 1;
    unsigned int luiSpliteCount = 1;
    char  lszStrValue[uiLineLen] = {0x00};
    for( size_t i=1;(i<=tsztBufSize); i++, luiLineCount++, luiSpliteCount++ )
    {
        vm::CBit08 loBit(*lpPos);
        vm::CBitStr<vm::CBit08> loBitStr(loBit);
        fprintf( pHandle, "%s", loBitStr.toHeX02() );
        lszStrValue[luiLineCount-1]=*lpPos;
        lpPos++;

        if( luiSpliteCount>=uiSpliteLen )
        {
            if( luiLineCount<uiLineLen && i<tsztBufSize )
            { fputs( " |", pHandle ); }
            luiSpliteCount = 0;
        }
        if( luiLineCount>=uiLineLen )
        {
            fputs( " || ", pHandle );
            for( size_t i=0; i<uiLineLen; i++ )
            { 
                if( isprint( lszStrValue[i] ) )
                { fputc( lszStrValue[i], pHandle ); }
                else
                { fputc( '.', pHandle ); }
            }
            vMemZero( lszStrValue );
            fputc('\n',pHandle);
            luiLineCount = 0;
            luiSpliteCount = 0;
            continue;
        }

        fputc( ' ', pHandle );
    }

    int liLeftCount = tsztBufSize % uiLineLen;
    int liSpaceNum  = (uiLineLen-liLeftCount)*3;
    int liSpliteNun = (liSpaceNum/uiSpliteLen)*2;
    if( liLeftCount != 0 )
    {
        for(size_t i=0;i<(size_t)(liSpaceNum+liSpliteNun);i++)
        { fputc( ' ', pHandle ); }
        fputs( " || ", pHandle );
        for( size_t i=0; i<uiLineLen; i++ )
        { 
            if( isprint( lszStrValue[i] ) )
            { fputc( lszStrValue[i], pHandle ); }
            else
            { fputc( '.', pHandle ); }
        }
        vMemZero( lszStrValue );
        fputc('\n',pHandle);
    }
}

int main(int argc, char *argv[])
{
    std::cout << "This is a test!" << std::endl;

    //*
    char    lszBuf0[128] = { "abcdefghizklmnopqrstuvwxyz1234567890!abcdefghizklmnopqrstuvwxyz1234567890!abcdefghizklmnopqrstuvwxyz1234567890!" };
    print_str<48,8> ( stdout, lszBuf0, 48 );
    //print_str<8,8> ( stdout, lszBuf, 128 );
    //print_str<16,8>( stdout, lszBuf, 128 );
    //print_str<24,8>( stdout, lszBuf, 128 );
    //print_str<32,8>( stdout, lszBuf, 128 );
    //print_str<40,8>( stdout, lszBuf, 128 );
    //print_str<48,8>( stdout, lszBuf, 128 );
    //print_str<56,8>( stdout, lszBuf, 128 );
    //print_str<64,8>( stdout, lszBuf, 128 );
    //*/

    char    lszBuf[128] = { 0x00 };
    vPrintf( vT("Buf  Addr = %p\n"), lszBuf );
    print_str<32,8>( stdout, lszBuf, sizeof(lszBuf) );

    CA*      lpA = new( lszBuf ) CA;
    lpA->miA = 1;
    lpA->miA1 = 1;
    lpA->miB = vMaxsShort;
    lpA->miC = 3;
    lpA->miD = vMaxsInt;
    vPrintf( vT("CA   Addr = %p\n"), lpA );
    print_str<32,8>( stdout, lszBuf, sizeof(lszBuf) );

/*

    char    lszBuf2[128] = {0x00};
    vPrintf( vT("Buf2 Addr = %p\n"), lszBuf2 );
    print_str<64,8>( stdout, lszBuf2, sizeof(lszBuf2) );

    CA*      lpA2 = new( lszBuf2 ) CA;
    lpA2->miA = 1;
    lpA2->miA1 = 1;
    lpA2->miB = 2;
    lpA2->miC = 3;
    lpA2->miD = 4;
    vPrintf( vT("CA   Addr = %p\n"), lpA2 );
    print_str<64,8>( stdout, lszBuf2, sizeof(lszBuf2) );
//*/

/*
    CA lA;
    lA.toCode();

    std::vector<int>    lV;
    lV.push_back(19);
    lV.push_back(20);

    std::string lstr="abced";
    lstr.c_str();
    std::cout << lstr << std::endl;


    std::map<int, std::string> lmap;
    lmap.insert( std::pair<int, std::string>(10, "abcde"));

//*/
    return 0;
}
