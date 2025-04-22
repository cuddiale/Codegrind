// Scrivi un programma che dichiari un'enumerazione chiamata "GiorniSettimana" con i giorni della settimana come valori possibili. Successivamente, stampa uno dei valori dell'enumerazione a schermo.

enum GiorniSettimana
{
    Lunedi,
    Martedi,
    Mercoledi,
    Giovedi,
    Venerdi,
    Sabato,
    Domenica
}

GiorniSettimana giorno = GiorniSettimana.Mercoledi;
Console.WriteLine("Il giorno selezionato è: " + giorno);