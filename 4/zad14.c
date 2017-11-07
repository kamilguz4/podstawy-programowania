#include <stdio.h>
int main()
{
    double a=5.28;
    double b=7.38;
    int wart = (int)b;
    double przeciw=b-wart;
    int wart1 = (int)a; //rzutowanie
    double przeciw1=a-wart1;
    if(przeciw==przeciw1)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
}
