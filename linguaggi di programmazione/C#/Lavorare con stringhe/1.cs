// Scrivi un programma che accetta una stringa dall'utente e utilizza il metodo 'Length' per determinare il numero di caratteri presenti nella stringa. Stampa il risultato a schermo.

Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
int lunghezza = input.Length;
Console.WriteLine("La stringa contiene " + lunghezza + " caratteri.");