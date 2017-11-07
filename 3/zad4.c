#include <stdio.h>
#include <math.h>


void kwadrat(int n)
{
    int i;
    if(i<n)
    {
    
        for(i=1;i<n;i=i+2)
        {
                        int kwadr=i*i;
            printf("%d\n", kwadr);
    
        }
    
    
    }
}
int main()

{
    
    int n;
    scanf("%d", &n);
    printf("Kwadraty liczb nieparzystych to: \n");

    kwadrat(n);
    
    return 0;
}
