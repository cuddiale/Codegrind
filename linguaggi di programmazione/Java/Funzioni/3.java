// Calcolare la somma di due numeri interi utilizzando una funzione:

public class SommaNumeri {
    public static void main(String[] args) {
        int numero1 = 5;
        int numero2 = 3;

        int somma = calcolaSomma(numero1, numero2);

        System.out.println("La somma è: " + somma);
    }

    public static int calcolaSomma(int numero1, int numero2) {
        return numero1 + numero2;
    }
}