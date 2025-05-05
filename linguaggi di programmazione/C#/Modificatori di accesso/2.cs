// Aggiungere un costruttore pubblico alla classe "Persona" per impostare il valore della variabile "nome" all'inizializzazione dell'oggetto.

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