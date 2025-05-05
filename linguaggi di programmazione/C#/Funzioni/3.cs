// Scrivi un metodo chiamato "VerificaNumeroPrimo" che accetta un numero intero e restituisce true se il numero è primo, altrimenti restituisce false.

public static bool VerificaNumeroPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }

    for (int i = 2; i <= Math.Sqrt(numero); i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Esempio di utilizzo del metodo:
int numero = 17;
bool isPrimo = VerificaNumeroPrimo(numero);
Console.WriteLine("Il numero " + numero + " è primo? " + isPrimo);