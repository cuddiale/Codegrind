// Creare una funzione che lancia un'eccezione durante la conversione di un tipo di dato.

#include <iostream>
#include <stdexcept>

double convertiInDouble(const std::string& str) {
    try {
        return std::stod(str);
    } catch (const std::invalid_argument&) {
        throw std::runtime_error("Conversione fallita: tipo di dato non valido");
    } catch (const std::out_of_range&) {
        throw std::runtime_error("Conversione fallita: valore fuori range");
    }
}

int main() {
    try {
        std::cout << convertiInDouble("123.45") << std::endl;
        std::cout << convertiInDouble("abc") << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}