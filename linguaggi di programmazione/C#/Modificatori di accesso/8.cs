// Creare una classe "Cancello" con un campo protetto "aperto" e un metodo protetto "StatoCancello" per visualizzare lo stato attuale del cancello.

class Cancello
{
    protected bool aperto;

    protected void StatoCancello()
    {
        if (aperto)
            Console.WriteLine("Il cancello è aperto.");
        else
            Console.WriteLine("Il cancello è chiuso.");
    }
}

// Esempio di utilizzo del metodo protetto
Cancello cancello = new Cancello();
cancello.StatoCancello();
