// Allocare dinamicamente un array di strutture e inizializzarlo.

#include <iostream>

struct Punto {
    int x, y;
};

int main() {
    Punto* punti = new Punto[3];
    punti[0] = {1, 2};
    punti[1] = {3, 4};
    punti[2] = {5, 6};
    for (int i = 0; i < 3; ++i) {
        std::cout << "Punto " << i << ": (" << punti[i].x << ", " << punti[i].y << ")" << std::endl;
    }
    delete[] punti;
    return 0;
}