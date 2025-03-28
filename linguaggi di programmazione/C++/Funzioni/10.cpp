// Scrivi una funzione che prenda in input una matrice di interi e il numero di righe e colonne, e stampi tutti gli elementi della matrice.

#include <iostream>
using namespace std;

void stampaMatrice(int matrice[][3], int righe, int colonne) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int NUM_RIGHE = 3;
    const int NUM_COLONNE = 3;
    int matrice[NUM_RIGHE][NUM_COLONNE] = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    cout << "Elementi della matrice:" << endl;
    stampaMatrice(matrice, NUM_RIGHE, NUM_COLONNE);

    return 0;
}
