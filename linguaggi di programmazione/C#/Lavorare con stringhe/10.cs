// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'Split' per dividerla in sottostringhe basate su un delimitatore specifico. Stampa i risultati a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci il delimitatore: ");
string delimitatore = Console.ReadLine();
string[] sottostringhe = input.Split(delimitatore);
Console.WriteLine("Le sottostringhe ottenute sono:");
foreach (string s in sottostringhe)
{
    Console.WriteLine(s);
}