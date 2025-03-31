// Crea una classe Cane con un membro privato eta e un metodo pubblico stampaEta che stampa l'età del cane.

#include <iostream>
using namespace std;

class Cane {
private:
    int eta;

public:
    void stampaEta() {
        cout << "Il cane ha " << eta << " anni." << endl;
    }
};

int main() {
    Cane c;
    c.stampaEta();

    return 0;
}
