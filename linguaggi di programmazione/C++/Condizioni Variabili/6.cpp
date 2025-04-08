// Utilizzare una condition variable per implementare una barriera di sincronizzazione.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

const int NUM_THREAD = 5;
int count = 0;
std::mutex mtx;
std::condition_variable cv;

void threadFunzione(int id) {
    std::cout << "Thread " << id << " pronto\n";

    std::unique_lock<std::mutex> lock(mtx);
    ++count;
    if (count == NUM_THREAD) {
        cv.notify_all();
    } else {
        cv.wait(lock, []{ return count == NUM_THREAD; });
    }

    std::cout << "Thread " << id << " inizia\n";
}

int main() {
    std::thread threads[NUM_THREAD];

    for (int i = 0; i < NUM_THREAD; ++i) {
        threads[i] = std::thread(threadFunzione, i + 1);
    }

    for (int i = 0; i < NUM_THREAD; ++i) {
        threads[i].join();
    }

    return 0;
}