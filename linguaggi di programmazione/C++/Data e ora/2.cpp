// Scrivi un programma che chieda all'utente di inserire una data nel formato "gg/mm/aaaa" e stampi il giorno, il mese e l'anno separatamente.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string data;

    cout << "Inserisci una data nel formato gg/mm/aaaa: ";
    cin >> data;

    // Estrai giorno, mese e anno dalla stringa
    string giorno = data.substr(0, 2);
    string mese = data.substr(3, 2);
    string anno = data.substr(6, 4);

    cout << "Giorno: " << giorno << endl;
    cout << "Mese: " << mese << endl;
    cout << "Anno: " << anno << endl;

    return 0;
}