// Creare un vettore di numeri interi, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeri;

    numeri.push_back(1);
    numeri.push_back(2);
    numeri.push_back(3);

    for (int numero : numeri) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}
