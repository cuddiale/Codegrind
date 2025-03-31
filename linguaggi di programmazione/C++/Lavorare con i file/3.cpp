// Scrivi un programma in C++ che conti il numero di parole presenti in un file di testo.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (file.is_open()) {
        int wordCount = 0;
        string word;
        while (file >> word) {
            wordCount++;
        }
        file.close();
        cout << "Numero di parole nel file: " << wordCount << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}