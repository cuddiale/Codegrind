// Trova la posizione di un elemento in un array di stringhe:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomi[] = {"Marco", "Paola", "Luca", "Giulia", "Francesca"};
    int lunghezza = sizeof(nomi) / sizeof(nomi[0]);
    string nomeDaTrovare = "Luca";
    int posizione = -1;

    for (int i = 0; i < lunghezza; i++) {
        if (nomi[i] == nomeDaTrovare) {
            posizione = i;
            break;
        }
    }

    if (posizione != -1) {
        cout << "Il nome " << nomeDaTrovare << " si trova nella posizione " << posizione << " dell'array." << endl;
    } else {
        cout << "Il nome " << nomeDaTrovare << " non è presente nell'array." << endl;
    }

    return 0;
}