

#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    cout << "wpisz pierwsza liczbe" << endl;
    cin >> number1;
    cout << "wpisz druga liczbe" << endl;
    cin >> number2;


    if (number1 % number2 == 0) {
        cout << "pierwsza liczba jest podzielna przez druga" << endl;
    } else {
        cout << "niestety, podana pierwsza liczba nie jest podzielna przez, druga wprowadzona" << endl;
    }

    return 0;
}
