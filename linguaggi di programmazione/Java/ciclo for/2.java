// Calcolare la somma dei numeri da 1 a 100 utilizzando un ciclo "for":

public class CicloFor {
    public static void main(String[] args) {
        int somma = 0;
        for (int i = 1; i <= 100; i++) {
            somma += i;
        }
        System.out.println("La somma dei numeri da 1 a 100 è: " + somma);
    }
}
