// Creare una classe base chiamata "Animale" con una proprietà "Nome" e un metodo "EmettereSuono" che emette un suono dell'animale.

class Animale
{
    public string Nome { get; set; }

    public void EmettereSuono()
    {
        Console.WriteLine("L'animale emette un suono.");
    }
}
