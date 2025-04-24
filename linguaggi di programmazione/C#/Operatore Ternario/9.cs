// Scrivi un programma che accetta un numero intero dall'utente e utilizza l'operatore ternario per determinare se è compreso tra due valori specifici. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
string risultato = (numero > 10 && numero < 20) ? "Il numero è compreso tra 10 e 20." : "Il numero non è compreso tra 10 e 20.";
Console.WriteLine(risultato);