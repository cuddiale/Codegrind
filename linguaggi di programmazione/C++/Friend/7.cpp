// Creare una classe con una funzione amica che modifica i membri privati della classe.

#include <iostream>

class Contatore {
private:
    int valore;
public:
    Contatore(int v) : valore(v) {}
    friend void incrementa(Contatore& c);
    void stampa() const {
        std::cout << "Valore: " << valore << std::endl;
    }
};

void incrementa(Contatore& c) {
    c.valore++;
}

int main() {
    Contatore c(5);
    c.stampa();
    incrementa(c);
    c.stampa();
    return 0;
}