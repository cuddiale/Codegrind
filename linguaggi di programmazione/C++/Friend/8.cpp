// Creare due classi amiche con funzioni amiche che accedono ai membri privati di entrambe.

#include <iostream>

class ClasseB;

class ClasseA {
private:
    int valoreA;
public:
    ClasseA(int v) : valoreA(v) {}
    void stampaB(const ClasseB& b);
    friend void incrementaA(ClasseA& a);
    friend class ClasseB;
};

class ClasseB {
private:
    int valoreB;
public:
    ClasseB(int v) : valoreB(v) {}
    void stampaA(const ClasseA& a);
    friend void incrementaB(ClasseB& b);
    friend class ClasseA;
};

void ClasseA::stampaB(const ClasseB& b) {
    std::cout << "ValoreB: " << b.valoreB << std::endl;
}

void ClasseB::stampaA(const ClasseA& a) {
    std::cout << "ValoreA: " << a.valoreA << std::endl;
}

void incrementaA(ClasseA& a) {
    a.valoreA++;
}

void incrementaB(ClasseB& b) {
    b.valoreB++;
}

int

 main() {
    ClasseA a(10);
    ClasseB b(20);

    a.stampaB(b);
    b.stampaA(a);

    incrementaA(a);
    incrementaB(b);

    a.stampaB(b);
    b.stampaA(a);

    return 0;
}