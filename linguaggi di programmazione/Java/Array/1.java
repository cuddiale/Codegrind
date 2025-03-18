// Calcolare la somma degli elementi di un array di interi:

public class SommaArray {
    public static void main(String[] args) {
        int[] numeri = {5, 10, 15, 20, 25};
        int somma = 0;
        for (int numero : numeri) {
            somma += numero;
        }
        System.out.println("La somma degli elementi dell'array è: " + somma);
    }
}