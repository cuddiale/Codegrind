// Creare una classe Calcolatrice con metodi per le operazioni matematiche:

public class Calcolatrice {
    public int somma(int a, int b) {
        return a + b;
    }

    public int sottrazione(int a, int b) {
        return a - b;
    }

    public int moltiplicazione(int a, int b) {
        return a * b;
    }

    public double divisione(double a, double b) {
        return a / b;
    }
}

public static void main(String[] args) {
    Calcolatrice calcolatrice = new Calcolatrice();

    int somma = calcolatrice.somma(5, 3);
    int sottrazione = calcolatrice.sottrazione(5, 3);
    int moltiplicazione = calcolatrice.moltiplicazione(5, 3);
    double divisione = calcolatrice.divisione(5.0, 3.0);

    System.out.println("Somma: " + somma);
    System.out.println("Sottrazione: " + sottrazione);
    System.out.println("Moltiplicazione: " + moltiplicazione);
    System.out.println("Divisione: " + divisione);
}