#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  
  printf ("Wybierz rodzaj operacji:\nDodawanie - 1\nOdejmowanie - 2\nMnozenie - 3\nDzielenie - 4\nPierwiastkowanie - 5\nPotegowanie - 6\n:); 
  unsigned char operacja;
  scanf ("%d", operacja);
  
  printf ("Test successful.");
  getch ();
}
