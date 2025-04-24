// Scrivi un programma che accetta un numero intero dall'utente e utilizza l'operatore ternario per determinare se è positivo, negativo o zero. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
string risultato = (numero > 0) ? "Il numero è positivo." : (numero < 0) ? "Il numero è negativo." : "Il numero è zero.";
Console.WriteLine(risultato);