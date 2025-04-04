// Creare una classe template per un array dinamico con operazioni di aggiunta e accesso.

#include <iostream>

template <typename T>
class ArrayDinamico {
private:
    T* dati;
    std::size_t dimensione;
public:
    ArrayDinamico(std::size_t dim) : dimensione(dim) {
        dati = new T[dim];
    }
    ~ArrayDinamico() {
        delete[] dati;
    }
    void set(std::size_t index, T val) {
        if (index >= dimensione) {
            throw std::out_of_range("Indice fuori limite");
        }
        dati[index] = val;
    }
    T get(std::size_t index) const {
        if (index >= dimensione) {
            throw std::out_of_range("Indice fuori limite");
        }
        return dati[index];
    }
    std::size_t size() const {
        return dimensione;
    }
};

int main() {
    ArrayDinamico<int> arr(5);
    for (std::size_t i = 0; i < arr.size(); ++i) {
        arr.set(i, i + 1);
    }
    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << "arr[" << i << "] = " << arr.get(i) << std::endl;
    }
    return 0;
}