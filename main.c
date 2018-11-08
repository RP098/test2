#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  unsigned char operacja;
  
  printf ("Wybierz rodzaj operacji:\nDodawanie - 1\nOdejmowanie - 2\nMnozenie - 3\nDzielenie - 4\nPierwiastkowanie - 5\nPotegowanie - 6\n:); 
  scanf ("%d", operacja);
  
  float a, b, wynik;        
  printf ("Podaj dwie liczby: ");
  scanf ("%f%f", &a, &b);
  switch(operacja)
          {
            case 1:
              wynik = a + b;
              break;
            case 2:
              wynik = a - b;
              break;
          }
  printf ("\nWynik: %f", wynik);
  getch ();
  return 0;
}
