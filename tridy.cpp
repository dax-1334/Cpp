#include <iostream>
#include <string>
using namespace std;

void kalkulacka(){
    cout << "KALKULAČKA 3000\n";

     double x = 0;
     double y = 0;
     double vysledek = 0;
     char op = 'x';

    cout << "zadej první číslo: ";
    cin >> x;

    cout << "zadej druhé číslo: ";
    cin >> y;

    cout << "zadej operátor (+ , - , * , /): ";
    cin >> op;

    switch (op){
        case '+':
            vysledek = x + y;
            cout << "výsledek je " << vysledek;
            break;
        case '-':
            vysledek = x - y;
            cout << "výsledek je " << vysledek;
            break;
        case '/':
            if (y == 0){
                cout << "nelze dělit nulou";
                break;
            }else{
            vysledek = x / y;
            cout << "výsledek je " << vysledek;
            break;
            }
        case '*':
            vysledek = x * y;
            cout << "výsledek je " << vysledek;
            break;
        default:
            cout << "neplatný operátor";
            break;
            
    }
    
}

void cele_jmeno(){
    string jmeno;

        cout << "zadej celé tvé jméno: ";

        cin.ignore();

        getline(cin,jmeno);

        cout << "tvé jméno je " << jmeno;
}

int main() {

    int odpoved = 0;

    
    cout << "1. kalkulačka\n";
    cout << "2. celé jméno\n";
    cout << "co chceš udělat: ";
    cin >> odpoved;

    if (odpoved == 1){
        kalkulacka();
    }else if (odpoved == 2) {
        cele_jmeno();
    }else {
        cout << "špatně zadaná číslice";
    }
    return 0;
}
