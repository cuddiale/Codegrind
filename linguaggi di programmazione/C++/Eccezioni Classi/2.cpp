// Creare una classe che lancia un'eccezione personalizzata.

#include <iostream>
#include <stdexcept>

class MyException : public std::runtime_error {
public:
    MyException(const std::string& message) : std::runtime_error(message) {}
};

class Esempio {
public:
    void lanciaEccezione() {
        throw MyException("Eccezione personalizzata");
    }
};

int main() {
    Esempio e;
    try {
        e.lanciaEccezione();
    } catch (const MyException& ex) {
        std::cerr << "Errore: " << ex.what() << std::endl;
    }
    return 0;
}