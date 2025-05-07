// Creare una classe chiamata "Cerchio" che implementa l'interfaccia "IForma" e implementa il metodo "CalcolaArea" per calcolare l'area di un cerchio.

class Cerchio : IForma
{
    public double Raggio { get; set; }

    public double CalcolaArea()
    {
        return Math.PI * Math.Pow(Raggio, 2);
    }
}