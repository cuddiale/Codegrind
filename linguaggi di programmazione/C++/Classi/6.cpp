// Crea una classe Macchina che rappresenti una macchina con marca, modello e anno di produzione. Aggiungi i metodi per impostare e ottenere le informazioni della macchina.

#include <iostream>
#include <string>
using namespace std;

class Macchina {
private:
    string marca;
    string modello;
    int annoProduzione;

public:
    void setMarca(string newMarca) {
        marca = newMarca;
    }

    void setModello(string newModello) {
        modello = newModello;
    }

    void setAnnoProduzione(int newAnnoProduzione) {
        annoProduzione = newAnnoProduzione;
    }

    string getMarca() {
        return marca;
    }

    string getModello() {
        return modello;
    }

    int getAnnoProduzione() {
        return annoProduzione;
    }
};

int main() {
    Macchina macchina;
    macchina.setMarca("Fiat");
    macchina.setModello("Panda");
    macchina.setAnnoProduzione(2010);

    cout << "Marca della macchina: " << macchina.getMarca() << endl;
    cout << "Modello della macchina: " << macchina.getModello() << endl;
    cout << "Anno di produzione: " << macchina.getAnnoProduzione() << endl;

    return 0;
}
