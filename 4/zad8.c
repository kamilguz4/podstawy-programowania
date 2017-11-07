#include <stdio.h>

long long int silnia(int n)
{
    if(n==0)
        
        return 1;
    
    else
        return silnia(n-1)*n;
    
    
}
int main()

{
    
    
    printf("%lld", silnia(5));
    
    return 0;
}
