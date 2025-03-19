// Creare una semplice classe immutabile `Persona` con attributi `nome` e `età`.

public final class Persona {
    private final String nome;
    private final int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public String getNome() {
        return nome;
    }

    public int getEta() {
        return eta;
    }

    public static void main(String[] args) {
        Persona persona = new Persona("Mario", 30);
        System.out.println("Nome: " + persona.getNome());
        System.out.println("Età: " + persona.getEta());
    }
}