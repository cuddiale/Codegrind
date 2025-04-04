// Modificare la classe Singleton per renderla thread-safe usando `std::mutex`.

#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mtx;
    Singleton() {}

public:
    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
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
std::mutex Singleton::mtx;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->printMessage();

    std::cout << "s1 e s2 sono uguali: " << (s1 == s2) << std::endl; // Devono essere uguali

    return 0;
}