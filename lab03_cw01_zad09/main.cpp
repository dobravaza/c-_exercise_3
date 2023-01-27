#include <iostream>
using namespace std;

int main() {
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;

    int age; //deklaracja zmiennej

    cout << " wpisz swoj wiek "; //wyswietlenie tekstu
    cin >> age; // przypisanie zmiennej inputu usera do zmiennej age


    if (age < 18)  //instrukcja if else
    {
        cout << "nieletni" << endl;
    }
    else if (age < 35) {
        cout << "osoba mloda" << endl;
    } else if (age < 65) {
        cout << "osoba w srednim wieku" << endl;
    } else {
        cout << "osoba starsza" << endl;
    }

    return 0;
}
