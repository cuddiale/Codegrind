// Scrivi un programma che accetta due numeri interi dall'utente e utilizza l'operatore ternario per determinare il maggiore tra i due. Stampa il risultato a schermo.

Console.Write("Inserisci il primo numero: ");
int numero1 = int.Parse(Console.ReadLine());
Console.Write("Inserisci il secondo numero: ");
int numero2 = int.Parse(Console.ReadLine());
int massimo = (numero1 > numero2) ? numero1 : numero2;
Console.WriteLine("Il numero maggiore è: " + massimo);