#include <stdio.h>
int main()
{
int a; // tworzymy zmienna
int i;
scanf("%d", &a); //wpisujemy jakiej liczby dzielne maj� by� wprowadzone
for(i=2;i<=a;i++)
{ //szukamy warto�ci po kolei od 2, 
if ((a%i)==0)
{ //je�li reszta z dzielenia wynosi 0 wypisujemy t� liczb� ze spacj�
   if (i!=a)
   { //je�li to ostatni dzielnik wypisujemy go bez spacji
        printf("%d ", i);
   }
else
{
printf("%d", i);
}
}
}
return 0;
}
