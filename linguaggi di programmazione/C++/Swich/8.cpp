// Chiedi all'utente di inserire una lettera e controlla se è una vocale o una consonante utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    char lettera;
    cout << "Inserisci una lettera: ";
    cin >> lettera;

    switch (lettera) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "La lettera inserita è una vocale." << endl;
            break;
        default:
            cout << "La lettera inserita è una consonante." << endl;
            break;
    }

    return 0;
}