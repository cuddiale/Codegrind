// Allocare dinamicamente una matrice 3x3 e inizializzarla con valori incrementali.

#include <iostream>

int main() {
    int** matrix = new int*[3];
    for (int i = 0; i < 3; ++i) {
        matrix[i] = new int[3];
    }
    int val = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = val++;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 3; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}