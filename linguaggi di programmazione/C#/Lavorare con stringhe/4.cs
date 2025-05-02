// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'Substring' per estrarre una sottostringa a partire da un indice specifico. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci l'indice di partenza: ");
int indice = int.Parse(Console.ReadLine());
string sottostringa = input.Substring(indice);
Console.WriteLine("La sottostringa è: " + sottostringa);