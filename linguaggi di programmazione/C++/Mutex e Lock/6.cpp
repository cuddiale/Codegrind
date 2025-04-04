// Creare un programma che utilizza `std::recursive_mutex` per permettere a un thread di acquisire lo stesso mutex più volte.

#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void recursiveFunction(int count) {
    if (count > 0) {
        rmtx.lock();
        std::cout << "Lock acquired, count: " << count << std::endl;
        recursiveFunction(count - 1);
        rmtx.unlock();
        std::cout << "Lock released, count: " << count << std::endl;
    }
}

int main() {
    std::thread t(recursiveFunction, 3);
    t.join();

    return 0;
}