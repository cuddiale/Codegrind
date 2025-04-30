// Scrivi un programma che accetti un numero intero positivo da tastiera e utilizzi un ciclo 'do while' per contare il numero di cifre presenti nel numero.

Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
int conteggioCifre = 0;
do
{
    numero /= 10;
    conteggioCifre++;
} while (numero > 0);
Console.WriteLine("Il numero contiene " + conteggioCifre + " cifre.");