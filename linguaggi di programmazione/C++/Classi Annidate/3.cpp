// Creare una classe annidata per rappresentare un nodo in una lista collegata all'interno di una classe esterna.

#include <iostream>

class ListaCollegata {
private:
    class Nodo {
    public:
        int dato;
        Nodo* prossimo;
        Nodo(int val) : dato(val), prossimo(nullptr) {}
    };

    Nodo* testa;
public:
    ListaCollegata() : testa(nullptr) {}

    void aggiungi(int val) {
        Nodo* nuovoNodo = new Nodo(val);
        nuovoNodo->prossimo = testa;
        testa = nuovoNodo;
    }

    void stampa() {
        Nodo* current = testa;
        while (current) {
            std::cout << current->dato << " -> ";
            current = current->prossimo;
        }
        std::cout << "null" << std::endl;
    }

    ~ListaCollegata() {
        while (testa) {
            Nodo* daCancellare = testa;
            testa = testa->prossimo;
            delete daCancellare;
        }
    }
};

int main() {
    ListaCollegata lista;
    lista.aggiungi(1);
    lista.aggiungi(2);
    lista.aggiungi(3);
    lista.stampa();
    return 0;
}