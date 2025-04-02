// Creare una funzione che lancia un'eccezione quando un valore è fuori dal range consentito.

#include <iostream>
#include <stdexcept>

void verificaRange(int val, int min, int max) {
    if (val < min || val > max) {
        throw std::out_of_range("Valore fuori range");
    }
    std::cout << "Valore accettabile: " << val << std::endl;
}

int main() {
    try {
        verificaRange(10, 1, 20);
        verificaRange(30, 1, 20);
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}