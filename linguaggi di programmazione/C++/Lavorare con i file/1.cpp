// Scrivi un programma in C++ che crei un file di testo e vi scriva all'interno una frase di tua scelta.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    if (file.is_open()) {
        file << "Questa è una frase di esempio.";
        file.close();
        cout << "File creato con successo!" << endl;
    } else {
        cout << "Impossibile creare il file." << endl;
    }

    return 0;
}
