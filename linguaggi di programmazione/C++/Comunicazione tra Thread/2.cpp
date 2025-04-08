// Creare un programma che utilizza un condition variable per sincronizzare due thread.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool pronto = false;

void funzione1() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Thread 1 in attesa...\n";
    cv.wait(lock, []{ return pronto; });
    std::cout << "Thread 1 riprende l'esecuzione.\n";
}

void funzione2() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::unique_lock<std::mutex> lock(mtx);
    pronto = true;
    std::cout << "Thread 2 segnala il thread 1.\n";
    cv.notify_one();
}

int main() {
    std::thread t1(funzione1);
    std::thread t2(funzione2);

    t1.join();
    t2.join();

    return 0;
}