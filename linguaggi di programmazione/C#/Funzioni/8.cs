// Scrivi un metodo chiamato "GeneraNumeroCasuale" che restituisce un numero casuale compreso tra un valore minimo e un valore massimo specificati come parametri.

public static int GeneraNumeroCasuale(int minimo, int massimo)
{
    Random random = new Random();
    int numeroCasuale = random.Next(minimo, massimo + 1);
    return numeroCasuale;
}

// Esempio di utilizzo del metodo:
int numeroCasuale = GeneraNumeroCasuale(1, 100);
Console.WriteLine("Numero casuale generato: " + numeroCasuale);