#include <stdio.h>

int cos(int n)
{
    int i, suma=0;
    for(i=0;i<n;i++)
    {
    if(i%7==0)
        suma+=i;
    }
        return suma;
    
    
}
int main()

{
    
    
    printf("%d", cos(16));
    
    return 0;
}
