// Scrivi un programma che chiede all'utente di inserire un numero intero come stringa. Successivamente, converte la stringa in una variabile di tipo int utilizzando il metodo int.Parse(). Stampa il valore della variabile int.

Console.WriteLine("Inserisci un numero intero:");
string numeroStringa = Console.ReadLine();
int numeroIntero = int.Parse(numeroStringa);
Console.WriteLine("Il valore intero è: " + numeroIntero);