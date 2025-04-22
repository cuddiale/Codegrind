// Scrivi un programma che dichiara una variabile di tipo float e la converte in una variabile di tipo int. Successivamente, stampa il valore della variabile int.

float numeroFloat = 3.7f;
int numeroIntero = (int)Math.Round(numeroFloat);
Console.WriteLine("Il valore intero è: " + numeroIntero);