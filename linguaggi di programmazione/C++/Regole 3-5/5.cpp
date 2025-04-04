// Creare una classe con la Rule of Five e utilizzare un vettore per gestire più oggetti.

#include <iostream>
#include <vector>
#include <utility>

class MyClass {
private:
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}

    MyClass(const MyClass& other) : data(new int(*other.data)) {
        std::cout << "Costruttore di copia chiamato" << std::endl;
    }

    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this;
        *data = *other.data;
        std::cout << "Operatore di assegnazione di copia chiamato" << std::endl;
        return *this;
    }

    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Costruttore di spostamento chiamato" << std::endl;
    }

    MyClass& operator=(MyClass&& other)

 noexcept {
        if (this == &other) return *this;
        delete data;
        data = other.data;
        other.data = nullptr;
        std::cout << "Operatore di assegnazione di spostamento chiamato" << std::endl;
        return *this;
    }

    ~MyClass() {
        delete data;
        std::cout << "Distruttore chiamato" << std::endl;
    }

    void print() const {
        if (data)
            std::cout << "Valore: " << *data << std::endl;
        else
            std::cout << "Nessun dato" << std::endl;
    }
};

int main() {
    std::vector<MyClass> vec;
    vec.push_back(MyClass(10));
    vec.push_back(MyClass(20));
    vec.push_back(MyClass(30));

    for (const auto& obj : vec) {
        obj.print();
    }
    return 0;
}