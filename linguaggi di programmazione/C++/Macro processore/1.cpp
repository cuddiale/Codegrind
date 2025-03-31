// Definire una macro per il valore di Pi greco e usarla in un programma per calcolare la circonferenza di un cerchio.

#include <iostream>

#define PI 3.14159

int main() {
    double raggio = 5.0;
    double circonferenza = 2 * PI * raggio;
    std::cout << "Circonferenza: " << circonferenza << std::endl;
    return 0;
}