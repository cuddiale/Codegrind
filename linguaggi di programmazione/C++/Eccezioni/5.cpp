// Creare una funzione che lancia un'eccezione quando il tipo di dato non è valido.

#include <iostream>
#include <stdexcept>

int convertiInIntero(const std::string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            throw std::invalid_argument("Tipo di dato non valido");
        }
    }
    return std::stoi(str);
}

int main() {
    try {
        std::cout << convertiInIntero("123") << std::endl;
        std::cout << convertiInIntero("123a") << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}