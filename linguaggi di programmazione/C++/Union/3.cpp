// Creare una `union` che contiene una struct e un array di caratteri. Utilizzare la union per assegnare e stampare i valori della struct e dell'array di caratteri.

#include <iostream>
#include <cstring>

struct Point {
    int x;
    int y;
};

union MyUnion {
    Point p;
    char str[8];
};

int main() {
    MyUnion u;

    u.p = {10, 20};
    std::cout << "Point: (" << u.p.x << ", " << u.p.y << ")" << std::endl;

    strcpy(u.str, "Hello");
    std::cout << "Stringa: " << u.str << std::endl;

    return 0;
}