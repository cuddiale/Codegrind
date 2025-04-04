// Utilizzare una condition variable per sincronizzare l'accesso a una risorsa condivisa tra due thread.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool pronto = false;
int dato = 0;

void produttore() {
    std::unique_lock<std::mutex> lock(mtx);
    dato = 42;
    pronto = true;
    cv.notify_one();
}

void consumatore() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return pronto; });
    std::cout << "Dato ricevuto: " << dato << std::endl;
}

int main() {
    std::thread t1(produttore);
    std::thread t2(consumatore);

    t1.join();
    t2.join();

    return 0;
}