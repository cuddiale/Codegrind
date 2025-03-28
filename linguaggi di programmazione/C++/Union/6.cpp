// Utilizzare una `union` per memorizzare alternativamente un array di interi e un array di float. Stampare i valori degli array.

#include <iostream>

union MyUnion {
    int intArray[4];
    float floatArray[4];
};

int main() {
    MyUnion u;

    u.intArray[0] = 1;
    u.intArray[1] = 2;
    u.intArray[2] = 3;
    u.intArray[3] = 4;
    std::cout << "Array di interi: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << u.intArray[i] << " ";
    }
    std::cout << std::endl;

    u.floatArray[0] = 1.1f;
    u.floatArray[1] = 2.2f;
    u.floatArray[2] = 3.3f;
    u.floatArray[3] = 4.4f;
    std::cout << "Array di float: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << u.floatArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}