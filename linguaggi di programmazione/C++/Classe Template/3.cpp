// Creare una classe template per una pila (stack) con operazioni push e pop.

#include <iostream>
#include <vector>

template <typename T>
class Pila {
private:
    std::vector<T> dati;
public:
    void push(T val) {
        dati.push_back(val);
    }
    T pop() {
        if (dati.empty()) {
            throw std::out_of_range("Pila vuota");
        }
        T val = dati.back();
        dati.pop_back();
        return val;
    }
    bool vuota() const {
        return dati.empty();
    }
};

int main() {
    Pila<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    std::cout << "Pop: " << pila.pop() << std::endl;
    std::cout << "Pop: " << pila.pop() << std::endl;
    std::cout << "Pop: " << pila.pop() << std::endl;
    return 0;
}