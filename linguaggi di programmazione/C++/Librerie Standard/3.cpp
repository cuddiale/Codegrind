// Creare un set di numeri interi, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <set>

int main() {
    std::set<int> numeri;

    numeri.insert(3);
    numeri.insert(1);
    numeri.insert(2);

    for (int numero : numeri) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}