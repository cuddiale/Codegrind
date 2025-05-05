// Scrivi una classe "Libro" con le proprietà "Titolo", "Autore" e "AnnoPubblicazione" e un metodo "StampaDettagli" che stampi tutte le informazioni del libro.

class Libro
{
    public string Titolo { get; set; }
    public string Autore { get; set; }
    public int AnnoPubblicazione { get; set; }

    public void StampaDettagli()
    {
        Console.WriteLine("Titolo: " + Titolo);
        Console.WriteLine("Autore: " + Autore);
        Console.WriteLine("Anno di pubblicazione: " + AnnoPubblicazione);
    }
}