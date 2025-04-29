// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'foreach' per stampare i caratteri della stringa in ordine inverso.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
char[] caratteri = input.ToCharArray();
Array.Reverse(caratteri);
foreach (char carattere in caratteri)
{
    Console.WriteLine(carattere);
}