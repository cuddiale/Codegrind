// Creare un programma che utilizza un future per ottenere il risultato di un calcolo effettuato in un thread separato.

#include <iostream>
#include <thread>
#include <future>

int calcolo(int x) {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return x * x;
}

int main() {
    std::future<int> risultato = std::async(std::launch::async, calcolo, 5);
    std::cout << "In attesa del risultato...\n";
    std::cout << "Risultato: " << risultato.get() << std::endl;
    return 0;
}