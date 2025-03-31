// Crea una classe Libro che rappresenti un libro con titolo, autore e anno di pubblicazione. Aggiungi i metodi per impostare e ottenere le informazioni del libro.

#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titolo;
    string autore;
    int annoPubblicazione;

public:
    void setTitolo(string newTitolo) {
        titolo = newTitolo;
    }

    void setAutore(string newAutore) {
        autore = newAutore;
    }

    void setAnnoPubblicazione(int newAnnoPubblicazione) {
        annoPubblicazione = newAnnoPubblicazione;
    }

    string getTitolo() {
        return titolo;
    }

    string getAutore() {
        return autore;
    }

    int getAnnoPubblicazione() {
        return annoPubblicazione;
    }
};

int main() {
    Libro libro;
    libro.setTitolo("Il signore degli anelli");
    libro.setAutore("J.R.R. Tolkien");
    libro.setAnnoPubblicazione(1954);

    cout << "Titolo del libro: " << libro.getTitolo() << endl;
    cout << "Autore del libro: " << libro.getAutore() << endl;
    cout << "Anno di pubblicazione: " << libro.getAnnoPubblicazione() << endl;

    return 0;
}
