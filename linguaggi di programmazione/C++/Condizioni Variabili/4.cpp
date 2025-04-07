// Utilizzare una condition variable per implementare un ciclo produttore-consumatore con più produttori e consumatori.

#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

std::queue<int> coda;
std::mutex mtx;
std::condition_variable cv;
const int MAX_CODA = 10;
bool done = false;

void produttore(int id) {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return coda.size() < MAX_CODA; });
        coda.push(i);
        std::cout << "Produttore " << id << " ha prodotto: " << i << std::endl;
        cv.notify_all();
    }
}

void consumatore(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return !coda.empty() || done; });
        if (done && coda.empty()) break;
        int val = coda.front();
        coda.pop();
        std::cout << "Consumatore " << id << " ha consumato: " << val << std::endl;
        cv.notify_all();
    }
}

int main() {
    std::thread produttori[3], consumatori[3];
    for (int i = 0; i < 3; ++i) {
        produttori[i] = std::thread(produttore, i+1);
        consumatori[i] = std::thread(consumatore, i+1);
    }

    for (int i = 0; i < 3; ++i) {
        produttori[i].join();
    }

    {
        std::unique_lock<std::mutex> lock(mtx);
        done = true;
        cv.notify_all();
    }

    for (int i = 0; i < 3; ++i) {
        consumatori[i].join();
    }

    return 0;
}