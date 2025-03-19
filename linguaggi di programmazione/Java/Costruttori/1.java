// Creare una classe con un costruttore di default e istanziare un oggetto della classe.

public class Persona {
    private String nome;

    public Persona() {
        nome = "Sconosciuto";
    }

    public String getNome() {
        return nome;
    }

    public static void main(String[] args) {
        Persona persona = new Persona();
        System.out.println("Nome: " + persona.getNome());
    }
}