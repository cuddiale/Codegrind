
// Scrivi un programma che definisca un array di numeri interi e utilizzi un ciclo 'foreach' per stampare solo i numeri pari dell'array.

int[] numeri = { 1, 2, 3, 4, 5 };
foreach (int numero in numeri)
{
    if (numero % 2 == 0)
    {
        Console.WriteLine(numero);
    }
}