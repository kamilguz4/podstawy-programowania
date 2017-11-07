#include <stdio.h>

float pole(float a, float b)
{
    return (a*b)/2.0;
}
int main()

{
    float p=pole(2.5,4);
    printf("%.2f\n", p);
    return 0;
}
