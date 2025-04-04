// Creare un array di numeri interi, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <array>

int main() {
    std::array<int, 3> numeri = {1, 2, 3};

    for (int numero : numeri) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}