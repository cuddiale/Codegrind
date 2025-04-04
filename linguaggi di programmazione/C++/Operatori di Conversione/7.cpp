// Creare una classe che permette la conversione a una stringa con un operatore di conversione.

#include <iostream>
#include <string>

class MyClass {
private:
    int valore;
public:
    MyClass(int v) : valore(v) {}
    operator std::string() const {
        return std::to_string(valore);
    }
};

int main() {
    MyClass obj(42);
    std::string str = obj; // Conversione implicita
    std::cout << "Valore come stringa: " << str << std::endl;
    return 0;
}