// Creare due classi e una funzione amica che accede ai membri privati di entrambe.

#include <iostream>

class ClasseA;
class ClasseB;

void scambia(ClasseA& a, ClasseB& b);

class ClasseA {
private:
    int valoreA;
public:
    ClasseA(int v) : valoreA(v) {}
    friend void scambia(ClasseA& a, ClasseB& b);
};

class ClasseB {
private:
    int valoreB;
public:
    ClasseB(int v) : valoreB(v) {}
    friend void scambia(ClasseA& a, ClasseB& b);
};

void scambia(ClasseA& a, ClasseB& b) {
    int temp = a.valoreA;
    a.valoreA = b.valoreB;
    b.valoreB = temp;
}

int main() {
    ClasseA a(10);
    ClasseB b(20);
    scambia(a, b);
    return 0;
}