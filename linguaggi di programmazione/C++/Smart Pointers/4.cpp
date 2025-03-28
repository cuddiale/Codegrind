// Creare un ciclo di riferimenti con `std::shared_ptr` e dimostrare il problema.

#include <iostream>
#include <memory>

class B;

class A {
public:
    std::shared_ptr<B> b_ptr;
    ~A() {
        std::cout << "Distruttore A" << std::endl;
    }
};

class B {
public:
    std::shared_ptr<A> a_ptr;
    ~B() {
        std::cout << "Distruttore B" << std::endl;
    }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a;
    std::cout << "Creazione di un ciclo di riferimenti" << std::endl;
    return 0;
}