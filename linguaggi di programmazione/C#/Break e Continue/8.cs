// Scrivi un programma che utilizzi un ciclo 'for' per calcolare la somma dei numeri pari da 1 a 10, utilizzando l'istruzione 'continue' per saltare i numeri dispari.

int somma = 0;
for (int numero = 1; numero <= 10; numero++)
{
    if (numero % 2 != 0)
    {
        continue;
    }
    somma += numero;
}
Console.WriteLine("La somma dei numeri pari da 1 a 10 è: " + somma);