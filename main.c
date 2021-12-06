#include <stdio.h>
#include <stdlib.h>
#include "wyswFun.h"

int main()
{
    int zmienna = 12;
    float zmienna2 = 4.2;
    char znak = 'g';
    char * ciagZnakow = "lalalala";
    int tablica [5] = {1, 2, 3, 4};

    wyswietlCal(zmienna);
    wyswietlZmP(zmienna2);

    wyswietlOsm(zmienna);
    wyswietlOsm(zmienna2);

    wyswietlSzes(zmienna);
    wyswietlSzes(zmienna2);

    wyswietlZn(znak);
    wyswietlCiZn(ciagZnakow);

    wyswietlTabCal(tablica);
    return 0;
}
