// Creare una classe con un attributo statico e un metodo per incrementarlo.

#include <iostream>

class Contatore {
private:
    static int contatore;
public:
    static void incrementa() {
        contatore++;
    }
    static int getContatore() {
        return contatore;
    }
};

int Contatore::contatore = 0;

int main() {
    Contatore::incrementa();
    Contatore::incrementa();
    std::cout << "Valore del contatore: " << Contatore::getContatore() << std::endl;
    return 0;
}