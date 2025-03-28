// Definisci una struttura "Auto" con i campi "marca", "modello" e "anno" e crea un'array di auto:

#include <iostream>
using namespace std;

struct Auto {
    string marca;
    string modello;
    int anno;
};

int main() {
    const int NUM_AUTO = 2;
    Auto garage[NUM_AUTO];

    garage[0].marca = "Fiat";
    garage[0].modello = "Panda";
    garage[0].anno = 2010;

    garage[1].marca = "Ford";
    garage[1].modello = "Focus";
    garage[1].anno = 2015;

    for (int i = 0; i < NUM_AUTO; i++) {
        cout << "Auto " << i + 1 << endl;
        cout << "Marca: " << garage[i].marca << endl;
        cout << "Modello: " << garage[i].modello << endl;
        cout << "Anno: " << garage[i].anno << endl;
        cout << endl;
    }

    return 0;
}
