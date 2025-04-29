// Scrivi un programma che accetti un numero intero da tastiera e utilizzi un ciclo 'for' per stampare la tabellina di quel numero da 1 a 10.

Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
for (int i = 1; i <= 10; i++)
{
    Console.WriteLine(numero + " x " + i + " = " + (numero * i));
}