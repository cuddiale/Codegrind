// Scrivi un programma che utilizzi un ciclo 'while' per stampare i numeri da 1 a 10, saltando i numeri multipli di 3 utilizzando l'istruzione 'continue'.

int numero = 1;
while (numero <= 10)
{
    if (numero % 3 == 0)
    {
        numero++;
        continue;
    }
    Console.WriteLine(numero);
    numero++;
}