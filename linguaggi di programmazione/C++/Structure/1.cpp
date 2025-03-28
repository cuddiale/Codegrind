// Definisci una struttura "Persona" con i campi "nome" e "età" e crea una variabile di tipo "Persona":

#include <iostream>
using namespace std;

struct Persona {
    string nome;
    int eta;
};

int main() {
    Persona persona1;
    persona1.nome = "Mario";
    persona1.eta = 30;

    cout << "Nome: " << persona1.nome << endl;
    cout << "Età: " << persona1.eta << endl;

    return 0;
}
