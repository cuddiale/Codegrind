// Confrontare il lifetime delle variabili automatiche e dinamiche.

#include <iostream>

void automaticVar() {
    int a = 10;
    std::cout << "Automatic Variable: " << a << std::endl;
}

void dynamicVar() {
    int* p = new int(20);
    std::cout << "Dynamic Variable: " << *p << std::endl;
    delete p;
}

int main() {
    automaticVar();
    // a non è accessibile qui
    dynamicVar();
    // p non è accessibile qui
    return 0;
}