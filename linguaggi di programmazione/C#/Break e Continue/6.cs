// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'foreach' per stampare solo i caratteri consonanti della stringa. Utilizza l'istruzione 'continue' per saltare i caratteri vocali.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
foreach (char carattere in input)
{
    if ("aeiouAEIOU".Contains(carattere))
    {
        continue;
    }
    Console.WriteLine(carattere);
}