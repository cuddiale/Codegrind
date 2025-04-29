// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'foreach' per contare il numero di caratteri presenti nella stringa.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
int conteggio = 0;
foreach (char carattere in input)
{
    conteggio++;
}
Console.WriteLine("Il numero di caratteri nella stringa è: " + conteggio);