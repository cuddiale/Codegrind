// Creare una classe template per un punto 2D con operazioni di set e get delle coordinate.

#include <iostream>

template <typename T>
class Punto2D {
private:
    T x, y;
public:
    Punto2D(T x, T y) : x(x), y(y) {}
    void setX(T x) {
        this->x = x;
    }
    void setY(T y) {
        this->y = y;
    }
    T getX() const {
        return x;
    }
    T getY() const {
        return y;
    }
};

int main() {
    Punto2D<int> p1(1, 2);
    Punto2D<double> p2(3.5, 4.5);
    std::cout << "Punto1: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;
    std::cout << "Punto2: (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
    return 0;
}