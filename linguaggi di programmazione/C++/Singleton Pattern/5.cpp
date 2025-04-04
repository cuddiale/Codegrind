// Implementare la classe Singleton utilizzando `std::call_once` per garantire l'inizializzazione sicura in ambienti multi-thread.

#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::once_flag initFlag;
    Singleton() {}

public:
    static Singleton* getInstance() {
        std::call_once(initFlag, []() {
            instance = new Singleton();
        });
        return instance;
    }

    void printMessage() {
        std::cout << "Istanza Singleton" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;
std::once_flag Singleton::initFlag;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->printMessage();

    std::cout << "s1 e s2 sono uguali: " << (s1 == s2) << std::endl; // Devono essere uguali

    return 0;
}