// Aggiungere un metodo protetto chiamato "PrelevaDenaro" alla classe "Banca" per consentire il prelievo di denaro dal saldo.

class Banca
{
    private decimal saldo;

    public void VisualizzaSaldo()
    {
        Console.WriteLine("Saldo: " + saldo);
    }

    protected void PrelevaDenaro(decimal importo)
    {
        saldo -= importo;
    }
}

// Esempio di utilizzo del metodo protetto
Banca banca = new Banca();
banca.VisualizzaSaldo();
banca.PrelevaDenaro(100);
banca.VisualizzaSaldo();