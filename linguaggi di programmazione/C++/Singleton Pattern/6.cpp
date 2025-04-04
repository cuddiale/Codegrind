// Implementare la classe Singleton utilizzando `std::shared_ptr` per la gestione automatica della memoria.

#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
private:
    static std::shared_ptr<Singleton> instance;
    static std::mutex mtx;
    Singleton() {}

public:
    static std::shared_ptr<Singleton> getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (!instance) {
            instance = std::shared_ptr<Singleton>(new Singleton());
        }
        return instance;
    }

    void printMessage() {
        std::cout << "Istanza Singleton" << std::endl;
    }
};

std::shared_ptr<Singleton> Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    std::shared_ptr<Singleton> s1 = Singleton::getInstance();
    std::shared_ptr<Singleton> s2 = Singleton::getInstance();

    s1->printMessage();

    std::cout << "s1 e s2 sono uguali: " << (s1 == s2) << std::endl; // Devono essere uguali

    return 0;
}