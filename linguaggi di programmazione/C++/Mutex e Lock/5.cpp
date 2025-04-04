// Creare un programma che utilizza `std::timed_mutex` per tentare di acquisire un lock con un timeout.

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void attemptLock(int threadID) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Thread " << threadID << " got the lock" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        tmtx.unlock();
    } else {
        std::cout << "Thread " << threadID << " could not get the lock" << std::endl;
    }
}

int main() {
    std::thread t1(attemptLock, 1);
    std::thread t2(attemptLock, 2);

    t1.join();
    t2.join();

    return 0;
}