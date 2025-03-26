// Dichiarare una variabile di tipo stringa chiamata "numero1" con valore "15". Dichiarare una variabile di tipo int chiamata "numero2" e assegnarle il valore di "numero1" convertito in intero tramite la funzione std::stoi(). Stampare il valore di "numero2".

#include <string>
using namespace std;

string numero1 = "15";
int numero2 = stoi(numero1);
cout << numero2 << endl;