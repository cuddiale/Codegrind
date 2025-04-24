// Scrivi un programma che accetta un numero intero dall'utente e utilizza un'istruzione 'if-else' per determinare se è pari o dispari. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
if (numero % 2 == 0)
{
    Console.WriteLine("Il numero è pari.");
}
else
{
    Console.WriteLine("Il numero è dispari.");
}