/*#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta;
     printf("Podaj a: ");
     scanf("%f", &a);
 
     printf("Podaj b: ");
     scanf("%f", &b);
     
     printf("Podaj c: ");
     scanf("%f", &c);



}*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float b;
    float c;
    float delta;
    printf("Podaj a: ");
    scanf("%f", &a);
    
    printf("Podaj b: ");
    scanf("%f", &b);
    
    printf("Podaj c: ");
    scanf("%f", &c);
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                printf("Nieskończenie wiele rozwiazan\n");
            }
            else
            {
                float roz1=-c/b;
                printf("Rozwiazanie :%f", roz1);
            }
        }
    }
    else
    {
        delta=b*b-4*a*c;
        if(delta<0)
        {
            printf("Nie ma rozwiazan\n");
        }
        else
        {
            if(delta==0)
            {
                float roz2=-b/2*a;
                printf("Rozwiazanie :%f", roz2);
            }
            else
            {
                float roz3=(-b-sqrt(delta))/2*a;
                float roz4=(-b+sqrt(delta))/2*a;
                printf("Rozwiazanie x1:%f", roz3);
                printf("Rozwiazanie x2:%f", roz4);
            }
        }      
    }  
    
}
    
