// Scrivi un programma che accetta un voto dall'utente e utilizza un'istruzione 'if-else' per determinare se è sufficiente o insufficiente. Stampa il risultato a schermo.

Console.Write("Inserisci il voto: ");
int voto = int.Parse(Console.ReadLine());
if (voto >= 60)
{
    Console.WriteLine("Voto sufficiente.");
}
else
{
    Console.WriteLine("Voto insufficiente.");
}