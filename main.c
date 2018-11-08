#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    unsigned char operacja;

    printf ("Wybierz rodzaj operacji:\n1 - Dodawanie\n2 - Odejmowanie\n3 - Mnozenie\n4 - Dzielenie\n5 - Pierwiastkowanie\n6 - Potegowanie\n:");
    scanf ("%d", &operacja);

    float a, b, wynik;

    if ((operacja > 0) && (operacja < 7))
    {
        printf ("Podaj dwie liczby: ");
        scanf ("%f%f", &a, &b);
    }
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
        case 5:
            wynik = pow (a, 1 / b);
            break;
        case 6:
            wynik = pow (a, b);
            break;
        default:
            printf ("Niepoprawnie wybrano operacje.")
     }
    getch ();
    return 0;
}
