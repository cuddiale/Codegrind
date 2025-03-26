// Dichiarare una variabile di tipo int chiamata "numero1" con valore 25. Dichiarare una variabile di tipo stringa chiamata "numero2" e assegnarle il valore di "numero1" convertito in stringa tramite la funzione std::to_string(). Stampare il valore di "numero2".

#include <string>
using namespace std;

int numero1 = 25;
string numero2 = to_string(numero1);
cout << numero2 << endl;