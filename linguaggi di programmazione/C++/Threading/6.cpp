// Creare un programma che utilizza `std::condition_variable` per sincronizzare due thread.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void print_id(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return ready; });
    std::cout << "Thread " << id << std::endl;
}

void go() {
    std::unique_lock<std::mutex> lock(mtx);
    ready = true;
    cv.notify_all();
}

int main() {
    std::thread threads[5];
    for (int i = 0; i < 5; ++i) {
        threads[i] = std::thread(print_id, i);
    }

    std::cout << "Ready... Set... Go!" << std::endl;
    go();

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}