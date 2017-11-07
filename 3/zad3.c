#include <stdio.h>


int suma(int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
        sum+=i;
        }
    }
    return sum;
}



int main()
{
    printf("%d\n", suma(7) );

    return 0;
}
