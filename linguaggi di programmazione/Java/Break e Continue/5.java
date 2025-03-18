// Calcolare la somma dei numeri da 1 a 10, saltando il numero 5 utilizzando "continue":

public class ContinueExample {
    public static void main(String[] args) {
        int somma = 0;
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                continue;
            }
            somma += i;
        }
        System.out.println("La somma dei numeri è: " + somma);
    }
}