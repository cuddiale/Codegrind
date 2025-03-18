// Stampare i numeri da 1 a 10, interrompendo il ciclo quando si raggiunge il numero 5 utilizzando "break":

public class BreakExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                break;
            }
            System.out.println(i);
        }
    }
}