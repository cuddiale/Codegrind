// Creare una classe annidata per rappresentare una casa con una stanza.

#include <iostream>
#include <string>

class Casa {
private:
    std::string indirizzo;

public:
    Casa(std::string i) : indirizzo(i) {}

    void stampa() {
        std::cout << "Indirizzo: " << indirizzo << std::endl;
    }

    class Stanza {
    private:
        std::string nome;
        int metriQuadri;
    public:
        Stanza(std::string n, int mq) : nome(n), metriQuadri(mq) {}
        void stampa() {
            std::cout << "Stanza: " << nome << ", Metri quadri: " << metriQuadri << std::endl;
        }
    };
};

int main() {
    Casa casa("Via Roma, 1");
    Casa::Stanza stanza("Camera da letto", 20);
    casa.stampa();
    stanza.stampa();
    return 0;
}