// Creare una classe che lancia un'eccezione quando si accede a un indice fuori limite.

#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new int[size];
    }
    ~Array() {
        delete[] data;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Indice fuori limite");
        }
        return data[index];
    }
};

int main() {
    try {
        Array arr(5);
        arr[10] = 3;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}