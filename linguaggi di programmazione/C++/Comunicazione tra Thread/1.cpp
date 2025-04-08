// Creare due thread che stampano alternativamente numeri pari e dispari utilizzando mutex per la sincronizzazione.

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
bool pariTurno = true;

void stampaPari() {
    for (int i = 0; i <= 10; i += 2) {
        std::unique_lock<std::mutex> lock(mtx);
        while (!pariTurno) {
            lock.unlock();
            std::this_thread::yield();
            lock.lock();
        }
        std::cout << i << " ";
        pariTurno = false;
    }
}

void stampaDispari() {
    for (int i = 1; i < 10; i += 2) {
        std::unique_lock<std::mutex> lock(mtx);
        while (pariTurno) {
            lock.unlock();
            std::this_thread::yield();
            lock.lock();
        }
        std::cout << i << " ";
        pariTurno = true;
    }
}

int main() {
    std::thread t1(stampaPari);
    std::thread t2(stampaDispari);

    t1.join();
    t2.join();

    std::cout << std::endl;
    return 0;
}