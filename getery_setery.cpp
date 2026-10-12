#include <iostream>
#include <string>
using namespace std;

struct vlastnosti {        //default věci co by se použíli kdyby nebylo definovany
    int vek = 0;
    string jmeno = " ";
    string prijmeni = " ";
};

class clovek {    
private:
    int vek;
    string jmeno;
    string prijmeni;

public:
    // Konstruktor
    clovek(vlastnosti args = {}) : vek(args.vek), jmeno(args.jmeno), prijmeni(args.prijmeni) {}

    // getery
    int getVek() const { return vek; }
    string getJmeno() const { return jmeno; }
    string getPrijmeni() const { return prijmeni; }

    // setery
    void setVek(int novyvek) { vek = novyvek; }
    void setJmeno(string novmeno) { jmeno = novmeno; }
    void setPrijmeni(string novyprimeni) { prijmeni = novyprimeni; }
    
    // Operátor pro vypis
    friend ostream& operator<<(ostream& os, const clovek& p) {
        os << p.jmeno << " " << p.prijmeni << " "<< p.vek << " let";
        return os;
    }
};

int main() {
    clovek p({.vek = 33, .jmeno = "jan", .prijmeni = "novák"});
    
    cout << p << "\n";
    cout << "Jméno: " << p.getJmeno() << "\n";
    cout << "Příjmení: " << p.getPrijmeni() << "\n";
    cout << "Věk: " << p.getVek() << "\n";  

    return 0;
}
