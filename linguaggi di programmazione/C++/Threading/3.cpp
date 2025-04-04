// Creare un programma che avvia un thread che esegue una funzione membro di una classe.


#include <iostream>
#include <thread>

class MyClass {
public:
    void stampaMessaggio() {
        std::cout << "Ciao dalla funzione membro!" << std::endl;
    }
};

int main() {
    MyClass obj;
    std::thread t(&MyClass::stampaMessaggio, &obj);
    t.join(); // Attende la terminazione del thread
    return 0;
}
