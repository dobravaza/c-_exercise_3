#include <iostream>
#include <limits>
using namespace std;

int main() {
    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    double number; //deklaracja zmiennej
    cout << "wpisz numer "; //wyswietlamy text
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //uzywamy biblioteki limits
    cin.clear();

    if (number > 0) {//sprawdzamy czy nasz input jest wiekszy od zera
        cout << "wpisany numer jest wiekszy niz 0" << endl;
    } else if (number < 0) {//sprawdzamy czy jest mniejszy od zera
        cout << "wpisany numer jest mniejszy niz zero" << endl;
    } else { // w przeciwnym wypadku wykonaj:
        cout << "numer ktory wpisales rowna sie 0" << endl;
    }


    return 0;
}
