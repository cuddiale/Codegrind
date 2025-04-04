// Creare due classi che permettono la conversione implicita tra loro con costruttori di conversione.

#include <iostream>

class ClassB;

class ClassA {
private:
    int valore;
public:
    ClassA(int v) : valore(v) {}
    ClassA(const ClassB& b);
    void stampa() const {
        std::cout << "ClassA Valore: " << valore << std::endl;
    }
};

class ClassB {
private:
    int valore;
public:
    ClassB(int v) : valore(v) {}
    operator ClassA() const {
        return ClassA(valore);
    }
    void stampa() const {
        std::cout << "ClassB Valore: " << valore << std::endl;
    }
};

ClassA::ClassA(const ClassB& b) : valore(b.valore) {}

int main() {
    ClassA a = 42;
    ClassB b = a; // Conversione implicita
    b.stampa();
    a = b; // Conversione implicita
    a.stampa();
    return 0;
}