// Creare una classe con un costruttore che inizializza un array di interi.

#include <iostream>

class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i;
        }
        std::cout << "Array inizializzato" << std::endl;
    }

    ~Array() {
        delete[] arr;
    }

    void stampa() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array arr(5);
    arr.stampa();
    return 0;
}