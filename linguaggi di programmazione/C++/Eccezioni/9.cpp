// Creare una funzione che lancia un'eccezione personalizzata.

#include <iostream>
#include <stdexcept>

class CustomException : public std::runtime_error {
public:
    CustomException(const std::string& message) : std::runtime_error(message) {}
};

void lanciaEccezionePersonalizzata() {
    throw CustomException("Eccezione personalizzata lanciata");
}

int main() {
    try {
        lanciaEccezionePersonalizzata();
    } catch (const CustomException& e) {
        std::cerr << "Errore: " << e.what()

 << std::endl;
    }
    return 0;
}