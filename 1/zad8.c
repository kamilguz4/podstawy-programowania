#include <stdio.h>
int main()
{
    double a;
    double b;
    double c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double obj=1.0*(a*b*c);
    
    printf("%lf", obj);
    
    
    return 0;
}
