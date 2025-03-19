// Creare una classe `Libro` con attributi privati `titolo`, `autore` e `prezzo`, e fornire metodi per accedere e modificare questi attributi.

public class Libro {
    private String titolo;
    private String autore;
    private double prezzo;

    public String getTitolo() {
        return titolo;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getAutore() {
        return autore;
    }

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public double getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(double prezzo) {
        if (prezzo > 0) {
            this.prezzo = prezzo;
        } else {
            throw new IllegalArgumentException("Il prezzo deve essere positivo.");
        }
    }

    public static void main(String[] args) {
        Libro libro = new Libro();
        libro.setTitolo("Il Signore degli Anelli");
        libro.setAutore("J.R.R. Tolkien");
        libro.setPrezzo(25.99);
        System.out.println("Titolo: " + libro.getTitolo());
        System.out.println("Autore: " + libro.getAutore());
        System.out.println("Prezzo: " + libro.getPrezzo());
    }
}