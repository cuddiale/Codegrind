// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'foreach' per stampare tutti i caratteri della stringa uno per uno.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
foreach (char carattere in input)
{
    Console.WriteLine(carattere);
}