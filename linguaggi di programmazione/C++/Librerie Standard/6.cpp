// Creare una coda di numeri interi, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <queue>

int main() {
    std::queue<int> coda;

    coda.push(1);
    coda.push(2);
    coda.push(3);

    while (!coda.empty()) {
        std::cout << coda.front() << " ";
        coda.pop();
    }
    std::cout << std::endl;

    return 0;
}