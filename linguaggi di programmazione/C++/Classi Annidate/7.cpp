// Creare una classe annidata per rappresentare una matrice con un elemento.

#include <iostream>

class Matrice {
private:
    int righe, colonne;

public:
    Matrice(int r, int c) : righe(r), colonne(c) {}

    class Elemento {
    private:
        int valore;
        int riga, colonna;
    public:
        Elemento(int v, int r, int c) : valore(v), riga(r), colonna(c) {}
        void stampa() {
            std::cout << "Valore: " << valore << " in posizione (" << riga << ", " << colonna << ")" << std::endl;
        }
    };

    void stampaDimensioni() {
        std::cout << "Dimensioni matrice: " << righe << "x" << colonne << std::endl;
    }
};

int main() {
    Matrice matrice(3, 3);
    Matrice::Elemento elemento(5, 1, 1);
    matrice.stampaDimensioni();
    elemento.stampa();
    return 0;
}