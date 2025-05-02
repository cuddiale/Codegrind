// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'Trim' per rimuovere gli spazi bianchi iniziali e finali. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
string senzaSpaziatura = input.Trim();
Console.WriteLine("La stringa senza spaziatura è: " + senzaSpaziatura);