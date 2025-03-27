// Chiedi all'utente di inserire un carattere e verifica se è una lettera maiuscola, una lettera minuscola o un numero, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    char carattere;
    cout << "Inserisci un carattere: ";
    cin >> carattere;

    if (carattere >= 'A' && carattere <= 'Z') {
        cout << "Il carattere è una lettera maiuscola." << endl;
    } else if (carattere >= 'a' && carattere <= 'z') {
        cout << "Il carattere è una lettera minuscola." << endl;
    } else if (carattere >= '0' && carattere <= '9') {
        cout << "Il carattere è un numero." << endl;
    } else {
        cout << "Il carattere non è valido." << endl;
    }

    return 0;
}