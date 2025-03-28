// Verifica se un numero inserito dall'utente è divisibile per 7. Se lo è, interrompi il ciclo utilizzando l'istruzione "break" con il ciclo do-while:

#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Inserisci un numero: ";
        cin >> numero;

        if (numero % 7 == 0)
            break;
    } while (true);

    cout << "Il numero inserito è divisibile per 7." << endl;

    return 0;
}