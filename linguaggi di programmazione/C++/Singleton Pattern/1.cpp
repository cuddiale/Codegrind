// Creare una classe Singleton con un metodo statico per ottenere l'istanza unica.

#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}

public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    void printMessage() {
        std::cout << "Istanza Singleton" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->printMessage();

    std::cout << "s1 e s2 sono uguali: " << (s1 == s2) << std::endl; // Devono essere uguali

    return 0;
}