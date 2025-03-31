// Creare due namespace con funzioni con lo stesso nome e chiamare entrambe le funzioni.

#include <iostream>

namespace Namespace1 {
    void saluta() {
        std::cout << "Ciao da Namespace1!" << std::endl;
    }
}

namespace Namespace2 {
    void saluta() {
        std::cout << "Ciao da Namespace2!" << std::endl;
    }
}

int main() {
    Namespace1::saluta();
    Namespace2::saluta();
    return 0;
}