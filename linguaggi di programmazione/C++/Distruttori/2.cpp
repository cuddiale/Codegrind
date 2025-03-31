// Creare una classe con un distruttore che libera memoria allocata dinamicamente.

#include <iostream>

class Esempio {
private:
    int* data;
public:
    Esempio(int size) {
        data = new int[size];
        std::cout << "Memoria allocata" << std::endl;
    }
    ~Esempio() {
        delete[] data;
        std::cout << "Memoria deallocata" << std::endl;
    }
};

int main() {
    Esempio e(10);
    return 0;
}