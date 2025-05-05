// Scrivi un metodo chiamato "CalcolaFattoriale" che accetta un numero intero e restituisce il suo fattoriale.

public static int CalcolaFattoriale(int numero)
{
    if (numero == 0)
    {
        return 1;
    }

    int fattoriale = 1;
    for (int i = 1; i <= numero; i++)
    {
        fattoriale *= i;
    }

    return fattoriale;
}

// Esempio di utilizzo del metodo:
int numero = 5;
int fattoriale = CalcolaFattoriale(numero);
Console.WriteLine("Il fattoriale di " + numero + " è: " + fattoriale);