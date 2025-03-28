// Allocare dinamicamente un intero e stamparne il valore.

#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 42;
    std::cout << "Valore dell'intero: " << *ptr << std::endl;
    delete ptr;
    return 0;
}