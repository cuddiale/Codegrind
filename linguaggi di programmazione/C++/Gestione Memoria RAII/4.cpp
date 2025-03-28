// Usare RAII per gestire il locking e unlocking di un mutex.

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void stampa() {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread ID: " << std::this_thread::get_id() << " sta eseguendo" << std::endl;
}

int main() {
    std::thread t1(stampa);
    std::thread t2(stampa);
    t1.join();
    t2.join();
    return 0;
}