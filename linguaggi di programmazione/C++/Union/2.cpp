// Determinare e stampare la dimensione di una `union` che contiene un intero, un float e un carattere.

#include <iostream>

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    std::cout << "Dimensione della union: " << sizeof(MyUnion) << " byte" << std::endl;
    return 0;
}