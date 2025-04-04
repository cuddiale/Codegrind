// Creare una pila di numeri interi, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <stack>

int main() {
    std::stack<int> pila;

    pila.push(1);
    pila.push(2);
    pila.push(3);

    while (!pila.empty()) {
        std::cout << pila.top() << " ";
        pila.pop();
    }
    std::cout << std::endl;

    return 0;
}