#include <stdio.h>
int main()

{
    int choice;
    
    do
    {
	
    printf("\n0. Wyjscie\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n");
	printf("Twoj wybor: ");
	scanf("%d", &choice);
	int a,b;
    int wynik;
    switch(choice)
        {
        case 0:
            break;
        case 1:
            scanf("%d %d" ,&a,&b);
			wynik=a+b;
            break;
        case 2:
            scanf("%d %d" ,&a,&b);
			wynik=a-b;
            break;
        case 3:
            scanf("%d %d" ,&a,&b);
			wynik=a*b;
            break;
        case 4:
            scanf("%d %d" ,&a,&b);
			wynik=a/b;
            break;
        }
    
    printf("Wynik = %d", wynik);
   }
  while(choice !=0);
}


