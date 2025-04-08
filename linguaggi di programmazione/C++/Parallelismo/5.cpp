// Creare un programma che utilizza `std::mutex` per sincronizzare l'accesso a una variabile condivisa tra più thread.

#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex mtx;

void incrementa() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter;
    }
}

int main() {
    std::thread t1(incrementa);
    std::thread t2(incrementa);

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter << std::endl;

    return 0;
}