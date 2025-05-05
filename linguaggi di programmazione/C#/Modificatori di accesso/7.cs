// Creare una classe "Prodotto" con un campo interno "prezzo" e un metodo interno "CalcolaSconto" per calcolare lo sconto sul prezzo del prodotto.

class Prodotto
{
    private decimal prezzo;

    public void VisualizzaPrezzo()
    {
        Console.WriteLine("Prezzo: " + prezzo);
    }

    internal decimal CalcolaSconto(decimal scontoPercentuale)
    {
        decimal sconto = prezzo * scontoPercentuale / 100;
        return prezzo - sconto;
    }
}

// Esempio di utilizzo del metodo interno
Prodotto prodotto = new Prodotto();
prodotto.VisualizzaPrezzo();
decimal prezzoScontato = prodotto.CalcolaSconto(10);
Console.WriteLine("Prezzo scontato: " + prezzoScontato);