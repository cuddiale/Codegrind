// Creare una classe che gestisce un array dinamico e implementare la Rule of Five.

#include <iostream>
#include <utility> // Per std::move

class MyArray {
private:
    int* data;
    size_t size;
public:
    MyArray(size_t size) : data(new int[size]), size(size) {
        for (size_t i = 0; i < size; ++i) {
            data[i] = static_cast<int>(i);
        }
    }

    MyArray(const MyArray& other) : data(new int[other.size]), size(other.size) {
        std::copy(other.data, other.data + size, data);
        std::cout << "Costruttore di copia chiamato" << std::endl;
    }

    MyArray& operator=(const MyArray& other) {
        if (this == &other) return *this;
        delete[] data;
        size = other.size;
        data = new int[size];
        std::copy(other.data, other.data + size, data);
        std::cout << "Operatore di assegnazione di copia chiamato" << std::endl;
        return *this;
    }

    MyArray(MyArray&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Costruttore di spostamento chiamato" << std::endl;
    }

    MyArray& operator=(MyArray&& other) noexcept {
        if (this == &other) return *this;
        delete[] data;
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
        std::cout << "Operatore di assegnazione di spostamento chiamato" << std::endl;
        return *this;
    }

    ~MyArray() {
        delete[] data;
        std::cout << "Distruttore chiamato" << std::endl;
    }

    void print() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyArray arr1(10);
    MyArray arr2 = std::move(arr1); // Costruttore di spostamento chiamato
    arr2.print();
    arr1.print(); // Non stampa nulla, arr1 è stato spostato

    return 0;
}