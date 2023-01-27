#include <iostream>
using namespace std;

int main() {
    cout << "autor: grzegorz dziuba, nr indeksu ww13333, nr albumu 22430"<< endl;

    double num1, num2; // deklaracja zmiennej
    cout << "wpisz pierwszy numer " << endl; //zapytanie nr 1
    cin >> num1; //wczytanie zmiennej nuim1
    cout << "wpisz drugi numer " << endl; //zapytanie nr 2
    cin >> num2; //wczytanie zmiennej num2

    if (num1 == num2) { //porownojemy wartosci 2 zmiennych
        cout << "numery sa rowne" << endl;
    } else if (num1 > num2) {//wieksze to :
        cout << "numer pierwszy jest wiekszy od drugiego" << endl;
    } else {//mniejsze to wykonaj kod ponizej:
        cout << "numer drugi jest wiekszy od pierwszego "<< endl;

    }

    return 0;
}
