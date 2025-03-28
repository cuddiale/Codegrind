// Allocare dinamicamente una stringa e copiarvi una stringa esistente.

#include <iostream>
#include <cstring>

int main() {
    const char* original = "Ciao, mondo!";
    char* copy = new char[strlen(original) + 1];
    strcpy(copy, original);
    std::cout << "Copia della stringa: " << copy << std::endl;
    delete[] copy;
    return 0;
}