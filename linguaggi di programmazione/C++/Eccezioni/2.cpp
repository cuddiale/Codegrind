// Creare una funzione che lancia un'eccezione quando si accede a un indice fuori limite di un array.

#include <iostream>
#include <stdexcept>

int getElement(int* arr, int size, int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Indice fuori limite");
    }
    return arr[index];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    try {
        std::cout << getElement(arr, 5, 2) << std::endl;
        std::cout << getElement(arr, 5, 10) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}