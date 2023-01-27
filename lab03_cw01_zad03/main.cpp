


#include <iostream>
using namespace std;

int main() {
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    int number; // deklaracja zmiennej

    cout << "wpisz liczbe "; // zapytanie
    cin >> number; //wczytanie zmiennej
    if (number % 2 == 0) { //porownanie zmiennej
        cout << "liczba jest parzysta " << endl;
    } else {
        cout << "liczba jest nie parzysta " << endl;
    }

    return 0;
}
