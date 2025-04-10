// Misurare il tempo di esecuzione di un blocco di codice usando std::chrono.

#include <iostream>
#include <chrono>
#include <thread>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> durata = end - start;

    std::cout << "Durata: " << durata.count() << " secondi" << std::endl;

    return 0;
}