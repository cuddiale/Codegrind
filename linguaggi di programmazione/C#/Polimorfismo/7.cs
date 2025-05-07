// Creare una classe derivata chiamata "Cane" che eredita dalla classe "Animale" e sovrascrive il metodo "EmettiSuono" per far abbaiare il cane.

class Cane : Animale
{
    public override void EmettiSuono()
    {
        Console.WriteLine("Il cane abbaia: Bau bau!");
    }
}