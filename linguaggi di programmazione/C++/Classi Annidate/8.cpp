// Creare una classe annidata per rappresentare un libro con un autore.

#include <iostream>
#include <string>

class Libro {
private:
    std::string titolo;
    int pagine;

public:
    Libro(std::string t, int p) : titolo(t), pagine(p) {}

    void stampa() {
        std::cout << "Titolo: " << titolo << ", Pagine: " << pagine << std::endl;
    }

    class Autore {
    private:
        std::string nome;
    public:
        Autore(std::string n) : nome(n) {}
        void stampa() {
            std::cout << "Autore: " << nome << std::endl;
        }
    };
};

int main() {
    Libro libro("Il Signore degli Anelli", 1000);
    Libro::Autore autore("J.R.R. Tolkien");
    libro.stampa();
    autore.stampa();
    return 0;
}