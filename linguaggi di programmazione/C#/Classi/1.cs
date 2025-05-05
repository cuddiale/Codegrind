// Scrivi una classe "Persona" con le proprietà "Nome" e "Cognome" e un metodo "StampaInformazioni" che stampi il nome e il cognome della persona.

class Persona
{
    public string Nome { get; set; }
    public string Cognome { get; set; }

    public void StampaInformazioni()
    {
        Console.WriteLine("Nome: " + Nome);
        Console.WriteLine("Cognome: " + Cognome);
    }
}