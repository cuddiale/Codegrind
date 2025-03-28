// Utilizzare un `anonymous union` all'interno di una struct per memorizzare dati alternativi.

#include <iostream>

struct MyStruct {
    union {
        int i;
        float f;
    };
};

int main() {
    MyStruct s;
    s.i = 42;
    std::cout << "Intero: " << s.i << std::endl;

    s.f = 3.14f;
    std::cout << "Float: " << s.f << std::endl;

    return 0;
}