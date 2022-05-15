#include <iostream>
#include "Pobranie.h"
#define maks 100
using std::cout; using std::cin;
int main() {
     int rozmiar;
    string tablica_znakow[maks];
    float tablica_liczb[maks];
    int tablica_wielkosci[2];                                                                                           //[0] ilosc liczb, [1] ilosc slow
    string *ptr_znaki = &tablica_znakow[0];
    float *ptr_liczby = &tablica_liczb[0];
    int *ptr_rozmiary = &tablica_wielkosci[0];
    cout << "Podaj laczna ilosc danych do posortowania (MAKS "<< maks << "): ";
    cin >> rozmiar;
    if (cin.fail()||rozmiar <= 0){                                                                                      //Sprawdzenie czy podano prawidlowa wartosc
        cout << "Podano niewlasciwe dane" << endl;
    }
    else {
        wpisanie_danych(rozmiar, ptr_liczby, ptr_znaki, ptr_rozmiary);                                                                 //Wpisywanie i analizowanie danych
    }
    for (int n = 0; n < tablica_wielkosci[1]; n++){
        cout << tablica_znakow[n] << "\t";
    }
    cout << "\n";
    for (int  n = 0; n < tablica_wielkosci[0]; n++){
        cout << tablica_liczb[n] << "\t";
    }
    return 0;
}