// Scrivi un programma che accetta un'età dall'utente e utilizza un'istruzione 'if-else' per determinare se è maggiorenne o minorenne. Stampa il risultato a schermo.

Console.Write("Inserisci l'età: ");
int eta = int.Parse(Console.ReadLine());
if (eta >= 18)
{
    Console.WriteLine("Sei maggiorenne.");
}
else
{
    Console.WriteLine("Sei minorenne.");
}