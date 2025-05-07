// Creare una classe derivata chiamata "Gatto" che eredita dalla classe "Animale" e implementa il metodo "EmettiSuono" per far miagolare il gatto.

class Gatto : Animale
{
    public override void EmettiSuono()
    {
        Console.WriteLine("Il gatto miagola: Miao miao!");
    }
}