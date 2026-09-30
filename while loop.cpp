#include <iostream>
using namespace std;

int main() {
    string name;
    
    while (name.empty()){
        cout << "zadej jméno: ";
        getline(cin,name);
        
    }
    cout << "ahoj " << name;

    return 0; 
}


/*
int main(){
    while (1 == 1){
        cout << "nekonečnej loop\n";
    }
}*/
