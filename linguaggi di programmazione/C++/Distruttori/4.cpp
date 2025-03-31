// Creare una classe con un distruttore che dealloca oggetti gestiti da smart pointer.

#include <iostream>
#include <memory>

class Esempio {
private:
    std::unique_ptr<int> ptr;
public:
    Esempio(int val) : ptr(std::make_unique<int>(val)) {
        std::cout << "Costruttore chiamato" << std::endl;
    }
    ~Esempio() {
        std::cout << "Distruttore chiamato" << std::endl;
    }
};

int main() {
    Esempio e(42);
    return 0;
}