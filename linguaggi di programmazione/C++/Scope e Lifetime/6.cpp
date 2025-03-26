// Dichiarare variabili membro e variabili locali in una classe e dimostrare il loro scope.

#include <iostream>

class MyClass {
private:
    int membro;
public:
    MyClass(int valore) : membro(valore) {}

    void funzione() {
        int locale = 20;
        std::cout << "Membro: " << membro << ", Locale: " << locale << std::endl;
    }
};

int main() {
    MyClass obj(10);
    obj.funzione();
    // membro e locale non sono accessibili qui
    return 0;
}