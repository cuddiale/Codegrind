// Creare una classe template per un albero binario di ricerca con operazioni di inserimento e ricerca.

#include <iostream>

template <typename T>
class Nodo {
public:
    T dato;
    Nodo* sinistro;
    Nodo* destro;

    Nodo(T val) : dato(val), sinistro(nullptr), destro(nullptr) {}
};

template <typename T>
class AlberoBinario {
private:
    Nodo<T>* radice;

    void inserisci(Nodo<T>*& nodo, T val) {
        if (!nodo) {
            nodo = new Nodo<T>(val);
        } else if (val < nodo->dato) {
            inserisci(nodo->sinistro, val);
        } else {
            inserisci(nodo->destro, val);
        }
    }

    bool cerca(Nodo<T>* nodo, T val) const {
        if (!nodo) {
            return false;
        } else if (val == nodo->dato) {
            return true;
        } else if (val < nodo->dato) {
            return cerca(nodo->sinistro, val);
        } else {
            return cerca(nodo->destro, val);
        }
    }

    void dealloca(Nodo<T>* nodo) {
        if (nodo) {
            dealloca(nodo->sinistro);
            dealloca(nodo->destro);
            delete nodo;
        }
    }

public:
    AlberoBinario() : radice(nullptr) {}

    void inserisci(T val) {
        inserisci(radice, val);
    }

    bool cerca(T val) const {
        return cerca(radice, val);
    }

    ~AlberoBinario() {
        dealloca(radice);
    }
};

int main() {
    AlberoBinario<int> albero;
    albero.inserisci(5);
    albero.inserisci(3);
    albero.inserisci(8);
    albero.inserisci(1);
    albero.inserisci(4);

    std::cout << "Cerca 3: " << (albero.cerca(3) ? "Trovato" : "Non trovato") << std::endl;
    std::cout << "Cerca 7: " << (albero.cerca(7) ? "Trovato" : "Non trovato") << std::endl;

    return 0;
}