// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'ToUpper' per convertire la stringa in maiuscolo. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
string maiuscolo = input.ToUpper();
Console.WriteLine("La stringa in maiuscolo è: " + maiuscolo);