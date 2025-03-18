// Sommare due numeri utilizzando un' espressione lambda:

public class SommaNumeriLambda {
    public static void main(String[] args) {
        Calcolatore calcolatore = (a, b) -> a + b;

        int risultato = calcolatore.calcola(5, 3);

        System.out.println("La somma è: " + risultato);
    }

    interface Calcolatore {
        int calcola(int a, int b);
    }
}