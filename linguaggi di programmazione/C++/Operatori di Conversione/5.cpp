// Creare due classi che permettono la conversione esplicita tra loro con costruttori di conversione espliciti.

#include <iostream>

class ClassB;

class ClassA {
private:
    int valore;
public:
    explicit ClassA(int v) : valore(v) {}
    explicit ClassA(const ClassB& b);
    void stampa() const {
        std::cout << "ClassA Valore: " << valore << std::endl;
    }
};

class ClassB {
private:
    int valore;
public:
    explicit ClassB(int v) : valore(v) {}
    explicit operator ClassA() const {
        return ClassA(valore);
    }
    void stampa() const {
        std::cout << "ClassB Valore: " << valore << std::endl;
    }
};

ClassA::ClassA(const ClassB& b) : valore(b.valore) {}

int main() {
    ClassA a(42);
    ClassB b = static_cast<ClassB>(a); // Conversione esplicita
    b.stampa();
    a = static_cast<ClassA>(b); // Conversione esplicita
    a.stampa();
    return 0;
}