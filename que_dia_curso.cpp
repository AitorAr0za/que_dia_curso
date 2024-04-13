#include <iostream>
#include <cstring>

using namespace std;

int main () {

    char dia[20];
    int numerito;

    cout << "Que dia es hoy?\n";
    cin >> dia;

    if ((strcmp (dia,"miercoles") == 0) || (strcmp (dia, "viernes") == 0))
        numerito = 1;

    switch(numerito) {

case 1:
    cout << "Hoy tenes programacion papaaaaa";
    break;

default:
    cout << "Hoy no tenes programacion :(";
    break;

    }

    return 0;

}
