// Scrivi un programma che accetti due numeri interi da tastiera, uno come base e l'altro come esponente, e utilizzi un ciclo 'for' per calcolare la potenza della base elevata all'esponente.

Console.Write("Inserisci la base: ");
int baseNumero = int.Parse(Console.ReadLine());
Console.Write("Inserisci l'esponente: ");
int esponente = int.Parse(Console.ReadLine());
int potenza = 1;
for (int i = 0; i < esponente; i++)
{
    potenza *= baseNumero;
}
Console.WriteLine("Il risultato è: " + potenza);