// Scrivi un programma che utilizzi un ciclo 'while' per calcolare la somma dei numeri da 1 a 100 e stampare il risultato.

int somma = 0;
int numero = 1;
while (numero <= 100)
{
    somma += numero;
    numero++;
}
Console.WriteLine("La somma dei numeri da 1 a 100 è: " + somma);