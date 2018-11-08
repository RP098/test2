#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    unsigned char operacja;

    printf ("Wybierz rodzaj operacji:\n1 - Dodawanie\n2 - Odejmowanie\n3 - Mnozenie\n4 - Dzielenie\n5 - Pierwiastkowanie\n6 - Potegowanie\n:");
    scanf ("%d", &operacja);

    float a, b, wynik;
    printf ("Podaj pierwsza liczbe: ");
    scanf ("%f", &a);
    printf ("Podaj druga liczbe: ");
    scanf ("%f", &b);

    switch(operacja)
    {
        case 1:
            wynik = a + b;
            break;
        case 2:
            wynik = a - b;
            break;
        case 3:
            wynik = a * b;
            break;
        case 4:
            wynik = a / b;
            break;
    }
    printf ("\nWynik: %f", wynik);
    getch ();
    return 0;
}
