// Creare una classe Libro che estende la classe Prodotto e implementa il metodo calcolaPrezzo per calcolare il prezzo del libro:

public class Libro extends Prodotto {
    private double prezzo;

    public Libro(double prezzo) {
        this.prezzo = prezzo;
    }

    public double calcolaPrezzo() {
        return prezzo;
    }

    public static void main(String[] args) {
        Libro libro = new Libro(19.99);
        double prezzo = libro.calcolaPrezzo();
        System.out.println("Prezzo libro: " + prezzo);
    }
}