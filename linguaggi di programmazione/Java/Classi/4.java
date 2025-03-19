// Creare una classe Libro con campi titolo, autore e anno di pubblicazione:

public class Libro {
    private String titolo;
    private String autore;
    private int annoPubblicazione;

    public Libro(String titolo, String autore, int annoPubblicazione) {
        this.titolo = titolo;
        this.autore = autore;
        this.annoPubblicazione = annoPubblicazione;
    }

    public void mostraDettagli() {
        System.out.println("Titolo: " + titolo);
        System.out.println("Autore: " + autore);
        System.out.println("Anno di pubblicazione: " + annoPubblicazione);
    }
}

public static void main(String[] args) {
    Libro libro = new Libro("Il Signore degli Anelli", "J.R.R. Tolkien", 1954);
    libro.mostraDettagli();
}