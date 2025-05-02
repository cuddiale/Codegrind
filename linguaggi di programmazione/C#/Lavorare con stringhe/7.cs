// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'Contains' per determinare se contiene una sottostringa specifica. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci la sottostringa da cercare: ");
string sottostringa = Console.ReadLine();
bool contieneSottostringa = input.Contains(sottostringa);
Console.WriteLine("La stringa contiene la sottostringa? " + contieneSottostringa);