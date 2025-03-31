// Definire una macro per concatenare due token.

#include <iostream>

#define CONCATENA(a, b) a##b

int main() {
    int xy = 10;
    std::cout << "Il valore di xy è " << CONCATENA(x, y) << std::endl;
    return 0;
}