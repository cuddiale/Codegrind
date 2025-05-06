// Creare una classe derivata chiamata "Rettangolo" che eredita dalla classe "Figura" e implementa il metodo "CalcolaArea" per calcolare l'area di un rettangolo.

class Rettangolo : Figura
{
    public double Larghezza { get; set; }
    public double Altezza { get; set; }

    public override double CalcolaArea()
    {
        return Larghezza * Altezza;
    }
}
