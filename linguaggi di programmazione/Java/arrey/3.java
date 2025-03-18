// Trovare il valore minimo in un array di numeri interi:

public class ValoreMinimoArray {
    public static void main(String[] args) {
        int[] numeri = {5, 10, 3, 8, 15};
        int minimo = numeri[0];
        for (int i = 1; i < numeri.length; i++) {
            if (numeri[i] < minimo) {
                minimo = numeri[i];
            }
        }
        System.out.println("Il valore minimo dell'array è: " + minimo);
    }
}
