// Scrivi un programma che verifichi se un anno inserito dall'utente è bisestile o meno.

#include <iostream>
using namespace std;

bool isBisestile(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int anno;

    cout << "Inserisci un anno: ";
    cin >> anno;

    if (isBisestile(anno)) {
        cout << anno << " è un anno bisestile." << endl;
    } else {
        cout << anno << " non è un anno bisestile." << endl;
    }

    return 0;
}