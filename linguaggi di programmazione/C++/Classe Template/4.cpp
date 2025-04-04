// Creare una classe template per una coda (queue) con operazioni enqueue e dequeue.

#include <iostream>
#include <queue>

template <typename T>
class Coda {
private:
    std::queue<T> dati;
public:
    void enqueue(T val) {
        dati.push(val);
    }
    T dequeue() {
        if (dati.empty()) {
            throw std::out_of_range("Coda vuota");
        }
        T val = dati.front();
        dati.pop();
        return val;
    }
    bool vuota() const {
        return dati.empty();
    }
};

int main() {
    Coda<int> coda;
    coda.enqueue(1);
    coda.enqueue(2);
    coda.enqueue(3);
    std::cout << "Dequeue: " << coda.dequeue() << std::endl;
    std::cout << "Dequeue: " << coda.dequeue() << std::endl;
    std::cout << "Dequeue: " << coda.dequeue() << std::endl;
    return 0;
}