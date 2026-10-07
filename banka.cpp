#include <iostream>
using namespace std;

void balanc(double &balance){
    cout << "zůstatek je " << balance << "\n";
    
}

void vklad(double &balance){
    int cislo;
    
    cout << "kolik chceš vložit: ";
    cin >> cislo;
    if (cislo > 999999999){
        cout << "moc velké číslo ";
    }else if (cislo > 0 and cislo < 999999999){
        balance = balance + cislo;
        
    }else{
        cout << "nesmíš vložit takové velké číslo \n";
    }
    cout << "tvůj zůstatek je nyní " << balance << "\n";
}

void vyber(double &balance){
    int cislo;
    
    cout << "kolik chceš vybrat?: (od 0 do " << balance << "): ";
    cin >> cislo;

    if (cislo > balance){
        cout << "tato částka nelze vybrat \n";
    }   
    else{
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
                cout << "přijdtě zas ! \n";
                break; 
                
            default:
                cout << "Neplatná volba\n";
                break;
        }
        
    } while (cislo != 4); 

    return 0;
}
