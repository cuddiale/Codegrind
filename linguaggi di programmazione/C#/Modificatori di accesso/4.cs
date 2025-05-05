// Aggiungere un metodo privato chiamato "CalcolaAnnoDiNascita" alla classe "Persona" per calcolare l'anno di nascita basato sull'età corrente.

class Persona
{
    private string nome;
    public int Eta { get; set; }

    public Persona(string nome)
    {
        this.nome = nome;
    }

    public void StampaNome()
    {
        Console.WriteLine("Nome: " + nome);
    }

    private int CalcolaAnnoDiNascita()
    {
        int annoCorrente = DateTime.Now.Year;
        return annoCorrente - Eta;
    }
}

// Esempio di utilizzo del metodo privato
Persona persona = new Persona("Mario");
persona.Eta = 30;
int annoDiNascita = persona.CalcolaAnnoDiNascita();
Console.WriteLine("Anno di nascita: " + annoDiNascita);