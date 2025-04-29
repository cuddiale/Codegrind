// Scrivi un programma che definisca una lista di numeri interi e utilizzi un ciclo 'foreach' per calcolare la media di tutti gli elementi della lista.

List<int> numeri = new List<int>() { 10, 20, 30, 40, 50 };
int somma = 0;
foreach (int numero in numeri)
{
    somma += numero;
}
double media = (double)somma / numeri.Count;
Console.WriteLine("La media dei numeri è: " + media);