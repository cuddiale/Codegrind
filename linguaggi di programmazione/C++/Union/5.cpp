// Aggiungere funzioni membro a una `union` per assegnare e stampare i valori dei suoi membri.

#include <iostream>

union MyUnion {
    int i;
    float f;

    void setInt(int value) {
        i = value;
    }

    void setFloat(float value) {
        f = value;
    }

    void print() {
        std::cout << "Intero: " << i << ", Float: " << f << std::endl;
    }
};

int main() {
    MyUnion u;
    u.setInt(42);
    u.print();
    u.setFloat(3.14f);
    u.print();
    return 0;
}