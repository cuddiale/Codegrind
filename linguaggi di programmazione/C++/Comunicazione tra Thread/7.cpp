// Creare un programma che utilizza un barrier per sincronizzare l'inizio di più thread.

#include <iostream>
#include <thread>
#include <barrier>

std::barrier barriera(3);

void funzione(int id) {
    std::cout << "Thread " << id << " pronto\n";
    barriera.arrive_and_wait();
    std::cout << "Thread " << id << " in esecuzione\n";
}

int main() {
    std::thread t1(funzione, 1);
    std::thread t2(funzione, 2);
    std::thread t3(funzione, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}