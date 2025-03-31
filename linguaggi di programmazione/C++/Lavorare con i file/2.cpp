// Scrivi un programma in C++ che legga il contenuto di un file di testo e lo visualizzi a schermo.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}