// Dichiarare una classe "Banca" con un campo privato "saldo" e un metodo pubblico "VisualizzaSaldo" che stampa il saldo disponibile.

class Banca
{
    private decimal saldo;

    public void VisualizzaSaldo()
    {
        Console.WriteLine("Saldo: " + saldo);
    }
}