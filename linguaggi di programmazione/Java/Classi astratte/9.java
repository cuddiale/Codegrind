// Creare una classe astratta Prodotto con un metodo astratto calcolaPrezzo che restituisce il prezzo del prodotto:

public abstract class Prodotto {
    public abstract double calcolaPrezzo();

    public static void main(String[] args) {
        Prodotto prodotto = new Prodotto() {
            public double calcolaPrezzo() {
                return 0;
            }
        };

        double prezzo = prodotto.calcolaPrezzo();
        System.out.println("Prezzo prodotto: " + prezzo);
    }
}