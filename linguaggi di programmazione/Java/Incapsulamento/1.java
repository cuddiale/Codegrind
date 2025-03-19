// Creare una classe `Persona` con attributi privati `nome` e `età` e fornire metodi getter e setter per accedervi.

public class Persona {
    private String nome;
    private int eta;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getEta() {
        return eta;
    }

    public void setEta(int eta) {
        this.eta = eta;
    }

    public static void main(String[] args) {
        Persona persona = new Persona();
        persona.setNome("Mario");
        persona.setEta(30);
        System.out.println("Nome: " + persona.getNome());
        System.out.println("Età: " + persona.getEta());
    }
}