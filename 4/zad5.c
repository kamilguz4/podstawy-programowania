#include <stdio.h>

 
 
long int potega(long int podstawa, int wykladnik)
{
    int wynik = 1;
 int i;
    for (i = 0; i<wykladnik; i++)
       
		 wynik*=podstawa;
		
    return wynik;
}
 
int main()
{
    int a,b;
 
    printf("Wpisz podstawe: ");
    scanf("%d", &a);
    printf("Wpisz wykladnik: ");
   scanf("%d", &b);
 
    printf("%d",potega(a,b));
 
    
 
    return 0;
}
