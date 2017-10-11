#include <stdio.h>
int main()

{
    int dzialanie;
    
    
    int a,b;
    printf("Podaj a:");
    scanf("%d", &a);
    printf("Podaj b:");
    scanf("%d", &b);
    
    printf("Wybierz operacje: ");
    int operacja;

    scanf("%d", &operacja);
    double wynik, wynik2, wynik3, wynik4;
    switch(dzialanie)
    {
        case 0:
            
            break;
        case 1:
           
            wynik=a+b;
            printf("%lf", wynik);
            break;
        case 2:
            wynik2=a-b;
            printf("%lf", wynik2);
            break;
        case 3:
            wynik3=a*b;
            printf("%lf", wynik3);
            break;
        case 4:
            wynik4=a/b;
            printf("%lf", wynik4);
            break;
    }
    
    

    return 0;
}

/*
0. exit
 1. dodwannie
 2.odemij
 3.mnozenoe    ->switch + while/dowhile
 4.dzielenie
 twoj wybor:
 */
