// Utilizzare l'operatore `&` per eseguire un'operazione AND bit a bit tra due numeri.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int b = 10; // 1010 in binario
    int risultato = a & b; // 1000 in binario
    std::cout << "Risultato di a & b: " << risultato << std::endl; // 8 in decimale
    return 0;
}