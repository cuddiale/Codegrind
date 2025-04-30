// Scrivi un programma che utilizzi un ciclo 'for' per stampare i numeri da 1 a 10, ma interrompi l'esecuzione quando il numero 5 viene raggiunto.

for (int numero = 1; numero <= 10; numero++)
{
    Console.WriteLine(numero);
    if (numero == 5)
    {
        break;
    }
}