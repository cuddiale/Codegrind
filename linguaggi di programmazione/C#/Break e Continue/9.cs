// Scrivi un programma che utilizzi un ciclo 'while' per stampare i numeri da 1 a 50, ma interrompi l'esecuzione quando un numero multiplo di 5 viene trovato.

int numero = 1;
while (numero <= 50)
{
    Console.WriteLine(numero);
    if (numero % 5 == 0)
    {
        break;
    }
    numero++;
}