// Scrivi un programma che accetta un numero intero dall'utente e utilizza un'istruzione 'if-else' per determinare se è compreso tra due valori specifici. Stampa il risultato a schermo.

Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
if (numero > 10 && numero < 20)
{
    Console.WriteLine("Il numero è compreso tra 10 e 20.");
}
else
{
    Console.WriteLine("Il numero non è compreso tra 10 e 20.");
}