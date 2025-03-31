// Scrivi un programma in C++ che copi il contenuto di un file di testo in un altro file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    if (inputFile.is_open() && outputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Contenuto copiato con successo!" << endl;
    } else {
        cout << "Impossibile aprire i file." << endl;
    }

    return 0;
}