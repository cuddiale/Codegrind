// Scrivi un programma che definisca un array di numeri interi e utilizzi un ciclo 'foreach' per calcolare la somma di tutti gli elementi dell'array.

int[] numeri = { 1, 2, 3, 4, 5 };
int somma = 0;
foreach (int numero in numeri)
{
    somma += numero;
}
Console.WriteLine("La somma degli elementi dell'array è: " + somma);