// Scrivi un metodo chiamato "VerificaPalindromo" che accetta una stringa e restituisce true se la stringa è un palindromo (stessa lettura in avanti e indietro), altrimenti restituisce false.

public static bool VerificaPalindromo(string parola)
{
    string parolaInvertita = "";
    for (int i = parola.Length - 1; i >= 0; i--)
    {
        parolaInvertita += parola[i];
    }

    return parola.Equals(parolaInvertita, StringComparison.OrdinalIgnoreCase);
}

// Esempio di utilizzo del metodo:
string parola = "anna";
bool isPalindromo = VerificaPalindromo(parola);
Console.WriteLine("La parola " + parola + " è un palindromo? " + isPalindromo);