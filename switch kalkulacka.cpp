#include <iostream>
using namespace std;

int main() {
    double cislo1 = 0;
    double cislo2 = 0;
    char op;
    double vysledek = 0;

    // Načtení prvního čísla od uživatele
    cout << "Zadej první číslo: ";
    cin >> cislo1;

    // Načtení druhého čísla od uživatele
    cout << "Zadej druhé číslo: ";
    cin >> cislo2;

    // Načtení požadované operace
    cout << "Zadej operátor (-, +, *, :): ";
    cin >> op;

    // Vyhodnocení zadatelných operátorů
    switch (op) {
        case '-':
            vysledek = cislo1 - cislo2;
            cout << "Výsledek je " << vysledek << endl;
            break; // Ukončí switch, aby kód nepropadl do dalších případů

        case '+':
            vysledek = cislo1 + cislo2;
            cout << "Výsledek je " << vysledek << endl;
            break;

        case '*':
            vysledek = cislo1 * cislo2;
            cout << "Výsledek je " << vysledek << endl;
            break;

        case ':':
            vysledek = cislo1 / cislo2;
            cout << "Výsledek je " << vysledek << endl;
            break;
            
        default:
            // Spustí se, pokud uživatel zadá jiný znak než -, +, * nebo :
            cout << "Neplatný operátor!" << endl;
            break;
    }

    return 0; 
}
