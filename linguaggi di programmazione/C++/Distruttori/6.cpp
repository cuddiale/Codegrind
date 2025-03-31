// Creare una classe con un distruttore che gestisce la deallocazione di risorse multiple.

#include <iostream>

class GestoreRisorse {
private:
    int* memoria1;
    int* memoria2;
public:
    GestoreRisorse() {
        memoria1 = new int[10];
        memoria2 = new int[20];
        std::cout << "Risorse allocate" << std::endl;
    }
    ~GestoreRisorse() {
        delete[] memoria1;
        delete[] memoria2;
        std::cout << "Risorse deallocate" << std::endl;
    }
};

int main() {
    GestoreRisorse gr;
    return 0;
}