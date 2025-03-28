// Creare un alias per un namespace e utilizzare l'alias per chiamare una funzione.

#include <iostream>

namespace MyNamespace {
    void saluta() {
        std::cout << "Ciao dal namespace!" << std::endl;
    }
}

namespace MN = MyNamespace;

int main() {
    MN::saluta();
    return 0;
}