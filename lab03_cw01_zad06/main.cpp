#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout <<"Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    cout << "prosze wpisz pierwszy bok trojkata";
    cin >> a;
    cout << "prosze wpisz drugi bok trojkata";
    cin >> b;
    cout << "prosze wpisz trzeci bok trojkata";
    cin >> c;


    if (a > b && a > c) {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "mozna zbudowac trojkat prostokatny za pomoca tych bokow " << endl;
        } else {
            cout << "nie mozna zbudowac trojkat prostokatny za pomoca tych bokow "<< endl;
        }
    } else if (b > a && b > c) {
        if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
            cout << "mozna zbudowac trojkat prostokatny za pomoca tych bokow " << endl;
        } else {
            cout << "nie mozna zbudowac trojkat prostokatny za pomoca tych bokow " << endl;
        }

    } else {
        if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
            cout << "mozna zbudowac trojkat prostokatny za pomoca tych bokow " << endl;
        }
    }
}
