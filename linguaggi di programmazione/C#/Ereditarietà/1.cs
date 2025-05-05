// Creare una classe base chiamata "Veicolo" con una proprietà "Velocità" e un metodo "Accelerare" che incrementa la velocità del veicolo.

class Veicolo
{
    public int Velocità { get; set; }

    public void Accelerare(int incremento)
    {
        Velocità += incremento;
    }
}