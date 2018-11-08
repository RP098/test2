include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
  unsigned char operacja;
  
  printf ("Wybierz rodzaj operacji:\nDodawanie - 1\nOdejmowanie - 2\nMnozenie - 3\nDzielenie - 4\nPierwiastkowanie - 5\nPotegowanie - 6\n:"); 
  scanf ("%d",&operacja);
  
  float a, b, wynik;        
  switch(operacja)
          {
            case 1:
             printf("Podaj dwie liczby");
             scanf ("%f%f", &a, &b);
              wynik = a + b;
              break;
            case 2:
             printf("Podaj dwie liczby");
             scanf ("%f%f", &a, &b);
              wynik = a - b;
              break;
            case 3 :
             printf("Podaj dwie liczby");
             scanf ("%f%f", &a, &b);
            wynik= a*b ;
            break;
            case 4:
             printf("Podaj dwie liczby");
             scanf ("%f%f", &a, &b);
            wynik= a/b;
            break;
            case 5:
            printf("podaj liczbe do spierwiastkoawani %f",a);
            scanf("%f",&a);
                 printf("podaj stopien pierwiastka %f",b);
            scanf("%f",&b);
            wynik= pow(a,(1/b));
            break;
            case 6:
            	printf("podaj podstawe potegi");
             scanf("%f",&a);
             printf("podaj wykladnik");
             scanf("%f",&b);
             wynik=pow(a,b);
             break;
          }
  printf ("\nWynik: %f", wynik);
  getch ();
  return 0;
}
