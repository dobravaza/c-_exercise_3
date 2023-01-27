#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "wpisz swoj wzrost w CM" << endl;
    cin >> height;

    if (height < 165) {
        cout << "maly wzrost" << endl;
    } else if (height < 175) {
        cout << "sredni wzrost" << endl;
    } else {
        cout << "wysoki wzrost" << endl;
    }
cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" <<endl;
    return 0;
}
