// Aggiungi un attributo di descrizione a ciascun membro dell'enum "GiorniSettimana" e stampa le descrizioni dei giorni.

using System.ComponentModel;

enum GiorniSettimana
{
    [Description("Primo giorno della settimana")]
    Lunedì,
    [Description("Secondo giorno della settimana")]
    Martedì,
    // ...
}

// Esempio di utilizzo dell'attributo di descrizione
string descrizioneLunedì = GetEnumDescription(GiorniSettimana.Lunedì);
Console.WriteLine("Descrizione Lunedì: " + descrizioneLunedì);