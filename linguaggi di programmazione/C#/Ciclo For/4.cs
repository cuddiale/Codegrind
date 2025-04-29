// Scrivi un programma che accetti un numero intero positivo da tastiera e utilizzi un ciclo 'for' per calcolarne il fattoriale.

Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
int fattoriale = 1;
for (int i = 1; i <= numero; i++)
{
    fattoriale *= i;
}
Console.WriteLine("Il fattoriale di " + numero + " è: " + fattoriale);