// Scrivi una classe "Prodotto" con le proprietà "Nome", "Prezzo" e "Quantità" e un metodo "CalcolaTotale" che restituisca il costo totale dei prodotti.

class Prodotto
{
    public string Nome { get; set; }
    public decimal Prezzo { get; set; }
    public int Quantita { get; set; }

    public decimal CalcolaTotale()
    {
        return Prezzo * Quantita;
    }
}