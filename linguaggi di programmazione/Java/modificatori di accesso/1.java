// Creare una classe Persona con un campo nome privato e un metodo getNome pubblico per accedere al valore del campo:

public class Persona {
    private String nome;

    public Persona(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }
}

public static void main(String[] args) {
    Persona persona = new Persona("Mario");
    System.out.println("Nome: " + persona.getNome());
}