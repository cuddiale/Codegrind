// Creare un programma che utilizza `std::mutex` per proteggere una sezione critica durante l'accesso a una risorsa condivisa.

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

std::vector<int> data;
std::mutex mtx;

void addData(int value) {
    std::lock_guard<std::mutex> lock(mtx);
    data.push_back(value);
}

int main() {
    std::thread t1(addData, 1);
    std::thread t2(addData, 2);

    t1.join();
    t2.join();

    for (int v : data) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}