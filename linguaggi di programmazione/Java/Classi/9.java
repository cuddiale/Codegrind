// Creare una classe Prodotto con campi nome, prezzo e disponibilità:

public class Prodotto {
    private String nome;
    private double prezzo;
    private boolean disponibile;

    public Prodotto(String nome, double prezzo, boolean disponibile) {
        this.nome = nome;
        this.prezzo = prezzo;
        this.disponibile = disponibile;
    }

    public void mostraDettagli() {
        System.out.println("Nome: " + nome);
        System.out.println("Prezzo: " + prezzo);
        System.out.println("Disponibile: " + (disponibile ? "Sì" : "No"));
    }
}

public static void main(String[] args) {
    Prodotto prodotto = new Prodotto("iPhone", 999.99, true);
    prodotto.mostraDettagli();
}
