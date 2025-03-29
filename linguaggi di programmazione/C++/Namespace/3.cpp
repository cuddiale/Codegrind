// Creare un namespace e definire una funzione all'interno di esso.

#include <iostream>

namespace MyNamespace {
    void saluta() {
        std::cout << "Ciao dal namespace!" << std::endl;
    }
}

int main() {
    MyNamespace::saluta();
    return 0;
}