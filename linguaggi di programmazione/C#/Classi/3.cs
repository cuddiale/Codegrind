// Scrivi una classe "Automobile" con le proprietà "Marca" e "Modello" e un metodo "MostraDettagli" che stampi la marca e il modello dell'automobile.

class Automobile
{
    public string Marca { get; set; }
    public string Modello { get; set; }

    public void MostraDettagli()
    {
        Console.WriteLine("Marca: " + Marca);
        Console.WriteLine("Modello: " + Modello);
    }
}