// Scrivi un programma che accetta un voto dall'utente e utilizza l'operatore ternario per determinare se è sufficiente o insufficiente. Stampa il risultato a schermo.

Console.Write("Inserisci il voto: ");
int voto = int.Parse(Console.ReadLine());
string risultato = (voto >= 60) ? "Voto sufficiente." : "Voto insufficiente.";
Console.WriteLine(risultato);