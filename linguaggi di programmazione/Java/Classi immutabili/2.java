// Creare una classe immutabile `Indirizzo` che contiene un attributo mutabile `StringBuilder` e rendere l'oggetto immutabile.

public final class Indirizzo {
    private final StringBuilder indirizzo;

    public Indirizzo(String indirizzo) {
        this.indirizzo = new StringBuilder(indirizzo);
    }

    public String getIndirizzo() {
        return indirizzo.toString();
    }

    public static void main(String[] args) {
        Indirizzo ind = new Indirizzo("Via Roma 1");
        System.out.println("Indirizzo: " + ind.getIndirizzo());
    }
}