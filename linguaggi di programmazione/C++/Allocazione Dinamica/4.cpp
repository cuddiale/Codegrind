// Utilizzare l'allocazione dinamica per creare una copia di un array esistente.

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* copy = new int[5];
    for (int i = 0; i < 5; ++i) {
        copy[i] = arr[i];
    }
    for (int i = 0; i < 5; ++i) {
        std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
    }
    delete[] copy;
    return 0;
}