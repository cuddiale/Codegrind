// Sovraccaricare l'operatore `[]` per accedere agli elementi di un array nella classe `Array`.

#include <iostream>

class Array {
private:
    int* data;
    size_t size;
public:
    Array(size_t s) : size(s), data(new int[s]()) {}

    ~Array() {
        delete[] data;
    }

    // Sovraccarico dell'operatore []
    int& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Indice fuori range");
        }
        return data[index];
    }

    size_t getSize() const {
        return size;
    }
};

int main() {
    Array arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    for (size_t i = 0; i < arr.getSize(); ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    return 0;
}