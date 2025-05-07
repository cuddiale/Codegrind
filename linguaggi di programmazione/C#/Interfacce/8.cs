// Creare una classe chiamata "Gatto" che implementa l'interfaccia "IRecitabile" e implementa il metodo "Recita" per far miagolare il gatto.

class Gatto : IRecitabile
{
    public void Recita()
    {
        Console.WriteLine("Il gatto miagola: Miao miao!");
    }
}