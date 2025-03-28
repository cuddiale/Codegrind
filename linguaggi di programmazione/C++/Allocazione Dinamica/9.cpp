// Utilizzare l'allocazione dinamica per creare una struttura dati per una coda.

#include <iostream>

struct Nodo {
    int dato;
    Nodo* prossimo;
};

class Coda {
private:
    Nodo* testa;
    Nodo* coda;

public:
    Coda() : testa(nullptr), coda(nullptr) {}

    void enqueue(int val) {
        Nodo* nuovoNodo = new Nodo{val, nullptr};
        if (coda) {
            coda->prossimo = nuovoNodo;
        } else {
            testa = nuovoNodo;
        }
        coda = nuovoNodo;
    }

    int dequeue() {
        if (!testa) {
            throw std::runtime_error("Coda vuota!");
        }
        int val = testa->dato;
        Nodo* daCancellare = testa;
        testa = testa->prossimo;
        if (!testa) {
            coda = nullptr;
        }
        delete daCancellare;
        return val;
    }

    ~Coda() {
        while (testa) {
            Nodo* daCancellare = testa;
            testa = testa->prossimo;
            delete daCancellare;
        }
    }
};

int main() {
    Coda coda;
    coda.enqueue(1);
    coda.enqueue(2);
    coda.enqueue(3);
    std::cout << "Dequeue: " << coda.dequeue() << std::endl;
    std::cout << "Dequeue: " << coda.dequeue

() << std::endl;
    std::cout << "Dequeue: " << coda.dequeue() << std::endl;
    return 0;
}