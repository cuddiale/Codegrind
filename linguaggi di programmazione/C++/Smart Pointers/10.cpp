// Creare una classe che utilizza `std::shared_ptr` per gestire la memoria di un oggetto membro.

#include <iostream>
#include <memory>

class Member {
public:
    Member() {
        std::cout << "Costruttore Member" << std::endl;
    }
    ~Member() {
        std::cout << "Distruttore Member" << std::endl;
    }
    void display() const {
        std::cout << "Metodo display di Member" << std::endl;
    }
};

class MyClass {
private:
    std::shared_ptr<Member> member;
public:
    MyClass() : member(std::make_shared<Member>()) {}
    void display() const {
        member->display();
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}