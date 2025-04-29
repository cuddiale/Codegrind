// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'for' per stampare tutti i caratteri della stringa uno per uno.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
for (int i = 0; i < input.Length; i++)
{
    Console.WriteLine(input[i]);
}