// Creare un programma che utilizza un atomic bool per controllare la terminazione di un thread da un altro thread.

#include <iostream>
#include <thread>
#include <atomic>

std::atomic<bool> running(true);

void funzione() {
    while (running) {
        std::cout << "Thread in esecuzione...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Thread terminato.\n";
}

int main() {
    std::thread t(funzione);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    running = false;
    t.join();
    return 0;
}