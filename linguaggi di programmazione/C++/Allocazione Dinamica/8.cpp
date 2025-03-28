// Allocare dinamicamente una matrice triangolare inferiore.

#include <iostream>

int main() {
    int n = 5;
    int** triangolare = new int*[n];
    for (int i = 0; i < n; ++i) {
        triangolare[i] = new int[i + 1];
        for (int j = 0; j <= i; ++j) {
            triangolare[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << triangolare[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n; ++i) {
        delete[] triangolare[i];
    }
    delete[] triangolare;
    return 0;
}