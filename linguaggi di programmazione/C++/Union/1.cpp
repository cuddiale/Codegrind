// Creare una `union` che può contenere un intero, un float o un carattere. Utilizzare la union per assegnare e stampare ciascun valore.

#include <iostream>

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    MyUnion u;

    u.i = 42;
    std::cout << "Intero: " << u.i << std::endl;

    u.f = 3.14f;
    std::cout << "Float: " << u.f << std::endl;

    u.c = 'A';
    std::cout << "Carattere: " << u.c << std::endl;

    return 0;
}