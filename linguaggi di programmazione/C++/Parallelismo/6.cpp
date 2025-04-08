// Creare un programma che utilizza `std::future` e `std::async` per eseguire una funzione in modo asincrono e ottenere il risultato.

#include <iostream>
#include <future>

int calcolaSomma(int a, int b) {
    return a + b;
}

int main() {
    std::future<int> risultato = std::async(std::launch::async, calcolaSomma, 3, 4);
    std::cout << "Somma: " << risultato.get() << std::endl; // Attende il risultato della funzione asincrona
    return 0;
}