// Creare una classe con una funzione amica per sovraccaricare l'operatore di inserimento (<<).

#include <iostream>

class Punto {
private:
    int x, y;
public:
    Punto(int x, int y) : x(x), y(y) {}
    friend std::ostream& operator<<(std::ostream& os, const Punto& p);
};

std::ostream& operator<<(std::ostream& os, const Punto& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int main() {
    Punto p(3, 4);
    std::cout << "Punto: " << p << std::endl;
    return 0;
}