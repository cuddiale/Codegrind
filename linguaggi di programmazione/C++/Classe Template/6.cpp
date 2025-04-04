// Creare una classe template per un dizionario (mappa) semplice con operazioni di aggiunta e ricerca.

#include <iostream>
#include <map>

template <typename K, typename V>
class Dizionario {
private:
    std::map<K, V> dati;
public:
    void aggiungi(const K& chiave, const V& valore) {
        dati[chiave] = valore;
    }
    V cerca(const K& chiave) const {
        auto it = dati.find(chiave);
        if (it != dati.end()) {
            return it->second;
        } else {
            throw std::out_of_range("Chiave non trovata");
        }
    }
    bool esiste(const K& chiave) const {
        return dati.find(chiave) != dati.end();
    }
};

int main() {
    Dizionario<std::string, int> diz;
    diz.aggiungi("uno", 1);
    diz.aggiungi("due", 2);
    diz.aggiungi("tre", 3);
    std::cout << "Valore associato a 'due': " << diz.cerca("due") << std::endl;
    std::cout << "Esiste chiave 'quattro'? " << (diz.esiste("quattro") ? "Sì" : "No") << std::endl;
    return 0;
}