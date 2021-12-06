/*
Biblioteka posiadajaca funkcje, wyswietlajace
podane frazy czy zmienne.

*/

#ifndef WHATEVER_H_INCLUDED
#define WHATEVER_H_INCLUDED
void wyswietlCal(int wartosc) {
    printf("%d\n", wartosc);
}

void wyswietlZmP(float wartosc) {
    printf("%g\n", wartosc);
}

void wyswietlOsm(int wartosc) {
    printf("%o\n", wartosc);
}

void wyswietlSzes(int wartosc) {
    printf("%x\n", wartosc);
}

void wyswietlZn(char wartosc) {
    printf("%c\n", wartosc);
}

void wyswietlCiZn(char * wartosc) {
    printf("%s\n", wartosc);
}

void wyswietlTabCal(int * tablica)
{
    const int rozmiarTablicy = sizeof(tablica) / 2;

    for(int indeks = 0; indeks < rozmiarTablicy; indeks++) {
        const int elementTablicy = tablica[indeks];
        printf("%d ", elementTablicy);
    }
}

#endif
