// Scrivi un programma che utilizzi un ciclo 'while' per stampare i numeri da 1 a 100, ma interrompi l'esecuzione quando un numero divisibile per 7 viene trovato.

int numero = 1;
while (numero <= 100)
{
    Console.WriteLine(numero);
    if (numero % 7 == 0)
    {
        break;
    }
    numero++;
}