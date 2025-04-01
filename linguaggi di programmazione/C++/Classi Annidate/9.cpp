// Creare una classe annidata per rappresentare una banca con un conto corrente.

#include <iostream>
#include <string>

class Banca {
private:
    std::string nome;

public:
    Banca(std::string n) : nome(n) {}

    void stampa() {
        std::cout << "Nome banca: " << nome << std::endl;
    }

    class ContoCorrente {
    private:
        std::string numeroConto;
        double saldo;
    public:
        ContoCorrente(std::string n, double s) : numeroConto(n), saldo(s) {}
        void stampa() {
            std::cout << "Numero conto: " << numeroConto << ", Saldo: " << saldo << std::endl;
        }
    };
};

int main() {
    Banca banca("Banca Nazionale");
    Banca::ContoCorrente conto("12345ABC", 1000.50);
    banca.stampa();
    conto.stampa();
    return 0;
}