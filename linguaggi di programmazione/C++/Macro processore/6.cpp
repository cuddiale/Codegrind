// Definire una macro per restituire il massimo tra due valori.

#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 5;
    int y = 10;
    std::cout << "Il massimo tra " << x << " e " << y << " è " << MAX(x, y) << std::endl;
    return 0;
}