// Creare una classe template per una coppia di valori e stamparli.

#include <iostream>

template <typename T1, typename T2>
class Coppia {
private:
    T1 primo;
    T2 secondo;
public:
    Coppia(T1 p, T2 s) : primo(p), secondo(s) {}
    void stampa() {
        std::cout << "Primo: " << primo << ", Secondo: " << secondo << std::endl;
    }
};

int main() {
    Coppia<int, double> c1(1, 2.5);
    Coppia<std::string, int> c2("Ciao", 100);
    c1.stampa();
    c2.stampa();
    return 0;
}