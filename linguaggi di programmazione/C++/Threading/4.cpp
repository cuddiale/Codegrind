// Creare un programma che avvia più thread per eseguire una funzione in parallelo.

#include <iostream>
#include <thread>
#include <vector>

void stampaMessaggio(int id) {
    std::cout << "Thread " << id << " in esecuzione" << std::endl;
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 5; ++i) {
        threads.push_back(std::thread(stampaMessaggio, i));
    }

    for (auto& t : threads) {
        t.join(); // Attende la terminazione di ciascun thread
    }

    return 0;
}