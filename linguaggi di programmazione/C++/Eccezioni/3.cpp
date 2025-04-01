// Creare una funzione che lancia un'eccezione quando l'allocazione della memoria fallisce.

#include <iostream>
#include <stdexcept>

void* allocateMemory(size_t size) {
    void* ptr = malloc(size);
    if (!ptr) {
        throw std::runtime_error("Allocazione di memoria fallita");
    }
    return ptr;
}

int main() {
    try {
        void* ptr = allocateMemory(1024);
        std::cout << "Memoria allocata con successo" << std::endl;
        free(ptr);
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}