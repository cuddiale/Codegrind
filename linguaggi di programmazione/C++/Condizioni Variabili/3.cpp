// Utilizzare una condition variable per implementare un semplice semaforo.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

class Semaforo {
private:
    std::mutex mtx;
    std::condition_variable cv;
    int contatore;
public:
    Semaforo(int valore_iniziale) : contatore(valore_iniziale) {}

    void wait() {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [this] { return contatore > 0; });
        --contatore;
    }

    void signal() {
        std::unique_lock<std::mutex> lock(mtx);
        ++contatore;
        cv.notify_one();
    }
};

Semaforo semaforo(1);

void funzione1() {
    semaforo.wait();
    std::cout << "Funzione 1 in esecuzione" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    semaforo.signal();
}

void funzione2() {
    semaforo.wait();
    std::cout << "Funzione 2 in esecuzione" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    semaforo.signal();
}

int main() {
    std::thread t1(funzione1);
    std::thread t2(funzione2);

    t1.join();
    t2.join();

    return 0;
}