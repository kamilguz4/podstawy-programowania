#include <stdio.h>

void dzielniki(int a)
{
    for(int i=1;i<=a;i++)
    {
        
        if (a % i ==0) printf("%d ", i);
    }
}
int main()

{
    
    int a;
    scanf("%d", &a);
    dzielniki(a);
    
    return 0;
}
