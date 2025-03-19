// Sovrascrivere il metodo `toString` in una classe `Persona` per restituire una rappresentazione personalizzata dell'oggetto.

class Persona {
    private String nome;
    private int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    @Override
    public String toString() {
        return "Nome: " + nome + ", Età: " + eta;
    }
}

public class TestOverride {
    public static void main(String[] args) {
        Persona persona = new Persona("Mario", 30);
        System.out.println(persona);
    }
}