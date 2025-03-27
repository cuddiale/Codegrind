// Utilizzare l'operatore `<<` per eseguire uno shift a sinistra su un numero.

#include <iostream>

int main() {
    int a = 3; // 0011 in binario
    int risultato = a << 2; // 1100 in binario
    std::cout << "Risultato di a << 2: " << risultato << std::endl; // 12 in decimale
    return 0;
}