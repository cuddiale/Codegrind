// Creare un programma che utilizza un condition variable per sincronizzare l'accesso a una coda tra un thread produttore e un thread consumatore.

#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

std::queue<int> coda;
std::mutex mtx;
std::condition_variable cv;
bool done = false;

void produttore() {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        coda.push(i);
        std::cout << "Prodotto: " << i << std::endl;
        cv.notify_one();
    }
    std::unique_lock<std::mutex> lock(mtx);
    done = true;
    cv.notify_one();
}

void consumatore() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return !coda.empty() || done; });
        while (!coda.empty()) {
            int val = coda.front();
            coda.pop();
            std::cout << "Consumato: " << val << std::endl;
        }
        if (done && coda.empty()) break;
    }
}

int main() {
    std::thread t1(produttore);
    std::thread t2(consumatore);

    t1.join();
    t2.join();

    return 0;
}
