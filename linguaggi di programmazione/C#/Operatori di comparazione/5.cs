// Scrivi un programma che dichiara due variabili di tipo stringa e utilizza l'operatore di confronto per determinare se la lunghezza della prima stringa è maggiore della seconda. Stampa il risultato a schermo.

string stringa1 = "ciao";
string stringa2 = "hello";
bool primaPiùLunga = stringa1.Length > stringa2.Length;
Console.WriteLine("La prima stringa è più lunga della seconda? " + primaPiùLunga);