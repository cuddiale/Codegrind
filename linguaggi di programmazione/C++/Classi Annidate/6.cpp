// Creare una classe annidata per rappresentare un'automobile con un motore.

#include <iostream>
#include <string>

class Automobile {
private:
    std::string marca;
    std::string modello;

public:
    Automobile(std::string m, std::string mod) : marca(m), modello(mod) {}

    void stampa() {
        std::cout << "Marca: " << marca << ", Modello: " << modello << std::endl;
    }

    class Motore {
    private:
        int cilindrata;
    public:
        Motore(int c) : cilindrata(c) {}
        void stampa() {
            std::cout << "Cilindrata: " << cilindrata << " cc" << std::endl;
        }
    };
};

int main() {
    Automobile auto1("Fiat", "Punto");
    Automobile::Motore motore1(1200);
    auto1.stampa();
    motore1.stampa();
    return 0;
}