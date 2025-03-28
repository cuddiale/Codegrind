// Dichiarare un puntatore a int e assegnargli l'indirizzo di un array di interi. Stampare gli elementi dell'array tramite il puntatore utilizzando un ciclo while.

#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int* puntatore = array;

    int i = 0;
    while (i < 5) {
        cout << "Elemento " << i + 1 << ": " << *(puntatore + i) << endl;
        i++;
    }

    return 0;
}
