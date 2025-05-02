// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'ToLower' per convertire la stringa in minuscolo. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
string minuscolo = input.ToLower();
Console.WriteLine("La stringa in minuscolo è: " + minuscolo);