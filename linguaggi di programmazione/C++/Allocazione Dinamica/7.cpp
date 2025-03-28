// Utilizzare l'allocazione dinamica per gestire una lista collegata.

#include <iostream>

struct Nodo {
    int dato;
    Nodo* prossimo;
};

int main() {
    Nodo* testa = new Nodo{1, nullptr};
    testa->prossimo = new Nodo{2, nullptr};
    testa->prossimo->prossimo = new Nodo{3, nullptr};
    Nodo* current = testa;
    while (current) {
        std::cout << current->dato << " ";
        Nodo* daCancellare = current;
        current = current->prossimo;
        delete daCancellare;
    }
    std::cout << std::endl;
    return 0;
}