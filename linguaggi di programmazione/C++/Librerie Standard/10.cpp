// Scrivere e leggere dati da un file usando std::fstream.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fileOut("esempio.txt");
    if (fileOut.is_open()) {
        fileOut << "Ciao, mondo!" << std::endl;
        fileOut.close();
    }

    std::ifstream fileIn("esempio.txt");
    if (fileIn.is_open()) {
        std::string linea;
        while (std::getline(fileIn, linea)) {
            std::cout << linea << std::endl;
        }
        fileIn.close();
    }

    return 0;
}