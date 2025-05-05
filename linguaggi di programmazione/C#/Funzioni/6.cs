// Scrivi un metodo chiamato "SommaNumeri" che accetta una lista di numeri interi e restituisce la loro somma.

public static int SommaNumeri(List<int> numeri)
{
    int somma = 0;
    foreach (int numero in numeri)
    {
        somma += numero;
    }

    return somma;
}

// Esempio di utilizzo del metodo:
List<int> numeri = new List<int> { 1, 2, 3, 4, 5 };
int risultatoSomma = SommaNumeri(numeri);
Console.WriteLine("La somma dei numeri è: " + risultatoSomma);