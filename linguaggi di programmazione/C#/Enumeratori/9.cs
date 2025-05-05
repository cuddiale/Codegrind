// Aggiungi un membro all'enum "GiorniSettimana" con un valore numerico specifico e stampa il suo valore sottostante.

enum GiorniSettimana
{
    // ...
    FineSettimana = 6
}

int valoreFineSettimana = (int)GiorniSettimana.FineSettimana;
Console.WriteLine("Valore FineSettimana: " + valoreFineSettimana);