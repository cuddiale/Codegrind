// Creare un programma che utilizza un promise per inviare il risultato di un calcolo da un thread a un altro.

#include <iostream>
#include <thread>
#include <future>

void calcolo(std::promise<int>&& prom, int x) {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    prom.set_value(x * x);
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();
    std::thread t(calcolo, std::move(prom), 5);
    std::cout << "In attesa del risultato...\n";
    std::cout << "Risultato: " << fut.get() << std::endl;
    t.join();
    return 0;
}