// Creare due classi dove una è amica dell'altra e accede ai suoi membri privati.

#include <iostream>

class ClasseB;

class ClasseA {
private:
    int valoreA;
public:
    ClasseA(int v) : valoreA(v) {}
    void stampaB(const ClasseB& b);
};

class ClasseB {
private:
    int valoreB;
public:
    ClasseB(int v) : valoreB(v) {}
    friend class ClasseA;
};

void ClasseA::stampaB(const ClasseB& b) {
    std::cout << "ValoreB: " << b.valoreB << std::endl;
}

int main() {
    ClasseA a(10);
    ClasseB b(20);
    a.stampaB(b);
    return 0;
}