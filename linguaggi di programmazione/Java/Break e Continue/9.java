// Calcolare la somma dei numeri da 1 a 20, saltando i numeri divisibili per 4 utilizzando "continue":

public class ContinueExample {
    public static void main(String[] args) {
        int somma = 0;
        for (int i = 1; i <= 20; i++) {
            if (i % 4 == 0) {
                continue;
            }
            somma += i;
        }
        System.out.println("La somma dei numeri è: " + somma);
    }
}