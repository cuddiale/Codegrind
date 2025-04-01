// Creare una classe annidata per rappresentare un indirizzo all'interno di una classe Persona.

#include <iostream>
#include <string>

class Persona {
private:
    std::string nome;
    int eta;

public:
    Persona(std::string n, int e) : nome(n), eta(e) {}

    void stampa() {
        std::cout << "Nome: " << nome << ", Età: " << eta << std::endl;
    }

    class Indirizzo {
    private:
        std::string via;
        std::string citta;
    public:
        Indirizzo(std::string v, std::string c) : via(v), citta(c) {}
        void stampa() {
            std::cout << "Indirizzo: " << via << ", " << citta << std::endl;
        }
    };
};

int main() {
    Persona persona("Mario Rossi", 30);
    Persona::Indirizzo indirizzo("Via Roma", "Milano");
    persona.stampa();
    indirizzo.stampa();
    return 0;
}