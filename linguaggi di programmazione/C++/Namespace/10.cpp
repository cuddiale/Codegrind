// Definire una funzione template all'interno di un namespace e utilizzarla nel programma.

#include <iostream>

namespace Utilities {
    template <typename T>
    T somma(T a, T b) {
        return a + b;
    }
}

int main() {
    std::cout << "Somma di interi: " << Utilities::somma(3, 4) << std::endl;
    std::cout << "Somma di double: " << Utilities::somma(2.5, 3.5) << std::endl;
    return 0;
}