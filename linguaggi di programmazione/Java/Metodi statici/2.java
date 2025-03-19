// Creare un metodo statico che accetta due numeri interi come parametri e restituisce la loro somma.

public class Calcolatrice {
    public static int somma(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        int risultato = Calcolatrice.somma(5, 10);
        System.out.println("La somma è: " + risultato);
    }
}