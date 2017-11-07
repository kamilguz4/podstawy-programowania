#include <stdio.h>
int f(int x)
{
    int i=0;
    int ile_cyfr=0;
    for(i=0;i<x;i++)
    {
        if(i%3==0)
            ile_cyfr++;
    }

    return ile_cyfr;
}
