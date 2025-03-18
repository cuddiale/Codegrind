// Invertire l'ordine degli elementi in un array:

public class InvertiArray {
    public static void main(String[] args) {
        int[] numeri = {1, 2, 3, 4, 5};
        int[] numeriInvertiti = new int[numeri.length];
        for (int i = 0; i < numeri.length; i++) {
            numeriInvertiti[i] = numeri[numeri.length - 1 - i];
        }
        System.out.println("Numeri: " + Arrays.toString(numeri));
        System.out.println("Numeri invertiti: " + Arrays.toString(numeriInvertiti));
    }
}