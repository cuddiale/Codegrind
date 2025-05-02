// Scrivi un programma che accetta il nome e l'età dall'utente e utilizza l'interpolazione di stringhe per creare una frase composta da entrambi i valori. Stampa il risultato a schermo.

Console.Write("Inserisci il tuo nome: ");
string nome = Console.ReadLine();
Console.Write("Inserisci la tua età: ");
int eta = int.Parse(Console.ReadLine());
string frase = $"Il tuo nome è {nome} e hai {eta} anni.";
Console.WriteLine(frase);