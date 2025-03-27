// Utilizzare l'operatore `>>` per eseguire uno shift a destra su un numero.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int risultato = a >> 2; // 0011 in binario
    std::cout << "Risultato di a >> 2: " << risultato << std::endl; // 3 in decimale
    return 0;
}