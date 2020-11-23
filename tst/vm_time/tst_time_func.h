
#ifndef  __TST_TIME_FUNC_H__
#define  __TST_TIME_FUNC_H__

#include <math.h>

inline int frequency_of_primes (int n) 
{
    int i,j;
    int freq=n-1;

    for (i=2; i<=n; ++i) 
        for (j=sqrt(i);j>1;--j) if (i%j==0) 
        {--freq; break;}

    return freq;
}

#endif // ! __TST_TIME_FUNC_H__
