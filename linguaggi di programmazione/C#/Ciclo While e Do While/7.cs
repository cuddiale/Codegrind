// Scrivi un programma che accetti una stringa da tastiera e utilizzi un ciclo 'do while' per stampare tutti i caratteri della stringa uno per uno.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
int indice = 0;
do
{
    Console.WriteLine(input[indice]);
    indice++;
} while (indice < input.Length);