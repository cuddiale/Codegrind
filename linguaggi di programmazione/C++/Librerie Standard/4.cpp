// Leggere una stringa dall'utente e stamparla.

#include <iostream>
#include <string>

int main() {
    std::string parola;
    std::cout << "Inserisci una parola: ";
    std::cin >> parola;
    std::cout << "Hai inserito: " << parola << std::endl;

    return 0;
}