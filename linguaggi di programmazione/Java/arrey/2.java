// Trovare il valore massimo in un array di numeri interi:

public class ValoreMassimoArray {
    public static void main(String[] args) {
        int[] numeri = {5, 10, 3, 8, 15};
        int massimo = numeri[0];
        for (int i = 1; i < numeri.length; i++) {
            if (numeri[i] > massimo) {
                massimo = numeri[i];
            }
        }
        System.out.println("Il valore massimo dell'array è: " + massimo);
    }
}