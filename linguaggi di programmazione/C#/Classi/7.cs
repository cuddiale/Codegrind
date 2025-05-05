// Scrivi una classe "Studente" con le proprietà "Nome", "Cognome" e "Matricola" e un metodo "StampaInformazioni" che stampi tutte le informazioni dello studente.

class Studente
{
    public string Nome { get; set; }
    public string Cognome { get; set; }
    public string Matricola { get; set; }

    public void StampaInformazioni()
    {
        Console.WriteLine("Nome: " + Nome);
        Console.WriteLine("Cognome: " + Cognome);
        Console.WriteLine("Matricola: " + Matricola);
    }
}
