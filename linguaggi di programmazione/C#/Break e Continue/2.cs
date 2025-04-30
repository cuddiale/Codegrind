// Scrivi un programma che utilizzi un ciclo 'for' per stampare solo i numeri pari da 1 a 10, utilizzando l'istruzione 'continue' per saltare i numeri dispari.

for (int numero = 1; numero <= 10; numero++)
{
    if (numero % 2 != 0)
    {
        continue;
    }
    Console.WriteLine(numero);
}