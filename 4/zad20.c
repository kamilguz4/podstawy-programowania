#include <stdio.h>
int f(unsigned int x, unsigned int y)
{
    if(y==x) return x;
    if(x>y) return 2*f(x/y, y);
    else return 2*f(x,y/x);
}
int main()
{
    
    return 0;
}
