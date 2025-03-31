// Definire una macro per convertire un valore in una stringa.

#include <iostream>

#define STRINGIFY(x) #x

int main() {
    std::cout << "Il valore di PI come stringa è " << STRINGIFY(3.14159) << std::endl;
    return 0;
}