// Utilizza il metodo Enum.GetValues per ottenere un array di tutti i giorni della settimana e stampali a schermo.

GiorniSettimana[] giorniArray = (GiorniSettimana[])Enum.GetValues(typeof(GiorniSettimana));

foreach (GiorniSettimana giorno in giorniArray)
{
    Console.WriteLine(giorno);
}