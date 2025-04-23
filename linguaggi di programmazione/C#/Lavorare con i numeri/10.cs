// Scrivi un programma che genera un numero casuale compreso tra 1 e 100. Stampa il numero generato a schermo.

Random rnd = new Random();
int numeroCasuale = rnd.Next(1, 101);
Console.WriteLine("Il numero casuale è: " + numeroCasuale);