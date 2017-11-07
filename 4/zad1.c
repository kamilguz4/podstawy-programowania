#include <stdio.h>
int funk(int n)
{
    int i=1;
    for(i=1;i*i<=n;i++);
    return i-1;
}
int main()
{
    printf("%d\n",funk(25) );
    return 0;
}
