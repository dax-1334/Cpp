#include <iostream>
#include <limits> 
using namespace std;


void opravVstup() {                   // pro špatně zadané znaky/čísla
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void balanc(double &balance){
    cout << "zůstatek je " << balance << "\n";
}

void vklad(double &balance){
    double cislo; 
    
    cout << "kolik chceš vložit: ";
    cin >> cislo;

    if (cin.fail()) {
        opravVstup();
        cout << "Nezadal jsi platné číslo!\n";
        return;
    }

    if (cislo > 999999999){
        cout << "moc velké číslo\n";
    } else if (cislo > 0){
        balance = balance + cislo;
        cout << "tvůj zůstatek je nyní " << balance << "\n";
    } else {
        cout << "musíš vložit kladnou částku\n";
    }
}

void vyber(double &balance){
    double cislo; 
    
    cout << "kolik chceš vybrat?: (od 0 do " << balance << "): ";
    cin >> cislo;

    if (cin.fail()) {
        opravVstup();
        cout << "Nezadal jsi platné číslo!\n";
        return;
    }

    if (cislo <= 0) {
        cout << "Částka musí být větší než 0\n";
    } else if (cislo > balance){
        cout << "tato částka nelze vybrat\n";
    } else {
        balance = balance - cislo;
        cout << "zůstatek na účtě je " << balance << "\n";
    }
}

int main(){
    double balance = 0;
    int cislo;

    do {  
        cout << "1. ukázat balance 2. vložit peníze 3. vybrat peníze 4. odejít: ";
        cin >> cislo;

        if (cin.fail()) {
            opravVstup();
            cout << "Neplatná volba (musíš zadat číslo 1-4)\n";
            continue; 
        }
    
        switch (cislo) {
            case 1:
                balanc(balance);
                break; 
                
            case 2:
                vklad(balance);
                break; 
                
            case 3: 
                vyber(balance);
                break; 

            case 4:
                cout << "přijdtě zas !\n";
                break; 
                
            default:
                cout << "Neplatná volba\n";
                break;
        }
        
    } while (cislo != 4); 

    return 0;
}
