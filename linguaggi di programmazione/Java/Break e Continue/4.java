// Stampare i numeri da 1 a 100, interrompendo il ciclo quando si raggiunge il primo numero divisibile per 7 utilizzando "break":

public class BreakExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++) {
            if (i % 7 == 0) {
                break;
            }
            System.out.println(i);
        }
    }
}
