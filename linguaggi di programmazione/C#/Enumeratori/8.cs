// Scrivi un metodo che restituisca una lista di stringhe contenente tutte le descrizioni dei giorni della settimana.

List<string> GetDescrizioniGiorni()
{
    List<string> descrizioni = new List<string>();

    foreach (GiorniSettimana giorno in giorniArray)
    {
        string descrizione = GetEnumDescription(giorno);
        descrizioni.Add(descrizione);
    }

    return descrizioni;
}

// Esempio di utilizzo del metodo
List<string> descrizioniGiorni = GetDescrizioniGiorni();
foreach (string descrizione in descrizioniGiorni)
{
    Console.WriteLine(descrizione);
}