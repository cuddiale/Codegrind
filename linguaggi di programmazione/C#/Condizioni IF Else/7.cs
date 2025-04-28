// Scrivi un programma che accetta un numero intero dall'utente e utilizza un'istruzione 'if-else' per determinare se è divisibile per un altro numero specifico. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
Console.Write("Inserisci un divisore: ");
int divisore = int.Parse(Console.ReadLine());
if (numero % divisore == 0)
{
    Console.WriteLine("Il numero è divisibile per " + divisore + ".");
}
else
{
    Console.WriteLine("Il numero non è divisibile per " + divisore + ".");
}