// Creare una classe chiamata "Quadrato" che implementa l'interfaccia "IForma" e implementa il metodo "CalcolaArea" per calcolare l'area di un quadrato.

class Quadrato : IForma
{
    public double Lato { get; set; }

    public double CalcolaArea()
    {
        return Lato * Lato;
    }
}