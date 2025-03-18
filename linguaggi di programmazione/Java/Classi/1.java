// Creare una classe Persona con campi nome e cognome:

public class Persona {
    private String nome;
    private String cognome;

    public Persona(String nome, String cognome) {
        this.nome = nome;
        this.cognome = cognome;
    }

    public void saluta() {
        System.out.println("Ciao, sono " + nome + " " + cognome);
    }
}

public static void main(String[] args) {
    Persona persona = new Persona("Mario", "Rossi");
    persona.saluta();
}