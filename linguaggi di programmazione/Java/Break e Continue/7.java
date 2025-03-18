// Stampare i numeri da 1 a 100, saltando i numeri multipli di 5 utilizzando "continue":

public class ContinueExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++) {
            if (i % 5 == 0) {
                continue;
            }
            System.out.println(i);
        }
    }
}