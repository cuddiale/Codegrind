// Implementare una coda thread-safe utilizzando condition variables.

#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

template <typename T>
class CodaThreadSafe {
private:
    std::queue<T> coda;
    std::mutex mtx;
    std::condition_variable cv;
public:
    void push(T val) {
        std::unique_lock<std::mutex> lock(mtx);
        coda.push(val);
        cv.notify_one();
    }

    T pop() {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [this]{ return !coda.empty(); });
        T val = coda.front();
        coda.pop();
        return val;
    }
};

CodaThreadSafe<int> coda;

void produttore() {
    for (int i = 0; i < 5; ++i) {
        coda.push(i);
        std::cout << "Prodotto: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void consumatore() {
    for (int i = 0; i < 5; ++i) {
        int val = coda.pop();
        std::cout << "Consumato: " << val << std::endl;
    }
}

int main() {
    std::thread t1(produttore);
    std::thread t2(consumatore);

    t1.join();
    t2.join();

    return 0;
}