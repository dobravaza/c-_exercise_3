#include <iostream>
using namespace std;

int main() {
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;

    double a, b, c; // deklaracja zmiennych

    cout << "wpisz pierwszy bok trojkatu" << endl; //wsywietlenie tekstu
    cin >> a; //wczytanie wpisanej wartosci do zmiennej
    cout << "wpisz drugi bok trojkatu " << endl;
    cin >> b;//wczytanie wpisanej wartosci do zmiennej
    cout << "wpisz trzeci bok trojkatu" << endl;
    cin >> c;//wczytanie wpisanej wartosci do zmiennej

    if ((a + b > c) && (a + c > b) && (b + c > a)) { // porownanie w intstrukcjach else if
        cout << "mozna zubodwac trojkat o podanych bokach" << endl;
    } else {
        cout << "nie jest mozliwe zbudowanie trojkatu z tych bokow" << endl;
    }

    return 0;
}
