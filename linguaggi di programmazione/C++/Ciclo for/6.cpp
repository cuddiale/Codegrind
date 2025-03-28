// Chiedi all'utente di inserire una stringa e utilizza un ciclo for per contare il numero di vocali presenti.

#include <iostream>
using namespace std;

int main() {
    string frase;
    cout << "Inserisci una frase: ";
    getline(cin, frase);

    int conteggioVocali = 0;

    for (int i = 0; i < frase.length(); i++) {
        char carattere = tolower(frase[i]);
        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u') {
            conteggioVocali++;
        }
    }

    cout << "Il numero di vocali nella frase inserita è: " << conteggioVocali << endl;

    return 0;
}
