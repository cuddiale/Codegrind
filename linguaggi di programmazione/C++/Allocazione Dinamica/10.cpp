// Utilizzare l'allocazione dinamica per creare una pila (stack).

#include <iostream>

struct Nodo {
    int dato;
    Nodo* prossimo;
};

class Pila {
private:
    Nodo* cima;

public:
    Pila() : cima(nullptr) {}

    void push(int val) {
        Nodo* nuovoNodo = new Nodo{val, cima};
        cima = nuovoNodo;
    }

    int pop() {
        if (!cima) {
            throw std::runtime_error("Pila vuota!");
        }
        int val = cima->dato;
        Nodo* daCancellare = cima;
        cima = cima->prossimo;
        delete daCancellare;
        return val;
    }

    ~Pila() {
        while (cima) {
            Nodo* daCancellare = cima;
            cima = cima->prossimo;
            delete daCancellare;
        }
    }
};

int main() {
    Pila pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    std::cout << "Pop: " << pila.pop() << std::endl;
    std::cout << "Pop: " << pila.pop() << std::endl;
    std::cout << "Pop: " << pila.pop() << std::endl;
    return 0;
}