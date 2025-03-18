// Stampare i numeri da 1 a 20, saltando i numeri divisibili per 3 utilizzando "continue":

public class ContinueExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 20; i++) {
            if (i % 3 == 0) {
                continue;
            }
            System.out.println(i);
        }
    }
}