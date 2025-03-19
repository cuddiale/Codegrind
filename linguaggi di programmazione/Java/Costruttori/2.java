// Creare una classe con un costruttore che accetta parametri e istanziare un oggetto della classe.

public class Libro {
    private String titolo;
    private String autore;

    public Libro(String titolo, String autore) {
        this.titolo = titolo;
        this.autore = autore;
    }

    public String getTitolo() {
        return titolo;
    }

    public String getAutore() {
        return autore;
    }

    public static void main(String[] args) {
        Libro libro = new Libro("Il Signore degli Anelli", "J.R.R. Tolkien");
        System.out.println("Titolo: " + libro.getTitolo());
        System.out.println("Autore: " + libro.getAutore());
    }
}