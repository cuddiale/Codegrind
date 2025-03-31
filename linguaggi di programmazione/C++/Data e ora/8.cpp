// Scrivi un programma che verifichi se un anno inserito dall'utente è un anno bisestile o meno, utilizzando la libreria Chrono di C++.

#include <iostream>
#include <chrono>
using namespace std;

bool isBisestile(int anno) {
    // Crea un oggetto `year` con l'anno specificato
    chrono::year year(anno);

    // Verifica se l'anno è bisestile
    return chrono::year::is_leap(year);
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
