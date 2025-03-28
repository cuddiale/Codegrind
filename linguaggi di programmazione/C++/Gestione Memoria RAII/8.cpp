// Creare una classe custom che gestisce risorse dinamiche con RAII.

#include <iostream>

class Risorsa {
public:
    Risorsa() {
        risorsa = new int(10);
        std::cout << "Risorsa alloc

ata" << std::endl;
    }
    ~Risorsa() {
        delete risorsa;
        std::cout << "Risorsa deallocata" << std::endl;
    }
    void stampa() {
        std::cout << "Valore della risorsa: " << *risorsa << std::endl;
    }
private:
    int* risorsa;
};

int main() {
    {
        Risorsa r;
        r.stampa();
    } // La risorsa viene deallocata automaticamente qui
    return 0;
}