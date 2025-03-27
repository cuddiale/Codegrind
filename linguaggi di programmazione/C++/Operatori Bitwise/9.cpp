// Utilizzare l'operatore `^` per invertire il quarto bit di un numero.

#include <iostream>

int main() {
    int a = 10; // 1010 in binario
    int mask = 1 << 3; // 1000 in binario
    int risultato = a ^ mask; // 1010 ^ 1000 = 0010 in binario
    std::cout << "Risultato di a con il quarto bit invertito: " << risultato << std::endl; // 2 in decimale
    return 0;
}