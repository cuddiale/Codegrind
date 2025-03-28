// Creare una funzione di fabbrica che restituisce un `std::shared_ptr` a un nuovo oggetto.

#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() {
        std::cout << "Costruttore MyClass" << std::endl;
    }
    ~MyClass() {
        std::cout << "Distruttore MyClass" << std::endl;
    }
    void display() const {
        std::cout << "Metodo display di MyClass" << std::endl;
    }
};

std::shared_ptr<MyClass> createMyClass() {
    return std::make_shared<MyClass>();
}

int main() {
    std::shared_ptr<MyClass> ptr = createMyClass();
    ptr->display();
    return 0;
}