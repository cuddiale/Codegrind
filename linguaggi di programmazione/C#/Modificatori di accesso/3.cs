// Aggiungere una proprietà pubblica chiamata "Eta" alla classe "Persona" per consentire la lettura e la scrittura dell'età della persona.

class Persona
{
    private string nome;

    public Persona(string nome)
    {
        this.nome = nome;
    }

    public void StampaNome()
    {
        Console.WriteLine("Nome: " + nome);
    }
}

// Esempio di utilizzo del costruttore
Persona persona = new Persona("Mario");
persona.StampaNome();