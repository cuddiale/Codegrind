// Creare una classe con una funzione amica per sovraccaricare l'operatore di somma (+).

#include <iostream>

class Vettore {
private:
    int x, y;
public:
    Vettore(int x, int y) : x(x), y(y) {}
    friend Vettore operator+(const Vettore& v1, const Vettore& v2);
    friend std::ostream& operator<<(std::ostream& os, const Vettore& v);
};

Vettore operator+(const Vettore& v1, const Vettore& v2) {
    return Vettore(v1.x + v2.x, v1.y + v2.y);
}

std::ostream& operator<<(std::ostream& os, const Vettore& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vettore v1(1, 2);
    Vettore v2(3, 4);
    Vettore v3 = v1 + v2;
    std::cout << "Somma: " << v3 << std::endl;
    return 0;
}