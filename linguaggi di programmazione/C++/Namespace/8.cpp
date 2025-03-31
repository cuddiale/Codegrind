// Utilizzare un namespace anonimo per limitare la visibilità di una funzione all'interno di un file.

#include <iostream>

namespace {
    void saluta() {
        std::cout << "Ciao dal namespace anonimo!" << std::endl;
    }
}

int main() {
    saluta();
    return 0;
}