// Creare un metodo statico che accetta un array di numeri interi e restituisce il valore massimo.

public class ArrayUtils {
    public static int trovaMassimo(int[] numeri) {
        int massimo = numeri[0];
        for (int num : numeri) {
            if (num > massimo) {
                massimo = num;
            }
        }
        return massimo;
    }

    public static void main(String[] args) {
        int[] numeri = {1, 2, 3, 4, 5};
        int massimo = ArrayUtils.trovaMassimo(numeri);
        System.out.println("Il valore massimo è: " + massimo);
    }
}