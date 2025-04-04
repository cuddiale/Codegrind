// Ordinare un vettore di numeri interi usando std::sort e stamparli.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeri = {3, 1, 2};

    std::sort(numeri.begin(), numeri.end());

    for (int numero : numeri) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}