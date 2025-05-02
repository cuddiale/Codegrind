// Scrivi un metodo che accetti un parametro di tipo "GiorniSettimana" e stampi un messaggio specifico in base al giorno.

void StampaMessaggio(GiorniSettimana giorno)
{
    switch (giorno)
    {
        case GiorniSettimana.Lunedì:
            Console.WriteLine("Buon inizio settimana!");
            break;
        case GiorniSettimana.Venerdì:
            Console.WriteLine("Felice fine settimana!");
            break;
        default:
            Console.WriteLine("Buon giorno!");
            break;
    }
}

// Esempio di chiamata del metodo
StampaMessaggio(GiorniSettimana.Martedì);