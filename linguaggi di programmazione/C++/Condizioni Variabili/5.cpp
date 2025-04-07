// Utilizzare una condition variable per implementare un sistema di lettori-scrittori.

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

    std::cout << "Lettore " << id << " sta leggendo." << std::endl;
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

    std::cout << "Scrittore " << id << " sta scrivendo." << std::endl;
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
``

`

</div>
</details>

### Esercizio 6

<details class="mb-10">
<summary class="cursor-pointer">Utilizzare una condition variable per sincronizzare l'accesso a un contatore condiviso tra più thread.</summary>
<div class="py-5">

```cpp
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

int contatore = 0;
std::mutex mtx;
std::condition_variable cv;

void incrementa(int id) {
    for (int i = 0; i < 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        ++contatore;
        std::cout << "Thread " << id << " incrementa a " << contatore << std::endl;
        cv.notify_all();
        cv.wait(lock, []{ return contatore % 5 == 0; });
    }
}

void stampa() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return contatore % 5 == 0 && contatore > 0; });
        std::cout << "Contatore raggiunge multiplo di 5: " << contatore << std::endl;
        if (contatore >= 20) break;
    }
}

int main() {
    std::thread t1(incrementa, 1);
    std::thread t2(incrementa, 2);
    std::thread t3(stampa);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}