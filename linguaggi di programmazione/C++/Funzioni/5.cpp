// Scrivi una funzione che prenda in input un numero intero e restituisca il suo quadrato.

#include <iostream>
using namespace std;

int quadrato(int num) {
    return num * num;
}

int main() {
    int numero = 5;

    int risultato = quadrato(numero);

    cout << "Il quadrato di " << numero << " è: " << risultato << endl;

    return 0;
}
