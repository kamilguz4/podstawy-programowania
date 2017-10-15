#include <stdio.h>
int main()
{
int a; // tworzymy zmienna
int i;
scanf("%d", &a); //wpisujemy jakiej liczby dzielne maj¹ byæ wprowadzone
for(i=2;i<=a;i++)
{ //szukamy wartoœci po kolei od 2, 
if ((a%i)==0)
{ //jeœli reszta z dzielenia wynosi 0 wypisujemy t¹ liczbê ze spacj¹
   if (i!=a)
   { //jeœli to ostatni dzielnik wypisujemy go bez spacji
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
