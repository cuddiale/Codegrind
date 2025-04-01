// Creare una classe con una classe annidata semplice e stamparne un valore.

#include <iostream>

class Esterna {
public:
    class Annidata {
    private:
        int valore;
    public:
        Annidata(int v) : valore(v) {}
        void stampa() {
            std::cout << "Valore: " << valore << std::endl;
        }
    };
};

int main() {
    Esterna::Annidata obj(42);
    obj.stampa();
    return 0;
}