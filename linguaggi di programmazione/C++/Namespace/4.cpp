// Utilizzare la direttiva `using` per importare un namespace e chiamare una funzione senza il prefisso del namespace.

#include <iostream>

namespace MyNamespace {
    void saluta() {
        std::cout << "Ciao dal namespace!" << std::endl;
    }
}

using namespace MyNamespace;

int main() {
    saluta();
    return 0;
}