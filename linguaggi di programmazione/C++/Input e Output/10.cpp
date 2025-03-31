// Scrivere un programma che legge una stringa dall'utente e la scrive su un file, poi legge il contenuto del file e lo stampa.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string testo;
    std::cout << "Inserisci una stringa: ";
    std::getline(std::cin, testo);

    std::ofstream fileOut("output.txt");
    if (fileOut.is_open()) {
        fileOut << testo;
        fileOut.close();
    } else {
        std::cerr << "Impossibile aprire il file per scrittura" << std::endl;
    }

    std::ifstream fileIn("output.txt");
    if (fileIn.is_open()) {
        std::string contenuto;
        std::getline(fileIn, contenuto);
        std::cout << "Contenuto del file: " << contenuto << std::endl;
        fileIn.close();
    } else {
        std::cerr << "Impossibile aprire il file per lettura" << std::endl;
    }

    return 0;
}