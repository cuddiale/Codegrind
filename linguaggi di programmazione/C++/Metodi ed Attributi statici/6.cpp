// Creare una classe con un attributo statico complesso (ad esempio, un std::vector) e un metodo per manipolarlo.

#include <iostream>
#include <vector>

class Collezione {
private:
    static std::vector<int> valori;
public:
    static void aggiungiValore(int valore) {
        valori.push_back(valore);
    }
    static void stampaValori() {
        for (int valore : valori) {
            std::cout << valore << " ";
        }
        std::cout << std::endl;
    }
};

std::vector<int> Collezione::valori;

int main() {
    Collezione::aggiungiValore(1);
    Collezione::aggiungiValore(2);
    Collezione::aggiungiValore(3);
    Collezione::stampaValori();
    return 0;
}