// Utilizzare l'operatore `|` per eseguire un'operazione OR bit a bit tra due numeri.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int b = 10; // 1010 in binario
    int risultato = a | b; // 1110 in binario
    std::cout << "Risultato di a | b: " << risultato << std::endl; // 14 in decimale
    return 0;
}