// Scrivi un metodo che accetti una stringa e verifichi se corrisponde a un valore valido dell'enum "GiorniSettimana".

bool VerificaGiorno(string valore)
{
    return Enum.TryParse<GiorniSettimana>(valore, out _);
}

// Esempio di chiamata del metodo
bool esisteGiorno = VerificaGiorno("Lunedì");
Console.WriteLine("Esiste giorno: " + esisteGiorno);