// Creare una classe derivata chiamata "Cerchio" che eredita dalla classe "Figura" e implementa il metodo "CalcolaArea" per calcolare l'area di un cerchio.

class Cerchio : Figura
{
    public double Raggio { get; set; }

    public override double CalcolaArea()
    {
        return Math.PI * Math.Pow(Raggio, 2);
    }
}