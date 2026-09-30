#include <iostream>
using namespace std;

int main() {
    double stupen = 0;
    double vysledek = 0;
    char cf;
    
    cout << "Zadej kolik je stupnů: ";
    cin >> stupen;

    cout << "Zadal jsi Celsia (C) nebo Fahrenheit (F)?: ";
    cin >> cf;

    if (cf == 'C' or cf == 'c') {
        vysledek = (stupen * 1.8) + 32;
        cout << stupen << " °C je " << vysledek << " °F\n";
    } else if (cf == 'F' or cf == 'f') {
        // Převod z Fahrenheita na Celsius: (F - 32) * 5/9
        vysledek = (stupen - 32.0) * 5.0 / 9.0;
        cout << stupen << " °F je " << vysledek << " °C\n";
    } else {
        cout << "Chyba: Zadej jen C nebo F!\n";
    }

    return 0; 
}
