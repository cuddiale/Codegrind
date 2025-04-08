// Creare un programma che utilizza un latch per aspettare la fine dell'esecuzione di più thread.

#include <iostream>
#include <thread>
#include <latch>

std::latch latch(3);

void funzione(int id) {
    std::cout << "Thread " << id << " inizia\n";
    std::this_thread::sleep_for(std::chrono::seconds(id));
    std::cout << "Thread " << id << " termina\n";
    latch.count_down();
}

int main() {
    std::thread t1(funzione, 1);
    std::thread t2(funzione, 2);
    std::thread t3(funzione, 3);

    latch.wait();
    std::cout << "Tutti i thread sono terminati\n";

    t1.join();
    t2.join();
    t3.join();

    return 0;
}