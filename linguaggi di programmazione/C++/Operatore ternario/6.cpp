// Chiedi all'utente di inserire un carattere e stampa se è una lettera maiuscola, una lettera minuscola o un numero utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    char carattere;
    cout << "Inserisci un carattere: ";
    cin >> carattere;

    string risultato = (carattere >= 'A' && carattere <= 'Z') ? "Il carattere è una lettera maiuscola." :
                       (carattere >= 'a' && carattere <= 'z') ? "Il carattere è una lettera minuscola." :
                       (carattere >= '0' && carattere <= '9') ? "Il carattere è un numero." :
                       "Il carattere non è valido.";
    cout << risultato << endl;

    return 0;
}