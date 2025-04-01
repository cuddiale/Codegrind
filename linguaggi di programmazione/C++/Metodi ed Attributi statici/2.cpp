// Creare una classe con un metodo statico che stampa un messaggio.

#include <iostream>

class Messaggio {
public:
    static void stampa() {
        std::cout << "Ciao, mondo!" << std::endl;
    }
};

int main() {
    Messaggio::stampa();
    return 0;
}