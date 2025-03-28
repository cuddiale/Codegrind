// Creare una `union` compatibile con C che rappresenta un valore che può essere un intero, un float o una stringa. Utilizzare la union in un programma C++.

#include <iostream>
#include <cstring>

extern "C" {
    union MyUnion {
        int i;
        float f;
        char str[20];
    };
}

int main() {
    MyUnion u;

    u.i = 42;
    std::cout << "Intero: " << u.i << std::endl;

    u.f = 3.14f;
    std::cout << "Float: " << u.f << std::endl;

    strcpy(u.str, "Hello, World!");
    std::cout << "Stringa: " << u.str << std::endl;

    return 0;
}