// Scrivi un programma che accetta un numero intero dall'utente e utilizza un'istruzione 'if-else' per determinare se è positivo, negativo o zero. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
if (numero > 0)
{
    Console.WriteLine("Il numero è positivo.");
}
else if (numero < 0)
{
    Console.WriteLine("Il numero è negativo.");
}
else
{
    Console.WriteLine("Il numero è zero.");
}