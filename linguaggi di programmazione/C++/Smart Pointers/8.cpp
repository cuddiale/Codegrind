// Creare un programma che utilizza `std::shared_ptr` per gestire un array dinamico.

#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int[]> arr(new int[5]);

    for (int i = 0; i < 5; ++i) {
        arr[i] = i;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout <<

 std::endl;

    return 0;
}