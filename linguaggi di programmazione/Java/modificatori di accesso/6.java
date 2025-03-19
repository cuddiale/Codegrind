// Creare una classe Cane con un campo nome privato e un metodo mostraNome pubblico per accedere al valore del campo:

public class Cane {
    private String nome;

    public Cane(String nome) {
        this.nome = nome;
    }

    public void mostraNome() {
        System.out.println("Nome: " + nome);
    }
}

public static void main(String[] args) {
    Cane cane = new Cane("Fido");
    cane.mostraNome();
}