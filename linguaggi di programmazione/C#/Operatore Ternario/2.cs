// Scrivi un programma che accetta un'età dall'utente e utilizza l'operatore ternario per determinare se è maggiorenne o minorenne. Stampa il risultato a schermo.

Console.Write("Inserisci l'età: ");
int eta = int.Parse(Console.ReadLine());
string risultato = (eta >= 18) ? "Sei maggiorenne." : "Sei minorenne.";
Console.WriteLine(risultato);