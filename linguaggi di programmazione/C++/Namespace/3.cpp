// Creare un namespace annidato e definire una funzione nel namespace interno.

#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {
        void saluta() {
            std::cout << "Ciao dal namespace interno!" << std::endl;
        }
    }
}

int main() {
    OuterNamespace::InnerNamespace::saluta();
    return 0;
