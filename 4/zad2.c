#include <stdio.h>
int f(unsigned int x, unsigned int y)
{
    if(y==0) return x;
    if(x==0) return x;
    else return f(x-1,y) + f(x,y-1);
}
int main()
{
    
    return 0;
}
