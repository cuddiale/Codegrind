// Stampare i numeri da 1 a 50, interrompendo il ciclo quando si raggiunge un numero dispari utilizzando "break":

public class BreakExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 50; i++) {
            if (i % 2 != 0) {
                break;
            }
            System.out.println(i);
        }
    }
}