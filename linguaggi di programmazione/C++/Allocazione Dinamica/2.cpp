// Allocare dinamicamente un array di interi e inizializzarlo con valori da 1 a 5.

#include <iostream>

int main() {
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    delete[] arr;
    return 0;
}