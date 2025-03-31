// Creare una classe con un costruttore privato e un metodo statico per creare oggetti.

#include <iostream>

class Singleton {
private:
    int x;
    Singleton(int a) : x(a) {
        std::cout << "Costruttore privato chiamato: x=" << x << std::endl;
    }
public:
    static Singleton crea(int a) {
        return Singleton(a);
    }
};

int main() {
    Singleton s = Singleton::crea(10);
    return 0;
}