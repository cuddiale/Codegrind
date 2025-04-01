// Creare una classe annidata per gestire un albero binario di ricerca.

#include <iostream>

class AlberoBinario {
private:
    class Nodo {
    public:
        int dato;
        Nodo* sinistro;
        Nodo* destro;
        Nodo(int val) : dato(val), sinistro(nullptr), destro(nullptr) {}
    };

    Nodo* radice;

    void inserisci(Nodo*& nodo, int val) {
        if (!nodo) {
            nodo = new Nodo(val);
        } else if (val < nodo->dato) {
            inserisci(nodo->sinistro, val);
        } else {
            inserisci(nodo->destro, val);
        }
    }

    void stampaInOrdine(Nodo* nodo) {
        if (nodo) {
            stampaInOrdine(nodo->sinistro);
            std::cout << nodo->dato << " ";
            stampaInOrdine(nodo->destro);
        }
    }

    void dealloca(Nodo* nodo) {
        if (nodo) {
            dealloca(nodo->sinistro);
            dealloca(nodo->destro);
            delete nodo;
        }
    }

public:
    AlberoBinario() : radice(nullptr) {}

    void inserisci(int val) {
        inserisci(radice, val);
    }

    void stampaInOrdine() {
        stampaInOrdine(radice);
        std::cout << std::endl;
    }

    ~AlberoBinario() {
        dealloca(radice);
    }
};

int main() {
    AlberoBinario albero;
    albero.inserisci(5);
    albero.inserisci(3);
    albero.inserisci(8);
    albero.inserisci(1);
    albero.inserisci(4);
    albero.stampaInOrdine();
    return 0;
}