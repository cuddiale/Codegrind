// Risolvere il ciclo di riferimenti utilizzando `std::weak_ptr`.

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
    std::weak_ptr<A> a_ptr;
    ~B() {
        std::cout << "Distruttore B" << std::endl;
    }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a;
    std::cout << "Ciclo di riferimenti risolto con std::weak_ptr" << std::endl;
    return 0;
}