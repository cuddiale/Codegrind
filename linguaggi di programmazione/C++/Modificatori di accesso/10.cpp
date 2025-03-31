// Crea una classe Libro con membri privati titolo e autore e un metodo pubblico stampaInformazioni che stampa le informazioni del libro.

#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titolo;
    string autore;

public:
    void stampaInformazioni() {
        cout << "Il libro \"" << titolo << "\" è stato scritto da " << autore << "." << endl;
    }
};

int main() {
    Libro l;
    l.stampaInformazioni();

    return 0;
}