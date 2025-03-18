// Stampare gli elementi di un array di interi utilizzando il ciclo "do-while":

public class CicloDoWhile {
    public static void main(String[] args) {
        int[] numeri = {1, 2, 3, 4, 5};
        int i = 0;
        do {
            System.out.println(numeri[i]);
            i++;
        } while (i < numeri.length);
    }
}