// Utilizzare una condition variable per implementare un sistema di lettura e scrittura con priorità ai lettori.

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int lettori = 0;
bool scrittura_in_corso = false;

void lettore(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return !scrittura_in_corso; });
    ++lettori;
    lock.unlock();

    std::cout << "Lettore " << id << " sta leggendo.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    lock.lock();
    --lettori;
    if (lettori == 0) {
        cv.notify_all();
    }
    lock.unlock();
}

void scrittore(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return !scrittura_in_corso && lettori == 0; });
    scrittura_in_corso = true;
    lock.unlock();

    std::cout << "Scrittore " << id << " sta scrivendo.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    lock.lock();
    scrittura_in_corso = false;
    cv.notify_all();
    lock.unlock();
}

int main() {
    std::thread lettori[3], scrittori[2];

    for (int i = 0; i < 3; ++i) {
        lettori[i] = std::thread(lettore, i+1);
    }
    for (int i = 0; i < 2; ++i) {
        scrittori[i] = std::thread(scrittore, i+1);
    }

    for (int i = 0; i < 3; ++i) {
        lettori[i].join();
    }
    for (int i = 0; i < 2; ++i) {
        scrittori[i].join();
    }

    return 0;
}